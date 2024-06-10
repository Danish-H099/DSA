#include <iostream>
#include <list>
using namespace std;
 
int main(){

    list<int> myList {13, 18, 9, 6};

    myList.reverse();
    
    for(int data : myList){
        cout<<data<<" ";
    }
return 0;
}