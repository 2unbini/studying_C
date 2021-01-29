#include <stdio.h>

int main(){
    char *month[100] = {"Angelina", "Sofia", "Helen", "Elizabeth", "Diana", "Christina", "Olivia", "Sharlot", "Ariana", "Elsa", "Grace", "Juliete"};
    char *day[150] = {"Mimi", "Kongsoon", "Candy", "Tongky", "Choonsam", "Luru", "Sunny", "Suk-he", "Porori", "Lara", "Gildong", "Marry", "Joli", "Youngsam", "Grande",
    "Dulli", "Joy", "Lilly", "Jangchen", "Martina", "Swan", "Rich", "Donggu", "Judi", "Suri", "Coco", "Albolo", "Dorothy", "Mingky", "Poli", "May"};
    int m, d;

    printf("내가 공주였다면?\n생일로 공주이름짓기\n");
    printf("태어난 달 입력: ");
    scanf("%d", &m);
    printf("태어난 날 입력: ");
    scanf("%d", &d);


    printf("%s %s", month[m-1], day[d-1]);
    return 0;
}