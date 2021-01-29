#include <stdio.h>

/*
int main()
{
    int num;
    int i;
    int sum=0;

    printf("정수 값 입력: ");
    scanf("%d", &i);

    for(num=0; num<=i; num++)
    {
        sum+=num;
    }

    printf("sum: %d", sum);
    return 0;
}
*/

/*
int main()
{
    float i;
    float sum=0;
    int count=0;

    for (count=0; i>=0; count++)
    {
        sum+=i;
        printf("0이상의 실수 입력: ");
        scanf("%f", &i);
    }
    
    printf("합계: %f\n평균: %f", sum, sum/(count-1));
    return 0;

}
*/

/*
int main()
{
    int num1;
    int num2;
    int num;
    int sum=0;

    printf("작은 정수부터 입력: ");
    scanf("%d %d", &num1, &num2);
    for ( num=num1; num<=num2; num++)
    {
        sum+=num;
    }
    printf("%d 부터 %d 까지의 합: %d", num1, num2, sum);
    return 0;
}
*/

/*
int main()
{
    int n;
    int sum=1;
    int num=1;

    printf("n! 값을 구할 n을 입력하세요: ");
    scanf("%d", &n);

    for (; num<=n ; num++)
    {
        sum*=num;
    }
    printf("n! = %d", sum);
    return 0;
    
}
*/


int main()
{
    int dan=2;
    int num=1;

    printf("구구단 시작!\n\n");
    for (; dan<10; dan++)
    {
        printf("%d단\n", dan);
        for (; num<10; num++)
        {
            printf("%d * %d = %d\n", dan, num, dan*num);
        }
        num=1;
        printf("\n");
    }
    printf("끝!");
    return 0;
}