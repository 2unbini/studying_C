#include <stdio.h>

// 점수 범위, 프로그램 종료 숫자, 점수와 학점 배열 선언&초기화
const int EXIT_NUM = 999;
const int MIN_SCORE = 0;
const int MAX_SCORE = 100;
const int SCORE_ARR[9]={95, 90, 85, 80, 75, 70, 65, 60, 0};
const char* GRADE_ARR[9]={"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

// 배열 출력하는 함수, 사용자로부터 점수 입력받는 함수, 점수 유효성 체크하는 함수, 학점 출력하는 함수 선언
void printTable();
int getScore();
int isScoreInRange(int);
void printGrade(int);

int main(void){
    int score;
    printf("학점 프로그램\n");
    printf("종료를 원하면 \'999\'입력하세요\n");
    printTable();
    while(1){
        score = getScore(); // 사용자로부터 점수 입력 받음
        if(score==EXIT_NUM) // 사용자로부터 받은 점수가 999일 때, 반복문 종료
            break;
        printGrade(score); // 정상적인 경우, 학점 출력
    }
    printf("프로그램 종료!\n");
    return 0;
}

// 점수, 학점 배열 출력하는 함수
void printTable(){
    int i;

    printf("\n[학점 테이블]\n");

    printf("점수 :");
    for(i=0; i<9; i++)
        printf("%4d", SCORE_ARR[i]);

    printf("\n학점 :");
    for(i=0; i<9; i++)
        printf("%4s", GRADE_ARR[i]);

    printf("\n\n");
}


// 입력받은 성적이 범위 내에 있는지 없는지 판별해 범위 내에 없으면 올바르게 입력받는 함수
int isScoreInRange(int score){
    while(1){
        if(score<MIN_SCORE || score>MAX_SCORE){
            if(score==EXIT_NUM)
                return EXIT_NUM;
            printf("** 입력: %d ** 성적을 올바르게 입력하세요. 범위: 0 ~ 100\n", score);
            printf("성적을 입력하세요 (0 ~ 100) : ");
            scanf("%d", &score);
        }
        else
            break;
        }

    return score;
}


// 성적 입력받는 함수
int getScore(){
    int score;

    while(1){
        printf("성적을 입력하세요 (0 ~ 100) : ");
        scanf("%d", &score);
        score = isScoreInRange(score);
        break;
    }
    return score;
}


// 점수에 따라 학점 출력하는 함수
void printGrade(int score){
    int index;
    
    if(score>=95)
        index=0;
    else if(score>=90 && score<95)
        index=1;
    else if(score>=85 && score<90)
        index=2;
    else if(score>=80 && score<85)
        index=3;
    else if(score>=75 && score<80)
        index=4;
    else if(score>=70 && score<75)
        index=5;
    else if(score>=65 && score<70)
        index=6;
    else if(score>=60 && score<65)
        index=7;
    else
        index=8;

    printf("학점은 %s입니다.\n\n", GRADE_ARR[index]);
}