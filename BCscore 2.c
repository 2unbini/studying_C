#include <stdio.h>

const int EXIT_NUM = -1;
const int MIN_SCORE = 0;
const int MAX_SCORE = 100;
const int SCORE_ARR[9][2]={
    {"A+", 95}, {'A', 90}, {"B+", 85}, {'B', 80}, {"C+", 75}, {'C', 70}, {"D+", 65}, {'D', 60}, {'F', 0}};

void printTable();

int main(void){
    int score;
    printf("학점 프로그램\n");
    printf("종료를 원하면 \'-1\'입력하세요\n");
    printTable();
    while(score!=EXIT_NUM){
        printf("성적을 입력하세요 (0 ~ 100) : ");
        scanf("%d", &score);
        while(1){
            if(score<MIN_SCORE || score>MAX_SCORE){
                printf("** 입력: %d ** 성적을 올바르게 입력하세요. 범위: 0 ~ 100\n", score);
                printf("성적을 입력하세요 (0 ~ 100) : ");
                scanf("%d", &score);
            }
            else
                break;
        }
    }
}
