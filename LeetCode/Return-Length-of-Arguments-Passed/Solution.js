1/**
2 * @param {...(null|boolean|number|string|Array|Object)} args
3 * @return {number}
4 */
5var argumentsLength = function (...args) {
6
7    return args.length;
8
9
10
11
12
13
14};
15
16/**
17 * argumentsLength(1, 2, 3); // 3
18 */