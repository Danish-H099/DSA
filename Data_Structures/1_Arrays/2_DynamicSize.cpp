// Name : Danish Hussain
// Date : 14 apr 2024
// Demonstration of Dynamic Size of an Array.
//             append(12) in an array.

#include <iostream>
using namespace std;
 
int main(){
    int * p;
    p=new int[5];
    for(int i=0;i<5;i++){
        p[i]=2*i;
        cout<<p[i]<<" ";
    }
    cout<<endl;
// Changing the size of Array (append(12))
    int * q;
    q=new int[6];
    for(int i=0;i<5;i++){
        q[i]=p[i];
        cout<<q[i]<<" ";
    }
    q[5]=13;
    cout<<q[5]<<endl;
return 0;
}