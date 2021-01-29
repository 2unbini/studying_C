#include <stdio.h>
#include <cs50.h>

int stockCal(int, int); //재고 계산하는 함수
int salesCal(int); //매출액 계산하는 함수
void printResult(int, int, int, int); //주문 건수, 원래 재고, 남은 재고, 매출액 출력 함수

int main(void){
    //각 매출액(처음은 0원), 처음 재고, 남은 재고
    int income = 0;
    int stock = 5; 
    int stockLeft;

    //주문 건수 입력(문제대로라면 3 입력)
    int order = get_int("주문 건수: ");

    //주문 건수가 재고보다 많을 때, 알려주고 프로그램 종료
    if(order>stock){
        printf("재고가 부족합니다.\n");
        return -1;
    }
    
    //재고, 매출액 계산 후 출력 함수
    stockLeft = stockCal(stock, order);
    income = salesCal(order);
    printResult(order, stock, stockLeft, income);
    return 0;
}


int stockCal(int stock, int order){
    return stock - order; //재고 계산해서 반환
}

int salesCal(int order){
    return order*((10000)*1.1); //매출액 계산해서 반환
}

void printResult(int order, int stock, int stockLeft, int income){
    //각 정보 출력
    printf("주문 건수: %i건\n", order);
    printf("기존 재고량: %i개\n", stock);
    printf("남은 재고량: %i개\n", stockLeft);
    printf("매출액(부가세포함): %i원\n", income);
}
