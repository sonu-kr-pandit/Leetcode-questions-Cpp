/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */


var promiseAll = function(functions) {
    return new Promise((resolve, reject) => {
        const results = new Array(functions.length);
        let resolved = 0;
        
        if (functions.length === 0) {
            resolve([]);
            return;
        }
        
        functions.forEach((fn, i) => {
            fn().then((val) => {
                results[i] = val;
                resolved++;
                if (resolved === functions.length) {
                    resolve(results);
                }
            }).catch((err) => {
                reject(err);
            });
        });
    });
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */