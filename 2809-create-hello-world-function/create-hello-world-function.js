// function createHelloWorld(){
//     function helloWorld(){
//         return "Hello World";
//     }
//     return helloWorld;
// }
function createHelloWorld(){
    return function helloWorld(){
        return "Hello World";
    }
  
}