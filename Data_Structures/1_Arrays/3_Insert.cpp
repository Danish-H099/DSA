// Danish | 17 apr 24
// Insert 13 at index 4 of an array
// Best Case  - O(1) - when you insert element in the end
// Worst Case - O(n) - insert element in starting

#include <iostream>
using namespace std;
 
int main(){
    int a[10] = {1,2,3,4,5,6};
    int len = 6;
    cout<<"Array Before Interting :";
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }

    // insert(4,13)
    for(int i = len ; i>4 ; i--){
        a[i]=a[i-1];
    }
    a[4]=13;
    len++;
    
    cout<<endl<<"Array after Interting  :";
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    

return 0;
}