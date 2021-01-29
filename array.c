/*
#include <stdio.h>

int main()
{
    int arr[5];
    int sum=0, i;

    arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

    for(i=0; i<5; i++)
        sum+=arr[i];
    
    printf("배열요소에 저장된 값의 합: %d\n", sum);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5,6,7};
    int arr3[5]={1,2};
    int ar1Len, ar2Len, ar3Len, i;
    
    printf("배열 arr1의 크기: %lu\n", sizeof(arr1));
    printf("배열 arr2의 크기: %lu\n", sizeof(arr2));
    printf("배열 arr3의 크기: %lu\n", sizeof(arr3));

    ar1Len=sizeof(arr1)/sizeof(int);
    ar2Len=sizeof(arr2)/sizeof(int);
    ar3Len=sizeof(arr3)/sizeof(int);

    for(i=0; i<ar1Len; i++)
        printf("%d\n", arr1[i]
        );
    printf("\n");

    for(i=0; i<ar2Len; i++)
        printf("%d\n", arr2[i]);
    printf("\n");

    for(i=0; i<ar3Len; i++)
        printf("%d\n", arr3[i]);
    printf("\n");
    return 0;
}
*/

/* 문제 11-1 더 짧은 식이 어떻게 가능할지 계속 고민하기
#include <stdio.h>
int main()
{
    int n[5], i;
    int max, min, sum;
    for(i=0; i<5; i++)
    {
        printf("입력: ");
        scanf("%d", &n[i]);
    }

    max=min=sum=n[0];
    for(i=1; i<5; i++)
    {
        sum+=n[i];
        if(max<n[i])
            max=n[i];
        if(min>n[i])
            min=n[i];
    }
    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);
    printf("합: %d\n", sum);
    return 0;
}
*/

/* 11-1 문제2 
#include <stdio.h>

int main()
{
    char ch[]={71, 111, 111, 100, 32, 116, 105, 109, 101}; //char ch[]={'G', 'o', 'o', 'd', ' ', ...}로 해도 됨.
    int i;
    for(i=0;i<(sizeof(ch)/sizeof(ch[0])); i++)
    {
        printf("%c", ch[i]);
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    char str[]="Good morning!";
    printf("배열 str의 크기: %lu\n", sizeof(str));
    printf("널 문자 문자형 출력: %c\n", str[13]);
    printf("널 문자 정수형 출력: %d\n", str[13]);

    str[12]='?';
    printf("문자열 출력: %s\n", str);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    char str[50];
    int idx=0;

    printf("문자열 입력: ");
    scanf("%s", str);
    printf("입력 받은 문자열: %s\n", str);

    printf("문자 단위 출력: ");
    while (str[idx] != '\0')
    {
        printf("%c", str[idx]);
        idx++;
    }
    printf("\n");
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    char str[50]="I like C programming";
    printf("string: %s\n", str);

    str[8]='\0';
    printf("string: %s\n", str);

    str[6]='\0';
    printf("string: %s\n", str);

    str[1]='\0';
    printf("string: %s\n", str);
    return 0;
}
*/

//무네 11-2 1번
/*
#include <stdio.h>

int main()
{
    char str[50];
    int i=0;
    printf("문자열 입력: ");
    scanf("%s", str);

    while (str[i]!='\0')
        i++;

    printf("단어 길이: %d", i);
    return 0;
}
*/
//문제 11-2 2번
/*
#include <stdio.h>

int main()
{
    char str[50];
    int i=0, j;

    printf("영단어 입력: ");
    scanf("%s", str);

    while (str[i]!='\0')
        i++;
    j=i;
    for(; i>=0; i--)
        printf("%c", str[i]);
    printf("%c", str[j]);
    return 0;
}
*/

//11-2 문제3... 최댓값 구하는거 다시 숙지!!
/*
#include <stdio.h>

int main()
{
    char str[50];
    int i, j;
    printf("문자 입력: ");
    scanf("%s", str);

    j=str[0];
    for(i=1; str[i]!='\0'; i++)
    {
        if(j<str[i])
            j=str[i];
    }
    printf("아스키 코드 가장 큰 문자: %c", j);
}
*/

