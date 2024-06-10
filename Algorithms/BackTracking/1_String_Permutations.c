// Given     : We have a string
// Output    : All the permutations of that string
// Technique : • We define a tree with each node as a Character and leaf node gives the whole permutation
//             • We are using an Array(Res) whose indices are height(K) and store the permutation.
//             • Array(A) with indices i tells the position of character in original string and store 1 if included that character otherwise 0.
//             • As K reaches the end move up one step in a tree and A[i] is 0 and i++.
//             • If i reaches end then move up again. and have value of k and i same. put A[i] =0 and i++;

// • Since we are going back and taking another router so recursion will be used.

#include <stdio.h>
#include <string.h>

void permute(char str[], int k){
    static int A[7] = {0};
    static char res[7];
    int i;

    if (str[k] == '\0'){
        printf("%s", res);
        printf("\n");
    }
    else{
        for (i = 0; str[i] != '\0'; i++){
            if (A[i] == 0){
                res[k] = str[i];
                A[i] = 1;
                permute(str, k + 1);
                A[i] = 0;
            }
        }
    }
}
int main(){
    char str[] = "DANISH";
    permute(str, 0); // 0 is the index of Arr(Res)
    return 0;
}