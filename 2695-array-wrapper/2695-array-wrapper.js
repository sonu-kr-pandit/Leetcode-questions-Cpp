var ArrayWrapper = function(nums) {
    constructor(nums)
    {
        this.nums = nums;
    }
};

ArrayWrapper.prototype.valueOf = function() {
    let result = 0;
    this.nums.forEach(v=>{
        result += v;
    })
    return result;
}

ArrayWrapper.prototype.toString = function() {
    return `[` + this.nums.join(',') + `]`;
}   