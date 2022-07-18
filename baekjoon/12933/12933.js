const filePath = process.platform === 'linux' ? '/dev/stdin' : './input.txt';
let input = require('fs').readFileSync(filePath).toString().trim().split('\n');
const n = input[0];

function solution(n) {

    let translateFrom = {
        "q":0,
        "u":1,
        "a":2,
        "c":3,
        "k":4
    }

    let nLength = n.length;
    let i = 0;

    let countQ = 0;
    let kPlace = [];

    while(i < nLength){
        if(translateFrom[n[i]] == 0){
            countQ++;
        }
        else if(translateFrom[n[i]] == 4){
            kPlace.push(i);
        }
        i++;
    }
    i = 0;
    while(i < countQ){
        let j = 0;
        let check = 1;
        while(j < kPlace[i]){
            if(translateFrom[n[i]] == check){
                check++;
                n.replace(n[i]);
            }

            if(check == 3){
                break;
            }
            
            if(j == (kPlace[i].legnth - 1)){
                return -1;
            }
            j++;
        }
        i++;
    }

    return countQ;
}

const answer = solution(n);
console.log(answer);