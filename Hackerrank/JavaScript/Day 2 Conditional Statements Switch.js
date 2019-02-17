'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function getLetter(s) {
    let letter = s[0];
    // Write your code here
    if (letter === "a" || letter === "e" || letter === "i" || letter === "o" || letter === "u") return "A"
    else if (letter === "b" || letter === "c" || letter === "d" || letter === "f" || letter === "g") return "B"
    else if (letter === "h" || letter === "j" || letter === "k" || letter === "l" || letter === "m") return "C"
    else return "D";
}

