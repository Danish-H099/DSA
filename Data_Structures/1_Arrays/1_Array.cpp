#include <iostream>
using namespace std;
 
int main(){
    // STATIC ARRAY Stored in Stack
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // DYNAMIC ARRAY Stored in Heap
    int * p;
    p=new int[5];
    for(int i=0;i<5;i++){
        p[i]=2*i;
        cout<<p[i]<<" ";
    }
    cout<<endl;
    delete []p;
return 0;
}