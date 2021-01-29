/*
#include <stdio.h>

int main(void)
{
    */
    /*
    int count, num=0;

    printf("반복할 수를 입력 : ");
    scanf("%d", &count);

    while (num<count)
    {
         printf("카더가든 짱짱맨 %d\n", num);
        num++;
    }
    
    return 0;
    */

   /*
   int num, mul=1;

    printf("양의 정수 입력: ");
    scanf("%d", &num);

    while (mul<=num)
    {
        printf("%d\n", 3*mul);
        mul++;
    }
    return 0;
    */

/*
   int num;
   int sum=0;

    while (num>0)
    {
        printf("더할 숫자 입력: ");
        scanf("%d", &num);
        printf(sum+num);
        scanf("%d", &sum);
    }

    printf("합계 : %d", sum);
    return 0;
*/


/* 해냈다!ㄴ어ㅏㅣ리ㅏㅓ리ㅏㅓ닝라ㅓㅣㅏㄴㅇ러ㅣㅏ멍라ㅣㅓㅇㄴㄹ///////
    int num;
    int sum=0;

    while (num!=0)
    {
        printf("정수 입력: ");
        scanf("%d", &num);
        sum+=num;
    }

    printf("합계: %d", sum);
    return 0;
*/



   
   /*
   int dan, num=9;

   printf("구구단을 외자! 단 수를 입력하시오 : ");
   scanf("%d", &dan);

   while (num>0)
   {
       printf("%d * %d = %d\n", dan, num, dan*num);
       --num;
   }
   return 0;
    */

 /*
   float num1, num2, num3;

   printf("정수 입력 : ");
   scanf("%f %f %f", &num1, &num2, &num3);

   printf("평균 : %f\n", (num1+num2+num3)/3);
   return 0;
*/

/*
    int count; // 몇 개의 정수 입력할건지
    int replay; // count에 따라 몇번 반복할건지 정해짐
    float num; // 각 정수(소숫점까지 표현 가능함)
    float sum=0; // 정수들의 합

    printf("입력할 정수의 개수 입력 : ");
    scanf("%d", &count);
    replay = count;

    while(replay>0)
    {
        printf("정수 입력 : ");
        scanf("%f", &num);
        replay--;
        sum+=num;
    }

    printf("%d개 수의 평균 : %f", count, sum/count);
    return 0;

*/

/* 구구단 전체 출력
int a=2;
int b=0;

while (a<10)
{
    b=1;
    while(b<10)
    {
        printf("%d*%d=%d\n", a, b, a*b);
        b++;
    }
    a++;
}

*/

/*
    int num1=1;
    int num2=0;

    while (num1<10)
    {
        num2=0;
        while (num2<10)
        {
            printf("%d * %d = %d\n", num1, num2, num1*num2);
            ++num2;
        }
        ++num1;
    }

    return 0;
*/

/*
    // 총 5개의 정수를 입력, 그 수의 합을 출력하는 프로그램 작성. 정수는 반드시 1이상, 1미만의 수=> 입력으로 인정x 재입력 요구.

    int num;
    int sum=0;
    int count;

    count=5;
    while (count>0)
    {
        printf("정수 입력: ");
        scanf("%d", &num);
        while (num<1)
        {
            printf("1이상 정수 입력: ");
            scanf("%d", &num);
        }
        sum=num+sum;
        count--;
        
    }
    
    printf("합: %d\n", sum);
    return 0;

}
*/

//하시발 드디어해냈다...
/*
#include <stdio.h>

int main(void)
{
    int count=0;
    int replay=0;

    while (count<5)
    {
        while (replay<count)
        {
            printf("O");
            replay++;
        }
        printf("*\n");
        count++;
        replay=0;
    }
    return 0;
    
}
*/

//do while문
/*
#include <stdio.h>

int main()
{
    int num;
    int sum=0;

    do{
        printf("정수 입력(0 to quit): ");
        scanf("%d", &num);
        sum+=num;
    }while (num!=0);

    printf("합계: %d", sum);
    return 0;

    
}
*/

/*
#include <stdio.h>
int main()
{

    int num;
    num=1;
    int sum=0;

    while (num!=0)
    {
        printf("정수 입력(0 입력시 끝): ");
        scanf("%d", &num);
        sum+=num;
    }

    printf("합계: %d", sum);
    return 0;

// 위아래 두개 같지만 다른 형태!
  
   int num;
   int sum=0;

   printf("정수 입력: ");
   scanf("%d", &num);
   sum=num+sum;

   while (num!=0)
   {
       printf("정수 입력: ");
       scanf("%d", &num);
       sum=num+sum;
   }

   printf("합계: %d", sum);
   return 0;

    
}
*/

/*
#include <stdio.h>

int main()
{
    int num=0;
    int sum=0;
    while (num<101)
    {
        do
        {
            sum=num+sum;
            num++;

        } while (num%2==0);
        num++;
    }
    printf("합계: %d", sum);
    return 0;

    
}
*/


/*
#include <stdio.h>
int main()
{
    int dan=2;
    int num=1;
    
    printf("구구단을 외쟈\n\n");
    do
    {
        while (num<10)
        {
            printf("%d * %d = %d\n", dan, num, dan*num);
            num++;
        }
        printf("\n");
        ++dan;
        num=1;
    } while (dan<10);
    return 0;

}
*/