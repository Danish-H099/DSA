#include <iostream>
#include <string>
#include <stack>

using namespace std;
 
int main(){
    string exp = "23+24*2/-";                // 2+3-2*4/2 = 1 
    stack<char> stack;

    for(int i=0;i<exp.length();i++){
        if(exp[i]>=48 && exp[i]<=57){
            stack.push(exp[i]);
        }
        else{
            int b = stack.top() - '0';
            stack.pop();
            int a = stack.top() - '0';
            stack.pop();
            char result;
            switch(exp[i]){
                case '+':
                    result = (a+b) + '0';
                    break;
                case '-':
                    result = (a-b) + '0';
                    break;
                case '*':
                    result = (a*b) + '0';
                    break;
                case '/':
                    result = (a/b) + '0';
                    break;
                default:
                    break;
            }
            stack.push(result);
        }
        cout<<stack.top()<<endl;
    }

    cout<< "Result is : "<<stack.top();

return 0;
}