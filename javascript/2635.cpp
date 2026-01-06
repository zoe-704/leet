/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var retval = []; 
    for (var i = 0; i < arr.length; i++) {
        retval[i] = fn(arr[i], i);
    }
    return retval;
};