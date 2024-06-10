#include <iostream>
using namespace std;
 
void TOH(int n, int A , int B, int C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("%d to %d\n",A,C);
        TOH(n-1,B,A,C);
    }
}

int main(){
    int n;
    cout<<"Enter the number of disks:";
    cin>>n;
    TOH(n,1,2,3); // 1,2,3 are the number of rods A,B,C
return 0;
}