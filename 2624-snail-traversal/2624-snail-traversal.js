/**
 * @param {number} rowsCount
 * @param {number} colsCount
 * @return {Array<Array<number>>}
 */
Array.prototype.snail = function (rowsCount, colsCount) {
    const arr = this;

    if (rowsCount * colsCount !== arr.length) {
        return [];
    }

    const result = [];

    for (let i = 0; i < rowsCount; i++) {
        result.push([]);
    }


    for (let i = 0; i < arr.length; i++) {
        const col = Math.floor(i / rowsCount);
        let row = i % rowsCount;

        if (col % 2 === 1) {
            row = rowsCount - 1 - row;
        }

        result[row][col] = arr[i];
    }


    return result;

}

/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */