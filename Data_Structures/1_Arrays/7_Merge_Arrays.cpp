// Merging two sorted Array
// Time Complexity = O(m + n)

#include <iostream>
using namespace std;
 
int main(){
    int a[6] ={2,4,11,23,88,92};
    int b[8] ={1,8,33,34,72,99,102,112};
    int c[14];
    int i=0, j=0, k=0;
    while(i<6 && j<8){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
    while(i<6){
        c[k++] = a[i++];
    }
    while(j<8){
        c[k++] = b[j++];
    }
    
    for(int i=0;i<14;i++){
        cout<<c[i]<<" ";
    }

return 0;
}