//1번 문제
/*
#include <stdio.h>

int main()
{
    int num;
    printf("10진수 입력: ");
    scanf("%d", &num);
    printf("10진수 %d의 16진수 값: %X", num, num);
    return 0;
}
*/

//2번 문제
/*
#include <stdio.h>
int NineByNine(int n1, int n2)
{ 
    int n3;
    int dan=1;
    int num=1;

    if(n1>n2)
    {
        n3=n1-n2;
        dan=n2;
        for(; n3>=0; n3--)
        {
            for(num=1;num<10;num++)
            {
                printf("%d * %d = %d\n", dan, num, dan*num);
            }
            dan++;
            num=1;
        }
    }
    else
    {
        n3=n2-n1;
        dan=n1;
        for(; n3>=0; n3--)
        {
            for(num=1;num<10;num++)
            {
                printf("%d * %d = %d\n", dan, num, dan*num);
            }
            dan++;
            num=1;
        }
    }
    return 0;    
}

int main()
{
    int n1, n2;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &n1, &n2);
    NineByNine(n1, n2);
    return 0;
}
*/

//문제 3
/*
#include <stdio.h>

int GCD(int num1, int num2);
int main()
{
    int num1, num2;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    GCD(num1, num2);
    return 0;
}

int GCD(int num1, int num2)
{
    int num3;
    for(num3=2; num3<num1 && num3<num2 ; num3++)
    {
        if(num1%num3==0 && num2%num3==0)
            printf("최대공약수: %d\n", num3);
        else
            continue;
    }
    return 0;
}
*/

//문제 4
/*
#include <stdio.h>
int main()
{
    int x, y, z;

    printf("현재 당신이 소유하고 있는 금액: 3500\n");
    for(x=1; x<10; x++)
    {
        for(y=1; y<10; y++)
        {
            for(z=1; z<10; z++)
            {
                if(500*x+700*y+400*z==3500)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", x, y, z);
                else
                    continue;
            }
        }
    }
    printf("어떻게 구입하시겠습니까?");
    return 0;
}
*/

//문제 5
//씨바꺼 해냇다 개꿀잠 두다리 존나뻗고잔다.
#include <stdio.h>
int main()
{
    int num=3, n=0, i=2;
    int x=num/i; //몫
    int y=num%i; //나머지

    printf("2 ");
    for(num=3;n<9;num++)
    {
        for(i=2;i<=num;i++)
        {
            x=num/i;
            y=num%i;
            if(y==0)
            {
                if(x==1 || x==num)
                {    
                    printf("%d ", num);
                    n++;
                }
                else
                    break;
            }
        }
    }
    return 0;
}

//문제 6
/*
#include <stdio.h>
int main()
{
    int h=0, m=0, s=0;
    printf("초 입력: ");
    scanf("%d", &s);

    if(s<60)
        s=s;
    else if(60<=s && s<3600)
    {
        m=s/60;
        s=s%60;
    }
    else
    {
        h=s/3600;
        m=(s%3600)/60;
        s=(s%3600)%60;
    }
    printf("[h:%d, m:%d, s:%d]\n", h, m, s);
    return 0;
}
*/

//문제 7
/*
#include <stdio.h>
int main()
{
    int n, k, i;
    i=1;
    printf("상수 n 입력: ");
    scanf("%d", &n);

    if(n==0)
        printf("존재하지 않음\n");
    else if(n==1)
        printf("공식을 만족하는 k의 최댓값은 0\n");
    else
    {
        for(k=0; i<=n; k++)
            i*=2;
        printf("공식을 만족하는 k의 최댓값은 %d\n", k-1);
    }
    return 0;
}
*/

//문제 8
/*
#include <stdio.h>
int Two(int n)
{
    if(n==0)
        return 1;
    else
        return 2*Two(n-1);
}

int main()
{
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);
    printf("2의 %d승은 %d\n", n, Two(n));
    return 0;
}
*/