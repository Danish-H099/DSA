#include <iostream>
#include <list>
using namespace std;
 
int main(){
    
    list<int> linkedList;

    // Creating Linked List
    linkedList.push_back(2);
    linkedList.push_back(12);
    linkedList.push_back(22);
    linkedList.push_back(13);

    //Printing Linked List
    cout<<"Our Linked List : ";
    for(int data : linkedList){
        cout<<data<<" ";
    }
return 0;
}