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

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */

let isVowel = s => {
    if (s === 'a' || s === 'e' || s === 'i' || s === 'o' || s === 'u')
        return true;
    return false;
}

function vowelsAndConsonants(s) {
    for (let i = 0; i < s.length; ++i){
        if (isVowel(s[i]))
            console.log(s[i]);
    }
    for (let i = 0; i < s.length; ++i){
        if (!isVowel(s[i]))
            console.log(s[i]);
    }
}

