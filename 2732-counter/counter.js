/**
 * @param {number} n
 * @return {Function} counter
 */
 // closure r concept use hocche
// var createCounter = function(n) {
//     const count = n;
//     return function() {
//         return n++;
//     };
// };
// var createCounter = function(n) {
//     var count = n;
//     return function() {
//         return n++;
//     };
// };
// var createCounter = function(n) {
//     let count = n;
//     return function() {
//         return n++;
//     };
// };
var createCounter = function(n) {
  
    return function() {
        return n++;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */