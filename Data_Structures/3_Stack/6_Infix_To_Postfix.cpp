
// This Program doesn't check for Associativity (work if all the operators have same associativity(L->R) or if for opposite associavite operand if only 1 present so we don't need to use its associativity) so Some Expressions may give you wrong results.

// This program will work for all the expression with + - * / and 1 ^ and ();

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prefix(char a){
    if(a=='+'|| a=='-')
        return 1;
    else if (a=='*' || a=='/')
        return 2;
    else if (a=='^')
        return 3;
}

int main() {
    stack<char> myStack;
    string exp = "K+L-M*N+(O^P)*W/U/V";

    for(int i=0;i<exp.length();i++){
        if(exp[i]>=65 && exp[i]<=90){
            cout<<exp[i];
        }
        else if(myStack.empty() || exp[i]=='('){
            myStack.push(exp[i]);
        }
        else if(myStack.top()=='('){
            myStack.push(exp[i]);
        }
        else if (exp[i]==')'){
            while(myStack.top() !='('){
                cout<<myStack.top();
                myStack.pop();
            }
            myStack.pop();
        }
        else if (prefix(exp[i])>prefix(myStack.top())){
            myStack.push(exp[i]);
        }
        else if(prefix(exp[i])<prefix(myStack.top())){
            while(prefix(myStack.top()) != prefix(exp[i])){
                cout<<myStack.top();
                myStack.pop();
            }
            cout<<myStack.top();
            myStack.pop();
            myStack.push(exp[i]);
        }
        else if(prefix(exp[i]) == prefix(myStack.top())){
            cout<<myStack.top();
            myStack.pop();
            myStack.push(exp[i]);
        }
        

    }
    while(!myStack.empty()){
        cout<<myStack.top();
        myStack.pop();
    }

    return 0;
}




