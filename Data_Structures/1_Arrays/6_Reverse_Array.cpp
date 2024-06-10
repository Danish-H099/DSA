#include <iostream>
using namespace std;

int main(){
    int a[15] = {2,9,23,-5,99,4,34,82,12,11,102,23,67,32,76};
    for(int i=0,j=14;i<=j;i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout<<"Array after reverse :";
    for(int i=0;i<15;i++){
        cout<<a[i]<<" ";
    }
return 0;
}