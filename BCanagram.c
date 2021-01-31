#include <stdio.h>

int main(){
    int arr1[5]={1, 1, 1, 3, 2};
    int arr2[5]={2, 1, 1, 3, 1};
    int isTrue = 0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr1[i]==arr2[j]){
                isTrue++;
                arr2[j]=0;
                break;
            }
            else
                continue;
        }
    }

    if(isTrue==5)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}