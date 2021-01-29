/*
#include <stdio.h>

int main(){
    int ch1, ch2;

    ch1 = getchar();
    ch2 = fgetc(stdin);

    putchar(ch1);
    fputc(ch2, stdout);

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int ch;

    while (1)
    {
        ch=getchar();
        if(ch==EOF)
            break;
        putchar(ch);
    }
    return 0;
    
}
*/

//21-1 question
/*
#include <stdio.h>

int main(){
    int a;

        a = getchar();

        if(a>64 && a<91){
            a+=32;
            putchar(a);
        }
        else if(a>96 && a<123){
            a-=32;
            putchar(a);
        }
        else
            printf("알파벳이 아닙니다.\n");

    
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    char* str="Simple String";

    printf("1. puts test ---- \n");
    puts(str);
    puts("So Simple String");

    printf("2. fputs test ---- \n");
    fputs(str, stdout); printf("\n");
    fputs("So Simple String", stdout); printf("\n");

    printf("3. end of main ---- \n");
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    char str[5];
    int i;

    for(i=0; i<3; i++){
        fgets(str, sizeof(str), stdin);
        printf("Read %d: %s\n", i+1, str);
    }
    return 0;
}
*/

/*
#include <stdio.h>

void ClearLineFromReadBuffer(){
    while (getchar()!='\n');
}

int main(){
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ", stdout);
    fgets(perID, sizeof(perID), stdin);
    ClearLineFromReadBuffer();

    fputs("이름 입력: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("주민번호: %s\n", perID);
    printf("이름: %s\n", name);
    return 0;
}
*/

// '0'과 0 = \0은 다르다!!!
/*
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]){
    int len = strlen(str);
    str[len-1] = 0;
}

int main(){
    char str[20];
    printf("문자열 입력");
    fgets(str, sizeof(str), stdin);
    printf("길이: %d, 내용: %s\n", (int)strlen(str), str);

    RemoveBSN(str);
    printf("길이: %lu, 내용: %s\n", strlen(str), str);
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>

int main(){
    char str1[20]="1234567890";
    char str2[20];
    char str3[5];

    strcpy(str2, str1);
    puts(str2);

    strncpy(str3, str1, sizeof(str3));
    puts(str3);

    strncpy(str3, str1, sizeof(str3)-1);
    str3[sizeof(str3)-1]=0;
    puts(str3);
    return 0;
}
*/

//21-1 문제2
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RemoveEnter(char str1[], char str2[], int len1, int len2){
    str1[len1-1] = 0;
    str2[len2-1] = 0;
}

int main(){
    char str1[20];
    char str2[20];
    char str3[40];

    puts("first input:");
    fgets(str1, sizeof(str1), stdin);
    puts("second input:");
    fgets(str2, sizeof(str2), stdin);
    RemoveEnter(str1, str2, strlen(str1), strlen(str2));
    strcpy(str3, str1);
    strcat(str3, str2);
    puts(str3);
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void divideAge(char n[], char a[]){
    int i=0, j=0;
    while(n[i]!='\0'){
        if(n[i]==' '){
            i++;
            for(j=0; n[i]!='\n'; j++)
                a[j]=n[i];
        }
        i++;
    }
}


int main(){
    char name1[30];
    char name2[30];
    char age1[5];
    char age2[5];
    int i;

    fgets(name1, sizeof(name1), stdin);
    fgets(name2, sizeof(name2), stdin);
    divideAge(name1, age1);
    divideAge(name2, age2);

    if(!strcmp(name1, name2))
        puts("이름이 같습니다.");
    else
        puts("이름이 다릅니다.");
    
    if(atoi(age1)==atoi(age2))
        puts("나이가 같습니다.");
    else
        puts("나이가 다릅니다.");
    
    return 0;
}
*/

// 문제 3... 근데 scanf말고 다른거로는 못쓰나?
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char name1[30];
    char name2[30];
    int age1;
    int age2;

    scanf("%s %d", name1, &age1);
    scanf("%s %d", name2, &age2);

    if(!strcmp(name1, name2))
        puts("이름이 같습니다.");
    else
        puts("이름이 다릅니다.");
    
    if(age1==age2)
        puts("나이가 같습니다.");
    else
        puts("나이가 다릅니다.");

    return 0;    
}
*/

//문제 21-2 문제1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
int main(){
    char str[30];
    char arr[30];
    int i=0, j=0, sum=0;

    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0'){
        if(str[i]>47 && str[i]<58){
            arr[j]=str[i];
            sum+=atoi(&arr[j]);
            j++;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}
*/
void SeparateNA(char n[], char a[]){
    int i=0, j=0;
    while(1){
        if(n[i]==' '){
            i++;
            for(j=0; n[i]!='\n'; j++){
                a[j] = n[i];
                n[i] = 0;
                i++;
            }
            break;
        }
        i++;
    }
}

void CompareN(char n1[], char n2[]){

    if(!strcmp(n1, n2))
        puts("이름이 같습니다.");
    else
        puts("이름이 다릅니다.");
}

void CompareA(char a1[], char a2[]){
    int age1, age2;
    age1 = atoi(a1);
    age2 = atoi(a2);

    if(age1==age2)
        puts("나이가 같습니다.");
    else
        puts("나이가 다릅니다.");
}

int main(){
    char name1[30];
    char name2[30];
    char age1[5];
    char age2[5];
    int i;

    fgets(name1, sizeof(name1), stdin);
    fgets(name2, sizeof(name2), stdin);
    SeparateNA(name1, age1);
    SeparateNA(name2, age2);
    CompareN(name1, name2);
    CompareA(age1, age2);

    return 0;
}