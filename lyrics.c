#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char *title[]={"외톨이 ", "마음의 문을 닫은 ", "상처를 쥐고 살아가는 ", "바보 ", "두 눈을 감고 두 귀를 막은 ", "자신을 삼킨 "};
    char name[20];
    char nick[40];
    int go;
    int num;

    puts("닉네임에 들어갈 이름을 입력해주세요: ");
    fgets(name, sizeof(name), stdin);

    puts("닉네임을 만드려면 1을, 하지 않으시려면 0을 입력해주세요.");
    scanf("%d", &go);
    if(go==1){
        srand((int)time(NULL));
        num = rand()%6;
        fputs(title[num], stdout);
        fputs(name, stdout);
    }
    else
        puts("ok bye!");
    return 0;
}