1/**
2 * @param {number[]} arr
3 * @param {Function} fn
4 * @return {number[]}
5 */
6var map = function (arr, fn) {
7
8    let result = [];
9
10    for (let i = 0; i < arr.length; i++) {
11        result.push(fn(arr[i], i));
12    }
13
14    return result;
15
16
17
18
19};