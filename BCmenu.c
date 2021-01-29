#include <stdio.h>
#include <string.h> //문장 비교하는 strncmp 함수 사용을 위한 헤더파일 선언
#include <cs50.h>

void printMenu(string); //메뉴 출력하는 함수

int main(void){
    printf("*+*+* 어서오세요 *+*+*\n");
    string dayInput = get_string("요일을 입력하세요: "); //사용자로부터 요일 입력받기
    printMenu(dayInput); //메뉴 출력
    return 0;
}

void printMenu(string day){
    string menu;
    
    //사용자로부터 입력받은 요일을 strncmp 함수를 통해 비교해 각 요일에 맞는 메뉴 초기화
    if(strncmp(day,"월", 2)==0){
        day="월";
        menu="청국장";
    }
    else if(strncmp(day,"화", 2)==0){
        day="화";
        menu="비빔밥";
    }
    else if(strncmp(day,"수", 2)==0){
        day="수";
        menu="된장찌개";
    }
    else if(strncmp(day,"목", 2)==0){
        day="목";
        menu="칼국수";
    }
    else if(strncmp(day,"금", 2)==0){
        day="금";
        menu="냉면";
    }
    else if(strncmp(day,"토", 2)==0){
        day="토";
        menu="소불고기";
    }
    else if(strncmp(day,"일", 2)==0){
        day="일";
        menu="오삼불고기";
    }
    else{
        day="?"; menu="?";
        printf("다시 입력해주세요:(\n"); //그냥 넣어봄
    }
    
    printf("%s요일의 메뉴는 %s입니다:D\n", day, menu); //요일에 따른 메뉴 출력
}
