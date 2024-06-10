// Merge two strings alternatively
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    string str1 = "Danish";
    string str2 = "HussainDar";
    string merged = "";
    int min, max, add;
    
        if(str1.length()<=str2.length()){
            min = str1.length();
            max = str2.length();
        }
        else{
            min = str2.length();
            max = str1.length();
        }
    
        int i=0,j=0,k=0;

        while(i<min || j<min){
            if(k%2==0){
                merged += str1[i++];
            }
            else{
                merged += str2[j++];
            }
            k++;
        }
    
        if(min == str1.length()){
            while(j<str2.length()){
                merged += str2[j++];
            }
        }
        else{
            while(i<str1.length()){
                merged += str1[i++];
            }
        }
        cout<<merged;
return 0;
}