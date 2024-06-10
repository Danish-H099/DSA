

#include <iostream>
using namespace std;

int main(){
    int a[15] = {2,9,23,-5,99,4,34,82,12,11,102,23,67,32,76};
    int min = a[0];
    int max = a[0];
    for(int i=0; i<15 ; i++){
        if(a[i]<min){
            min = a[i];
        }
        else if(a[i]>max){
            max = a[i];
        }
    }
    printf("Minimum valude is %d and Maximum Value is %d", min, max);
return 0;
}


