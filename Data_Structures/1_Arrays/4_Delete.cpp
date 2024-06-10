// Danish | 17 apr 24
// Delete element at index 4 of an array.
// Best Case  - O(1) - when delete element in the end.
// Worst Case - O(n) - delete element in starting.

#include <iostream>
using namespace std;
 
int main(){
    int a[10] = {1,2,3,4,5,6};
    int len = 6;
    cout<<"Array Before Deleting :";
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }

    // delete(3)
    for(int i = 3 ; i<len ; i++){
        a[i]=a[i+1];
    }
    len--;
    
    cout<<endl<<"Array after Deleting  :";
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    

return 0;
}


