//도전 1
/*
#include <stdio.h>

void PrintOdd(int *ptr){
    int i, j=0;
    int arr[5];
    for(i=0; i<10; i++){
        if((*ptr)%2!=0){
            arr[j]=*ptr;
            j++;
        }
        ptr+=1;
    }
    printf("홀수 출력: ");
    for(j=0; j<5; j++)
        printf("%d ", arr[j]);
}

void PrintEven(int *ptr){
    int i, j=0;
    int arr[5];
    for(i=0; i<10; i++){
        if((*ptr)%2==0){
            arr[j]=*ptr;
            j++;
        }
        ptr+=1;
    }
    printf("짝수 출력: ");
    for(j=0; j<5; j++)
        printf("%d ", arr[j]);
}

int main(){
    int arr[10];
    int i;
    printf("총 10개의 숫자 입력\n");
    for(i=0; i<10; i++){
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    PrintOdd(&arr[0]);
    printf("\n");
    PrintEven(&arr[0]);
    return 0;
}
*/

//도전 2 => 10진수 2진수 변환법, for문 조건 다시한번 확인!!
/*
#include <stdio.h>

int main(){
    int i, j, n, temp;
    int arr[j+1];
    printf("10진수 정수 입력: ");
    scanf("%d", &n);
    temp=n;
    for(j=1; temp/2!=1; j++)
        temp/=2;
    
    for(i=j; i>=0; i--){
        if(n%2==0)
            arr[i]=0;
        else if(n%2!=0)
            arr[i]=1;
        else if(n/2==1)
            arr[i]=1;
        n/=2;
    }
    for(i=0;i<=j;i++)
        printf("%d", arr[i]);
    return 0;
}
*/

//도전 3
/*
#include <stdio.h>

int main(){
    int arr1[10];
    int arr2[10];
    int i, j=0, k=1;
    printf("총 10개의 숫자 입력\n");
    for(i=0; i<10; i++){
        printf("입력: ");
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<10; i++){
        if(arr1[i]%2!=0){
            arr2[j]=arr1[i];
            j++;
        }
        else{
            arr2[10-k]=arr1[i];
            k++;
        }
    }
    printf("배열 요소의 출력: ");
    for(i=0; i<10; i++)
        printf("%d ", arr2[i]);
    return 0;
}
*/

//도전 4 ㅠㅠㅠㅠㅠ 신난다
/*
#include <stdio.h>

void PrintResult(char *ptr, int len){
    int i;
    for(i=0; i<len; i++){
        if(*(ptr+i)!=*(ptr+len-i)){
            printf("회문이 아닙니다.\n");
            break;
        }
    }
    if(i==len)
        printf("회문입니다.\n");
}

int StrLen(char *ptr){
    int j;
    for(j=0; *ptr!='\0'; j++)
        ptr+=1;
    return j;
}

int main(){
    char str[50];
    char *ptr=str;
    int j;
    printf("문자열 입력: ");
    scanf("%s", str);
    j=StrLen(ptr)-1;
    //printf("%d", j);
    PrintResult(ptr, j);
    return 0;
}
*/

//도전 5) Bubble sort
/*
#include <stdio.h>

void BubbleSort(int ary[], int len);

int main(){
    int arr[4]={3, 2, 4, 1};
    int i;

    BubbleSort(arr, sizeof(arr)/sizeof(int));
    for(i=0; i<4; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}

void BubbleSort(int ary[], int len){
    int i, j;
    int temp;

    for(i=0; i<len-1; i++){
        for(j=0; j<(len-i)-1; j++){
            if(ary[j]>ary[j+1]){
                temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
}
*/
// 내림차순.. 
/*
#include <stdio.h>

void DesSort(int arr[], int len);

int main(){
    int arr[7];
    int i;
    for(i=0; i<7; i++){
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    DesSort(arr, 7);
    for(i=0; i<7; i++)
        printf("%d ", arr[i]);
    return 0;
}

void DesSort(int arr[], int len){
    int i, j;
    int temp;
    for(i=0; i<len; i++){
        for(j=0; j<(len-i)-1; j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
*/

#include <stdio.h>

void DesSort(int arr[], int len){
    int i, j, temp;

    for(i=0; i<len-1; i++){
        for(j=0; j<len-1-i; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[7];
    int i;
    int n;

    for(i=0; i<7; i++){
        scanf("%d", &n);
        arr[i] = n;
    }

    DesSort(arr, 7);

    for(i=0; i<7; i++)
        printf("%d ", arr[i]);
    return 0;
}