let text = [];
let endText = [];

let func = (i, hypen, text, endText)=>{
    if(i == -1){
        return text, endText;
    }   

    text.append(hypen + "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.");
    text.append(hypen + '"재귀함수가 뭔가요?"');
    
    
    text.unshift(hypen + "라고 답변하였지.")

    hypen += "____";
    i--;
}