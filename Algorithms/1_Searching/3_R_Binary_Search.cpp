/* Time complexity:
    Best Case: O(1) - When element is present at middle of the array.
    Worst Cast : O(log(n)) - When element isn't present in the array.     */

// ---------------------------- USING RECURSION ------------------------
#include <iostream>
using namespace std;

 void binarySearch(int key, int a[], int first, int last){
    int mid = (first+last)/2;
    
    if(first>last){
            cout<<"key Not Found";
            return;
        }
    else if (a[mid]==key){
        cout<<"Key is present at "<<mid+1<<" position";
        return;
    }
    else {
        
        if(a[mid]<key){
            binarySearch(key, a, mid+1, last);
        }
        else{
            binarySearch(key, a, first, mid-1 );
        }

    }
 }

int main(){
    int a[12] = {2,4,9,12,21,23,32,34,67,76,82,99};
    int first=0, last=11;
    int key;
    cout<<"Enter the key :";
    cin>>key;
    int i;
    binarySearch(key, a, first, last);
    
return 0;
}

