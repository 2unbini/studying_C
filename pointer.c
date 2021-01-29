/*
#include <stdio.h>

int main()
{
    int num1=100, num2=100;
    int * pnum;

    pnum=&num1;
    (*pnum)+=30;
    pnum=&num2;
    (*pnum)-=30;

    printf("num1: %d, num2: %d\n", num1, num2);
    return 0;
}
*/

/* 12-1
#include <stdio.h>

int main()
{
    int num=10;
    int * ptr1=&num;
    int * ptr2=ptr1;

    (*ptr1)++;
    (*ptr2)++;
    printf("%d\n", num);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int num1=10, num2=20;
    int *ptr1=&num1;
    int *ptr2=&num2;
    int temp;

    (*ptr1)+=10;
    (*ptr2)-=10;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("%d %d\n", *ptr1, *ptr2);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int arr[3]={0, 1, 2};
    printf("배열의 이름: %p\n", arr);
    printf("첫 번째 요소: %p\n", &arr[0]);
    printf("두 번째 요소: %p\n", &arr[1]);
    printf("세 번째 요소: %p\n", &arr[2]);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int arr1[3]={1, 2, 3};
    double arr2[3]={1.1, 2.2, 3.3};

    printf("%d %g \n", *arr1, *arr2);
    *arr1+=100;
    *arr2+=120.5;
    printf("%d %g\n", arr1[0], *arr2);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int arr[3]={15, 25, 35};
    int * ptr=&arr[0];

    printf("%d %d \n", ptr[0], arr[0]);
    printf("%d %d \n", ptr[1], arr[1]);
    printf("%d %d \n", ptr[2], arr[2]);
    printf("%d %d \n", *ptr, *arr);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int * ptr1=0x0010;
    double * ptr2=0x0010;

    printf("%p %p\n", ptr1+1, ptr1+2);
    printf("%p %p\n", ptr2+1, ptr2+2);

    printf("%p %p\n", ptr1, ptr2);
    ptr1++;
    ptr2++;
    printf("%p %p\n", ptr1, ptr2);
    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    int arr[3]={11, 22, 33};
    int* ptr=arr;
    printf("%d %d %d\n", *ptr, *(ptr+1), *(ptr+2));

    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); printf("\n");
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    int i;

    for(i=0; i<5; i++)
    {
        *(ptr+i)+=2;
        printf("%d ", *(ptr+i));
        printf("%d\n", ptr[i]);
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int i;
    int *ptr;
    ptr=&arr[0];

    for(i=0; i<5; i++)
    {
        *ptr += 2;
        printf("%d ", *ptr);
    }

    return 0;
}
*/

//13-1 문제
/*
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[0];
    int i=0;
    
    *ptr+=2;
    printf("%d ", *ptr);
    for(i=0; i<4; i++)
    {
        ptr+=1;
        *ptr+=2;
        printf("%d ", *ptr);
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    int i;

    for(i=0; i<5; i++)
    {
        *(ptr+i)+=2;
        printf("%d ", *(ptr+i));
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[4];
    int i, sum=arr[4];

    for(i=1; i<5; i++)
    {
        ptr-=1;
        sum+=*ptr;
    }
    printf("%d", sum);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int *ptr1=&arr[0];
    int *ptr2=&arr[5];
    int i, temp;

    for(i=0; i<3; i++)
    {
        temp=*(ptr1+i);
        *(ptr1+i)=*(ptr2-i);
        *(ptr2-i)=temp;
    }
    for(i=0; i<6; i++)
        printf("%d ", *(ptr1+i));
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int num1=10, num2=20, num3=30;
    int *arr[3]={&num1, &num2, &num3};

    printf("%d\n", *arr[0]);
    printf("%d\n", *arr[1]);
    printf("%d\n", *arr[2]);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    char *strArr[3]={"Simple", "String", "Array"};
    printf("%s\n", strArr[0]);
    printf("%s\n", strArr[1]);
    printf("%s\n", strArr[2]);
    return 0;
}
*/

// 함수에서 포인터를 이용해 배열의 요소에 접근하는 법
/*
#include <stdio.h>

void ShowArayElem(int *param, int len)
{
    int i;
    for(i=0; i<len; i++)
        printf("%d ", param[i]);
    printf("\n");
}
int main()
{
    int arr1[3]={1,2,3};
    int arr2[5]={4,5,6,7,8};
    ShowArayElem(arr1, sizeof(arr1)/sizeof(int));
    ShowArayElem(arr2, sizeof(arr2)/sizeof(int));
    return 0;
}
*/

// 각 배열요소에 접근해서 연산도 가능함. 배열의 주소 값만 안다면 어디서든 배열에 접근하여 저장된 값 참조하고 변경할 수 있다.
/*
#include <stdio.h>

void ShowArayElem(int *param, int len){
    int i;
    for(i=0; i<len; i++)
        printf("%d ", param[i]);
    printf("\n");
}

void AddArayElem(int *param, int len, int add){
    int i;
    for(i=0;i<len;i++)
        param[i] += add;
}

int main(){
    int arr[3]={1,2,3};
    AddArayElem(arr, sizeof(arr)/sizeof(int), 1);
    ShowArayElem(arr, sizeof(arr)/sizeof(int));

    AddArayElem(arr, sizeof(arr)/sizeof(int), 5);
    ShowArayElem(arr, sizeof(arr)/sizeof(int));
    return 0;
}
*/

//call by value => 매개변수로 복사된값을 swap한것이므로 그 함수를 나오면 아무짜겡도 쓸보없어짐
/*
#include <stdio.h>

void Swap(int n1, int n2){
    int temp=n1;
    n1=n2;
    n2=temp;
    printf("n1 n2: %d %d\n", n1, n2);
}

int main(){
    int num1=10;
    int num2=20;
    printf("num1 num2: %d %d\n", num1, num2);

    Swap(num1, num2);
    printf("num1 num2: %d %d\n", num1, num2);
    return 0;
}
*/

/*
#include <stdio.h>

void Swap(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int main(){
    int num1=10, num2=20;

    printf("num1 num2: %d %d\n", num1, num2);
    Swap(&num1, &num2);
    printf("num1 num2: %d %d\n", num1, num2);
    return 0;
}
*/

//문제 14-1

/*
#include <stdio.h>

void SquareByValue(int n){
    n *=n;
    printf("%d\n", n);
}

void SquareByReference(int *ptr){
    *ptr *= *ptr;
    printf("%d\n", *ptr);
}

int main(){
    int n=5;
    SquareByValue(n);
    SquareByReference(&n);
    return 0;
}
*/

/*
#include<stdio.h>
int SqByVa(int num){
    return num*num;
}
void SqByRe(int *ptr){
    int num=*ptr;
    *ptr=num*num;
}
int main(){
    int num=10;
    printf("%d\n", SqByVa(num));
    SqByRe(&num);
    printf("%d\n", num);
    return 0;
}
*/


/*
#include <stdio.h>

void Swap(int *ptr1, int *ptr2, int *ptr3){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = temp;
}

int main()
{
    int num1=1, num2=2, num3=3;
    Swap(&num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}
*/
