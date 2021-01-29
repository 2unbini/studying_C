#include <stdio.h>
#include <cs50.h>

int main(void){
    //목표 금액, 이율 입력받고, 계산에 용이하게 변환
    int priceInput = get_int("목표 금액 입력(만원): ");
    float rate = get_float("이자율(%%): ");
    priceInput *= 10000;
    rate *= 0.01;

    //계산한 값 출력(원금, 이자, 총합)
    printf("1년 만기시\n");
    printf("원금: %i원, 이자: %.f원\n", priceInput, (priceInput*rate));
    printf("총합: %.f원\n", (priceInput*(1+rate)));

    return 0;
}
