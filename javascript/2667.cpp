/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        const text = "Hello World";
        return text;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */