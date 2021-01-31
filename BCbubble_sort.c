#include <stdio.h>

//입력받아서 배열에 저장하는 방식

int main(){
    int arr[5];
    int temp;
    
    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);
    
    for(int j=0; j<5; j++){
        for(int k=0; k<4-j; k++){
            if(arr[k]>arr[k+1]){
                temp=arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }

    printf("오름차순 정렬: ");
    for(int i=0; i<5; i++)
        printf("%d ", arr[i]);
}
