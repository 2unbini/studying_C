#include <stdio.h>

/*
int main()
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    if(num<0)
        printf("입력 값은 0보다 작다.\n");

    if(num>0)
        printf("입력 값은 0보다 크다.\n");

    if(num==0)
        printf("입력 값은 0이다.\n");

    return 0;
    
}
*/

//사칙연산 계산기
/*
int main()
{
    int num;
    float i, j;
    float sum;

    printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n선택?");
    scanf("%d", &num);
    printf("두 개의 실수 입력: ");
    scanf("%f %f", &i, &j);

    if (num==1)
        printf("%f + %f = %f\n", i, j, i+j); //식을 굳이 보여주지 않아도 되면, 여기서는 sum=i+j로 쓰고, 맨 밑에 printf 함수로 결과: 보여주면 됨.
    if(num==2)
        printf("%f - %f = %f\n", i, j, i-j);
    if(num==3)
        printf("%f * %f = %f\n", i, j, i*j);
    if(num==4)
        printf("%f / %f = %f\n", i, j, i/j);

    return 0;
}
*/

/*
int main()
{
    int num;

    for (num=1; num<100; num++)
    {
        if(num%3==0 || num%4==0)
            printf("3또는 4의 배수: %d\n", num);
    }
    return 0;
}
*/

/*
int main()
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    if(num>0)
        printf("입력 값은 0보다 크다\n");
    else
        printf("입력 값은 0보다 작거나 같다\n");
    return 0;
    
}
*/

/*
int main()
{
    int num;
    double i, j;
    double result;

    printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n계산선택:");
    scanf("%d", &num);
    printf("두 개의 실수 입력: ");
    scanf("%lf %lf", &i, &j);

    if(num==1)
        result=i+j;
    else if(num==2)
        result=i-j;
    else if(num==3)
        result=i*j;
    else
        result=i/j;

    printf("결과: %lf\n", result);
    return 0;   
}
*/

//조건 연산자! (조건) ? 참일때 결과 : 거짓일때 결과
/*
int main(void)
{
    int num, abs;
    printf("정수 입력: ");
    scanf("%d", &num);

    abs=num>0 ? num : num*(-1);
    printf("절댓값: %d\n", abs);
    return 0;
}
*/

//08-1 문제1
/*
int main()
{
    int num;
    for (num=1; num<=100; num++)
    {
        if(num%7==0)
            printf("7 혹은 9의 배수: %d\n", num);
        else if(num%9==0 && num%7!=0)
            printf("7 혹은 9의 배수: %d\n", num);
    }
    return 0;
    
}
*/

//08-1 문제2
/*
int main()
{
    int num1, num2;
    int result;

    printf("두 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    if(num1>=num2)
        result = num1 - num2;
    else
        result = num2 - num1;
    
    printf("두 정수의 차: %d\n", result);
    return 0;
}
*/

//08-1 문제3
/*
int main()
{
    int num1, num2, num3;
    int sum;
    char grade;

    printf("국어, 영어, 수학 점수: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    sum=(num1+num2+num3)/3;

    if(sum>=90)
        grade='A';
    else if(sum>=80)
        grade='B';
    else if(sum>=70)
        grade='C';
    else if(sum>=50)
        grade='D';
    else
        grade='F';

    printf("학점: %c", grade);
    return 0;    
    
}
*/

//08-1 문제4
/*
int main()
{
    int num1, num2, num3;
    int sum;
    char grade;

    printf("국어, 영어, 수학 점수: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    sum=(num1+num2+num3)/3;

    grade = (sum>=90) ? 'A' : (sum>=80) ? 'B' : (sum>=70) ? 'C' : (sum>=50) ? 'D' : 'F';
    printf("학점: %c", grade);
    return 0;
}
*/

//break
/*
int main()
{
    int sum=0, num=0;
    while (1)
    {
        sum+=num;
        if(sum>5000)
            break;
        num++;
    }
    printf("sum: %d\n", sum);
    printf("num: %d\n", num);
    return 0;
}
*/

//continue
/*
int main()
{
    int num;
    printf("start! ");

    for (num=1; num<20; num++)
    {
        if(num%2==0 || num%3==0)
            continue;
        printf("%d ", num);
    }
    printf("end! \n");
    return 0;
}
*/

//08-2 문제1
/*
int main()
{
    int dan=2;
    int num=1;

    for(dan=2; dan<10; dan++)
    {
        if(dan%2!=0)
            continue;
        for (num=1; num<10; num++)
        {
            if(dan/num<1)
                break;
            printf("%d * %d = %d\n", dan, num, dan*num);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    int A, Z;
    
    for(A=0;A<10;A++)
        for(Z=0;Z<10;Z++)
            if(A+Z!=9)
                continue;
            else
                printf("A: %d, Z: %d\n", A, Z);

    return 0;    
}
*/

/*
int main()
{
    int A, Z;
    int result=(10*A+Z)+(10*Z+A);
    
    for(A=0;A<10;A++)
    {
        for(Z=0;Z<10;Z++)
        {
            result=(10*A+Z)+(10*Z+A);
            if(result==99)
                printf("A: %d, Z: %d\n", A, Z);
            else
                continue;
        }
    }
    return 0;    
}
*/

/*
int main()
{
    int num;
    printf("1 이상 5 이하의 정수 입력: ");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("1은 ONE\n");
        break;
    case 2:
        printf("2는 TWO\n");
        break;
    case 3:
        printf("3은 THREE\n");
        break;
    case 4:
        printf("4는 FOUR\n");
        break;
    case 5:
        printf("5는 FIVE\n");
        break;
    default:
        printf("I don't know!\n");
    }
    return 0;
}
*/

/*
int main()
{
    char sel;
    printf("M 오전, A 오후, E 저녁\n입력: ");
    scanf("%c", &sel);
    
    switch (sel)
    {
    case 'M':
    case 'm':
        printf("Morning\n");
        break;
    case 'A':
    case 'a':
        printf("Afternoon\n");
        break;
    case 'E':
    case 'e':
        printf("Evening\n");
        break;
    default:
        printf("I dunno!");
        break;
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    printf("n의 범위는?\n\"n\"입력: ");
    scanf("%d", &n);

    switch (n/10)
    {
    case 0:
        printf("0이상 10미만");
        break;
    case 1:
        printf("10이상 20미만");
        break;
    case 2:
        printf("20이상 30미만");
        break;
    }
    return 0;
}
*/

int main()
{
    int num;
    printf("자연수 입력: ");
    scanf("%d", &num);

    if(num==1)
        goto ONE;
    else if(num==2)
        goto TWO;
    else
        goto OTHER;

ONE:
    printf("1을 입력하셨습니다\n");
    goto END;
TWO:
    printf("2를 입력하셨습니다\n");
    goto END;
OTHER:
    printf("3또는 다른 값을 입력하셨습니다\n");
    
END:
    return 0;
}