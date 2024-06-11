#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
int main(){
    string exp = "((A+B)*(-B)(((4+2)*2)))";
    stack<char> stack;

    for(int i=0;i<exp.length();i++){
        if(exp[i]=='('){
            stack.push(exp[i]);
        }
        else if (exp[i]==')'){
            stack.pop();
        }
    }
    if(stack.empty()){
        printf("Parenthesis Matching");
    }
    else{
        printf("Parenthesis Not Matching");
    }
return 0;
}