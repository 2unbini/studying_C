/*
#include <stdio.h>

int main(){
    int arr1[2][2]={
        {1,2}, {3,4}
    };
    int arr2[3][2]={
        {1,2}, {3,4}, {5,6}
    };
    int arr3[4][2]={
        {1,2}, {3,4}, {5,6}, {7,8}
    };

    int (*ptr)[2];
    int i;

    ptr=arr1;
    printf("**Show 2,2 arr1**\n");
    for(i=0; i<2; i++)
        printf("%d %d\n", ptr[i][0], ptr[i][1]);
    
    ptr=arr2;
    printf("**Show 3,2 arr2**\n");
    for(i=0; i<3; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
    
    ptr=arr3;
    printf("**Show 4,2 arr3**\n");
    for(i=0; i<4; i++)
        printf("%d %d\n", ptr[i][0], ptr[i][1]);
    return 0;

}
*/

/*
#include <stdio.h>

void ShowArr2DStyle(int (*arr)[4], int column){
    int i, j;
    for(i=0; i<column; i++){
        for(j=0; j<4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int Sum2DArr(int arr[][4], int column){
    int i, j, sum=0;
    for(i=0; i<column; i++)
        for(j=0; j<4; j++)
            sum+=arr[i][j];
    return sum;
}

int main(){
    int arr1[2][4]={1,2,3,4,5,6,7,8};
    int arr2[3][4]={1,1,1,1,3,3,3,3,5,5,5,5};

    ShowArr2DStyle(arr1, sizeof(arr1)/sizeof(arr1[0]));
    ShowArr2DStyle(arr2, sizeof(arr2)/sizeof(arr2[0]));
    printf("sum of arr1: %d\n", Sum2DArr(arr1, sizeof(arr1)/sizeof(arr1[0])));
    printf("sum of arr2: %d\n", Sum2DArr(arr2, sizeof(arr2)/sizeof(arr2[0])));
    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    int a[3][2]={{1, 2}, {3, 4}, {5, 6}};

    printf("a[0]: %p\n", a[0]);
    printf("*(a+0): %p\n", *(a+0));

    printf("a[1]: %p\n", a[1]);
    printf("*(a+1): %p\n", *(a+1));

    printf("a[2]: %p\n", a[2]);
    printf("*(a+2): %p\n", *(a+2));

    printf("%d %d\n", a[2][1], (*(a+2))[1]);
    printf("%d %d\n", a[2][1], *(a[2]+1));
    printf("%d %d\n", a[2][1], *(*(a+2)+1));

    return 0;
}
*/

//18-1 question n.1
/*
#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)){
    return cmp(age1, age2);
}

int OlderFirst(int age1, int age2){
    if(age1>age2)
        return age1;
    else if(age1<age2)
        return age2;
    else
        return 0;
}

int YoungerFirst(int age1, int age2){
    if(age1<age2)
        return age1;
    else if(age1>age2)
        return age2;
    else
        return 0;
}

int main(){
    int age1=20, age2=30;
    int first;
    
    printf("enterance 1\n");
    first = WhoIsFirst(age1, age2, OlderFirst);
    printf("%d세가 먼저 입장!\n", first);

    printf("enterance 2\n");
    first = WhoIsFirst(age1, age2, YoungerFirst);
    printf("%d first\n", first);

    return 0;
}
*/

/*
#include <stdio.h>

void SimpleAdder(int n1, int n2){
    printf("%d + %d = %d\n", n1, n2, n1+n2);
}

void ShowString(char* str){
    printf("%s \n", str);
}

int main(){
    char* str="Function Pointer";
    int num1=10, num2=20;

    void (*fptr1)(int, int) = SimpleAdder;
    void (*fptr2)(char*) = ShowString;

    fptr1(num1, num2);
    fptr2(str);
    return 0;
}
*/

/*
#include <stdio.h>

int WhoIsFirst(int a1, int a2, int (*cmp)(int n1, int n2)){
    return cmp(a1, a2);
}

int OlderFirst(int a1, int a2){
    if(a1>a2)
        return a1;
    else if(a1<a2)
        return a2;
    else
        return 0;
}

int YoungerFirst(int a1, int a2){
    if(a1<a2)
        return a1;
    else if(a1>a2)
        return a2;
    else
        return 0;
}

int main(){
    int age1=20, age2=30;
    int first;

    printf("enterance 1\n");
    first = WhoIsFirst(age1, age2, OlderFirst);
    printf("%d first\n", first);

    printf("enterance 2\n");
    first = WhoIsFirst(age1, age2, YoungerFirst);
    printf("%d first\n", first);

    return 0;
}
*/

#include <stdio.h>

void ShowAllString(int argc, char* argv[]){
    int i;
    for(i=0; i<argc; i++)
        printf("%s \n", argv[i]);
}

int main(){
    char* str[3]={
        "C Programming",
        "C++ Programming",
        "JAVA Programming"
    };
    ShowAllString(3, str);
    return 0;
}