/*
#include <stdio.h>

int main(){
    FILE *fp = fopen("data.txt", "wt");
    if(fp==NULL){
        puts("파일 오픈 실패!");
        return -1;
    }
    
    fputc('A', fp);
    fputc('c', fp);
    fputs("졸리다", fp);
    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int ch, i;
    FILE *fp = fopen("data.txt", "rt");
    if(fp==NULL){
        puts("파일 출력 실패!");
        return -1;
    }

    for(i=0; i<3; i++){
        ch=getc(fp);
        printf("%c\n", ch);
    }

    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    FILE *fp = fopen("simple.txt", "wt");
    if(fp==NULL){
        puts("파일오픈 실패");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputs("My name is Eunbin\n", fp);
    fputs("Nice to meet you\n", fp);
    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    char str[30];
    int ch;
    FILE *fp=fopen("simple.txt", "rt");
    if(fp==NULL){
        puts("파일오픈 실패");
        return -1;
    }

    ch = fgetc(fp);
    printf("%c\n", ch);
    ch = fgetc(fp);
    printf("%c\n", ch);

    fgets(str, sizeof(str), fp);
    printf("%s", str);
    fgets(str, sizeof(str), fp);
    printf("%s", str);

    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    FILE *src=fopen("simple.txt", "rt");
    FILE *des=fopen("copy.txt", "wt");
    int ch;

    if(src==NULL || des==NULL){
        puts("파일 오픈 실패");
        return -1;
    }

    while((ch=fgetc(src))!=EOF)
        fputc(ch, des);
    
    if(feof(src)!=0)
        puts("파일 복사 완료");
    else
        puts("파일 복사 실패");
    
    fclose(src);
    fclose(des);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    FILE *src=fopen("simple.txt", "rt");
    FILE *des=fopen("copy_1.txt", "wt");
    char str[20];

    if(src==NULL || des==NULL){
        puts("파일 오픈 실패");
        return -1;
    }

    while(fgets(str, sizeof(str), src)!=NULL)
        fputs(str, des);
    
    if(feof(src)!=0)
        puts("파일 복사 성공");
    else
        puts("파일 복사 실패");
    
    fclose(src);
    fclose(des);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    FILE *origin = fopen("cat.png", "rb");
    FILE *copy = fopen("cat_copy.png", "wb");
    char buf[30];
    int readCnt;

    if(origin==NULL || copy==NULL){
        puts("파일 오픈 실패");
        return -1;
    }

    while(1){
        readCnt = fread((void*)buf, 1, sizeof(buf), origin);
        if(readCnt<sizeof(buf)){
            if(feof(origin)!=0){
                fwrite((void*)buf, 1, readCnt, copy);
                puts("파일 복사 완료");
                break;
            }
            else
                puts("파일 복사 실패");
            break;
        }
        fwrite((void*)buf, 1, sizeof(buf), copy);
    }

    fclose(origin);
    fclose(copy);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    FILE *text = fopen("mystory.txt", "rt");
    char str[50];

    if(text==NULL){
        puts("파일 오픈 실패");
        return -1;
    }

    while(fgets(str, sizeof(str), text)!=NULL){
        fputs(str, stdout);
    }

    fclose(text);
    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    char name[10];
    char sex;
    int age;

    FILE *fp=fopen("friend.txt", "wt");
    int i;

    for(i=0; i<3; i++){
        printf("이름 성별 나이 순 입력: ");
        scanf("%s %c %d", name, &sex, &age);
        getchar();
        fprintf(fp, "%s %c %d", name, sex, age);
    }

    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    char name[10];
    char sex;
    int age;

    FILE *fp=fopen("friend.txt", "rt");
    int ret;

    while(1){
        ret=fscanf(fp, "%s %c %d", name, &sex, &age);
        if(ret==EOF)
            break;
        printf("%s %c %d\n", name, sex, age);
    }
    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>

typedef struct{
    char name[10];
    char sex;
    int age;
} Friend;

int main(){
    FILE *fp;
    Friend myfren1;
    Friend myfren2;

    fp=fopen("friend.bin", "wb");
    printf("이름, 성별, 나이 순 입력: ");
    scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
    fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
    fclose(fp);

    fp=fopen("friend.bin", "rb");
    fread((void*)&myfren2, sizeof(myfren2), 1, fp);
    printf("%s %c %d", myfren2.name, myfren2.sex, myfren2.age);
    fclose(fp);

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    FILE *fp=fopen("text_1.txt", "wt");
    fputs("123456789", fp);
    fclose(fp);

    fp=fopen("text_1.txt", "rt");
    fseek(fp, -2, SEEK_END);
    putchar(fgetc(fp));

    fseek(fp, 2, SEEK_SET);
    putchar(fgetc(fp));

    fseek(fp, 2, SEEK_CUR);
    putchar(fgetc(fp));
    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    long fpos;
    int i;

    FILE *fp=fopen("text_2.txt", "wt");
    fputs("1234-", fp);
    fclose(fp);

    fp=fopen("text_2.txt", "rt");
    for(i=0; i<4; i++){
        putchar(fgetc(fp));
        fpos = ftell(fp);
        fseek(fp, -1, SEEK_END);
        putchar(fgetc(fp));
        fseek(fp, fpos, SEEK_SET);
    }
    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    char arr[30];
    int i=0, fpos;

    fgets(arr, sizeof(arr), stdin);

    FILE *fp=fopen("q3.txt", "wt");
    fputs(arr, fp);
    fclose(fp);

    fp=fopen("q3.txt", "rt");
    fseek(fp, 0, SEEK_END);
    fpos=ftell(fp);
    fclose(fp);

    printf("파일의 크기: %lu byte\n", fpos*sizeof(char));
    return 0;
    
}
*/

#include <stdio.h>

long CalByte(FILE*stream){
    long fpos, fsize;

    fpos=ftell(stream);
    fseek(stream, 0, SEEK_END);
    fsize=ftell(stream);
    fseek(stream, fpos, SEEK_SET);

    return fsize;
}

int main(){
    long size;

    FILE *fp=fopen("cat.png", "rb");
    size = CalByte(fp);
    fclose(fp);

    printf("%ld byte", size);
    
    return 0;
}