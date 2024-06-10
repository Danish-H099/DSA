#include <iostream>
using namespace std;
class Array{
    private:
        int *A;
        int size;
        int lenght;
    public:
        Array(){
            size=10;
            lenght=0;
            A=new int[size];
        }
        Array(int sz){
            size=sz;
            lenght=0;
            A=new int[size];
        }
        ~Array(){
            delete []A;
        }
        
        void display();
        void insert(int,int);
};


void Array::display(){
    cout<<"The Array is :";
    for(int i=0;i<lenght;i++){
        cout<<A[i]<<" ";
    }
}

void Array::insert(int index, int value){
    A[index] = value;
    lenght++;
}
 
int main(){

    Array arr(10);

    arr.insert(0,3);
    arr.insert(1,7);
    arr.insert(2,6);
    arr.insert(3,4);
    arr.insert(4,13);

    arr.display();
return 0;
}