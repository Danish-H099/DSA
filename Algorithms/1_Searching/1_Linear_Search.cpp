/* Time complexity:
    Best Case: O(1) - When element is present at middle of the array.
    Worst Cast : O(log(n)) - When element isn't present in the array.     */

#include <iostream>
using namespace std;
 
int main(){
    int a[12] = {2,9,23,99,4,34,82,12,23,67,32,76};
    int key;
    cout<<"Enter the key :";
    cin>>key;
    int i;
    for(i=0 ; i< 12 ;i++){
        if (key==a[i]){
            cout<<"You key is present at "<<i+1<<" Position";
            break;
        } 
    }
    if(i==12){
            cout<<"key Not Found";
        }
return 0;
}

