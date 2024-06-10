#include <iostream>
#include <list>
using namespace std;

int main() {
    
    list<int> myList = {2, 3, 4};

    int choice = 1;
    int data, pos;

    while(choice){
        auto it = myList.begin(); //returns an iterator pointing to the first element of the list. This iterator can be used to traverse the list or to insert or remove elements at specific positions.
        printf("\n\nChoice which Operation you want :\n 1. insertBeg() \n 2. insertEnd()\n 3. insertPos()\n 0 for exit\n");
        scanf("%d", &choice);

        if(choice == 0){
            exit(1);
        }
        printf("Enter the data you want to insert : ");
        scanf("%d", &data);

        switch (choice){
        
        // Insert at the beginning
        case 1:
            myList.push_front(data);
            break;

        case 2:
            myList.push_back(data);
            break;
        
        // Insert at a specific position
        case 3:
            printf("Enter Position : ");
            scanf("%d", &pos);
            advance(it, (pos-1)); // Move iterator to the pos-1 element
            myList.insert(it, data);
            break;
        
        default:
            break;
        }
        
        printf("\nLinked List after the Operation :");
        // Print the list
        for (int n : myList) {
            cout << n << ' ';
        }
    }

    return 0;
}