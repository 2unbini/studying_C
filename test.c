#include <stdio.h>

/* 문제1
int main(void)
{

int num1, num2;
int result1, result2;

printf("첫번재 정수: ");
scanf("%d", &num1);
printf("두번째 정수: ");
scanf("%d", &num2);

result1=num1-num2;
result2=num1*num2;

printf("뺄셈: %d - %d = %d\n", num1, num2, result1);
printf("곱셈: %d * %d = %d", num1, num2, result2);

return 0;

}
*/

/* 문제2
int main()
{

int num1, num2, num3;
int result;

printf("num1 2 3: ");
scanf("%d %d %d", &num1, &num2, &num3);

result = num1*num2+num3;

printf("%d * %d + %d = %d", num1, num2, num3, result);
return 0;

}
*/

/* 문제3
int main()
{
    int num1, result;

    printf("제곱할 정수 입력: ");
    scanf("%d", &num1);

    result=num1*num1;

    printf("값: %d", result);
    return 0;

}
*/

/* 문제 4
int main()
{
    int num1, num2;
    int result1, result2;

    printf("첫번째 정수 입력: ");
    scanf("%d", &num1);
    printf("두번째 정수 입력: ");
    scanf("%d", &num2);

    result1=num1/num2;
    result2=num1%num2;

    printf("몫: %d, 나머지: %d", result1, result2);
    return 0;

}
*/


int main()
{

    int num1, num2, num3;
    int result;

    printf("정수1 입력: ");
    scanf("%d", &num1);
    printf("정수2 입력: ");
    scanf("%d", &num2);
    printf("정수3 입력: ");
    scanf("%d", &num3);

    result=(num1-num2)*(num2+num3)*(num3%num1);

    printf("계산값: %d", result);

    return 0;

}