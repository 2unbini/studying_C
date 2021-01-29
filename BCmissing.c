#include <stdio.h>
#define SIZE 500000

int main(int argc, char*argv[]){
    int n, k;
    int sumOfFull = 0; // 범위 안의 모든 수의 합
    int sumOfArr = 0; // txt 파일 안의 모든 수(배열에 저장된 모든 수)의 합
    FILE *fp = fopen(argv[1], "r"); // argv[0]=실행파일 이름, argv[1]=접근할 텍스트 이름
                                    // argv[1]의 인자로 받아들인 텍스트 읽기 전용으로 열기

    fscanf(fp, "%d", &n); // fp로부터 정수를 읽어들여 n에 저장(텍스트 파일 맨 첫줄에 쓰인 숫자 ex- 10, 100, 1000...)
    
    int partArr[SIZE];
    int lengthOfPartArr = n-1;

    for(int i=0; i<lengthOfPartArr ; i++){
        fscanf(fp, "%d", &partArr[i]); // fp로부터 정수를 읽어들여 배열에 저장(K값 제외한 모든 수 배열에 저장됨)
        sumOfArr+=partArr[i]; // K값을 제외한 모든 수의 합
    }

    for(int i=1; i<=n; i++){
        sumOfFull += i; // n 범위 내의 모든 수의 합
    }

    k = sumOfFull - sumOfArr; // K값 도출
    printf("K = %d", k);
    fclose(fp); // 파일 닫기

    return 0;
}