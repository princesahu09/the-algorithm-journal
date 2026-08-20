1/**
2 * @param {...(null|boolean|number|string|Array|Object)} args
3 * @return {number}
4 */
5var argumentsLength = function(...args) {
6
7    var counter=0;
8
9    for(var i=0;i<args.length;i++)counter++;
10    return counter;
11
12
13    
14    
15};
16
17/**
18 * argumentsLength(1, 2, 3); // 3
19 */