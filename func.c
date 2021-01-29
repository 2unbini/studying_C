#include <stdio.h>

/*
int main()
{
    int num1, num2;
    num1=printf("12345\n");
    num2=printf("I am cool\n");
    printf("%d %d\n", num1, num2);
    return 0;
}
*/

/*
int Add(int num1, int num2)
{
    return num1+num2;
}

int main()
{
    int result;
    result=Add(3,4);
    printf("결과: %d\n", result);
    result=Add(25,63);
    printf("결과: %d\n", result);
    return 0;
}
*/

/*
int Add(int num1, int num2)
{
    return num1+num2;
}

void ShowAddResult(int num)
{
    printf("덧셈결과 출력: %d\n", num);
}

int ReadNum(void)
{
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg(void)
{
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
    printf("자 그럼 두 개의 정수를 입력하세요: ");
}

int main()
{
    int result, num1, num2;
    HowToUseThisProg();
    num1=ReadNum();
    num2=ReadNum();
    result=Add(num1, num2);
    ShowAddResult(result);
    return 0;
}
*/

/*
int NumberCompare(int num1, int num2);

int main()
{
    printf("3과 4 중에서 큰 수는 %d이다.\n", NumberCompare(3,4));
    printf("7과 2 중에서 큰 수는 %d이다.\n", NumberCompare(7,2));
    return 0;
}

int NumberCompare(int num1, int num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}
*/

/*
int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main()
{
    int num1, num2;
    printf("두개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d중 절댓값이 큰 정수: %d\n", num1, num2, AbsoCompare(num1, num2));
    return 0;
}

int AbsoCompare(int num1, int num2)
{
    if(GetAbsoValue(num1)>GetAbsoValue(num2))
        return num1;
    else
        return num2;
}

int GetAbsoValue(int num)
{
    if(num<0)
        return num*(-1);
    else
        return num;
}
*/

//09-1문제
/*
int MaxCompare(int n1, int n2, int n3);
int MinCompare(int n1, int n2, int n3);

int main()
{
    int num1, num2, num3;
    printf("세 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("가장 큰 수: %d\n", MaxCompare(num1, num2, num3));
    printf("가장 작은 수: %d\n", MinCompare(num1, num2, num3));
    return 0;
}

int MaxCompare(int n1, int n2, int n3)
{
    if(n1>n2)
        return (n1>n3) ? n1 : n3;
    else
        return (n2>n3) ? n2 : n3;
}

int MinCompare(int n1, int n2, int n3)
{
    if(n1<n2)
        return (n1<n3) ? n1 : n3;
    else
        return (n2<n3) ? n2 : n3;
}
*/

/*
float CelToFah(float temp);
float FahToCel(float temp);

int main()
{
    float temp;
    int num;

    printf("1.섭씨를 화씨로\n2.화씨를 섭씨로\n원하는 서비스의 번호를 입력해주세요: ");
    scanf("%d", &num);
    printf("온도 입력: ");
    scanf("%f", &temp);
    if (num==1)
        printf("섭씨 %f도는 화씨 %f도\n", temp, CelToFah(temp));
    else if (num==2)
        printf("화씨 %f도는 섭씨 %f도\n", temp, FahToCel(temp));
    return 0;
}

float CelToFah(float temp)
{
    float result;
    result = 1.8*temp+32;
    return result;
}

float FahToCel(float temp)
{
    float result;
    result = 5*(temp-32)/9;
    return result;
}
*/

/*
int Fibo(int num);
int main()
{
    int num;
    int num0=0;
    int num1=1;
    printf("피보나치 수열 출력 수: ");
    scanf("%d", &num);
    printf("0부터 %d까지 피보나치 수열:\n", num);
    Fibo(num);
    return 0;
}

int Fibo(int num)
{
    int num0=0, num1=1;
    int count;
    int result;
    printf("0 1 ");
    for(count=1; count<=num-2; count++)
    {
        result=num0+num1;
        printf("%d ", result);
        num0=num1;
        num1=result;
    }
    return 0;
}
*/

/*
int SimpleFuncOne()
{
    int num=10;
    num++;
    printf("SimpleFuncOne num: %d\n", num);
    return 0;
}

int SimpleFuncTwo()
{
    int num1=20;
    int num2=30;
    num1++, num2--;
    printf("num1 & num2: %d %d\n", num1, num2);
    return 0;
}

int main()
{
    int num=17;
    SimpleFuncOne();
    SimpleFuncTwo();
    printf("main num: %d\n", num);
    return 0;
}
*/

/*
int main()
{
    int cnt;
    for(cnt=0; cnt<3; cnt++)
    {  
        int num=0;
        num++;
        printf("%d번째 반복, 지역변수 num은 %d\n", cnt+1, num);
    }
    if(cnt==3)
    {
        int num=7;
        num++;
        printf("if문 내에 존재하는 지역변수 num은 %d\n", num);
    }
    return 0;
}
*/
/*
int main()
{
    int num=1;

    if(num==1)
    {
        //int num=7;
        num+=10;
        printf("if문 내 지역변수 num: %d\n", num);
    }
    printf("main함수 내 지역변수 num: %d\n", num);
    return 0;
}
*/

/*
void Add(int val);
int num; //전역변수

int main()
{
    printf("num: %d\n", num);
    Add(3);
    printf("num: %d\n", num);
    num++;
    printf("num: %d\n", num);
    return 0;
}

void Add(int val)
{
    num += val;
}
*/

/*
int Add(int val);
int num=1;

int main()
{
    int num=5;
    printf("num: %d\n", Add(3));
    printf("num: %d\n", num+9);
    return 0;
}

int Add(int val)
{
    int num=9;
    num+=val;
    return num;
}
*/

/*
void SimpleFunc(void)
{
    static int num1=0;
    int num2=0;
    num1++, num2++;
    printf("static: %d, local: %d\n", num1, num2);
}

int main()
{
    int i;
    for(i=0; i<3; i++)
        SimpleFunc();
    return 0;
}
*/

/*
int total=0;
int AddToTotal(int num)
{
    total+=num;
    return total;
}
int main()
{
    int num, i;
    for(i=0; i<3; i++)
    {
        printf("입력%d: ", i+1);
        scanf("%d", &num);
        printf("누적: %d\n", AddToTotal(num));
    }
    return 0;
}
*/

//재귀함수
/*
void Recursive(int num)
{
    if(num<=0)
        return;
    printf("Recursive call! %d\n", num);
    Recursive(num-1);
}

int main()
{
    Recursive(3);
    return 0;
}
*/

/*
int Factorial(int num)
{
    if(num==0)
        return 1;
    else
        return num*Factorial(num-1);
}

int main()
{
    int num;
    printf("팩토리얼 연산할 수 입력: ");
    scanf("%d", &num);
    printf("%d!의 결과: %d\n", num, Factorial(num));
    return 0;
}
*/