#include <iostream>
#include <list>
using namespace std;
 
void display(list<int> myList){
    // Print the list
    for (int n : myList) {
        std::cout << n << ' ';
    }
    cout<<endl;
}

int main(){
    list<int> myList = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10, 11, 12, 13};
    display(myList);
    
    // Delete the first element
    myList.pop_front();
    cout<<"after pop_front : ";
    display(myList);

    // Delete the last element
    myList.pop_back();
    cout<<"after pop_back  : ";
    display(myList);

    // Declare an iterator and initialize it to the beginning of the list
    auto it = myList.begin();
    std::advance(it, 2); // Move iterator to the third element
    // Erase the element at the specified position
    myList.erase(it);
    cout<<"Remove at 3     : ";
    display(myList);

    // Remove all occurrences of the value 2
    myList.remove(7);
    cout<<"After remove(2) : ";
    display(myList);

return 0;
}