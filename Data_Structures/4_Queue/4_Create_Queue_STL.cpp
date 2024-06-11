#include <iostream>
#include <queue>
using namespace std;

int main() {
    std::queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Dequeue elements
    cout<<"Your Queue is : ";
    while (!q.empty()) {
        std::cout << q.front()<<" ";
        q.pop();
    }

    return 0;
}
