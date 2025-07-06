#include <stack>
#include <cmath>
#include "solution.h"

std::string Solution::solve(std::string s){
    std::stack<std::string> stack;
    std::stack<int> intStack;
    int currentNum = 0;
    std::string currentString = "";


    for(int i=0;i<s.size();i++){
        if(std::isdigit(s[i])){
            currentNum = currentNum * 10 + (s[i] - '0');   
            if(currentString != ""){
                stack.push(currentString);
                currentString = "";
            }
        }else if(s[i]=='['){
            stack.push(std::string(1,s[i]));
            intStack.push(currentNum);
            currentNum = 0;
        }else if (s[i]==']'){
            int currentNumber= intStack.top();
            intStack.pop();

            
            std::string repetitionBase = "",repeatedString ="";
            stack.push(currentString);
            currentString = "";

            while(stack.top() != "["){
                repetitionBase = stack.top() + repetitionBase;
                stack.pop();
            }
            stack.pop();

            while(currentNumber--){
                repeatedString += repetitionBase;
            }
            stack.push(repeatedString);

        }else{
            currentString+= s[i];
        }
    }
    if(currentString != ""){
        stack.push(currentString);
    }

    std::string result ="";

    while(!stack.empty()){
        result = stack.top() + result;
        stack.pop();
    }
    return result;
}

std::string Solution::test(std::string s){
    return solve(s);
}