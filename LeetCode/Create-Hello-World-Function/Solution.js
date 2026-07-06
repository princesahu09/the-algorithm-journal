1/**
2 * @return {Function}
3 */
4var createHelloWorld = function() {
5    
6    return function(...args) {
7
8        return "Hello World";
9        
10    }
11};
12
13/**
14 * const f = createHelloWorld();
15 * f(); // "Hello World"
16 */