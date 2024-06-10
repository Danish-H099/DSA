#include <iostream>
#include <stack> // Include stack header
using namespace std;

int main() {
    // Create a stack of integers
    stack<int> myStack;

    // Push elements
    myStack.push(10); // Stack: [10]
    myStack.push(20); // Stack: [10, 20]
    myStack.push(30); // Stack: [10, 20, 30]

    // Access the top element
    cout << "Top element: " << myStack.top() << endl; // Output: 30

    // Pop an element
    myStack.pop(); // Stack: [10, 20]
    cout << "Top element after pop: " << myStack.top() << endl; // Output: 20

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Get the size of the stack
    cout << "Stack size: " << myStack.size() << endl; // Output: 2

    return 0;
}
