#include <stdio.h>
#include <stdlib.h> // int의 절댓값을 구하는 함수 abs()가 포함된 헤더파일

const int arr[] = {1, 2, 2, 3, 4, 6}; // 배열 초기화와 선언을 같이하면 배열의 길이 생략 가능
const int len = sizeof(arr)/sizeof(int);

int getAvg();
int getMid();
void getResult(int, int);

int main(){
    int avg, mid;
    int result;

    avg = getAvg();
    mid = getMid();
    getResult(avg, mid);

    return 0;
}

// 배열의 평균값 구하기
int getAvg(){
    int sumArr=0;
    for(int i=0; i<len; i++)
        sumArr += arr[i];

    return sumArr/len;
}

// 배열의 중간값 구하기
int getMid(){
    if(len%2!=0)
        return arr[len/2];
    else
        return (arr[len/2] + arr[len/2 -1])/2;
}

// 배열의 평균, 중간값 각각에 대한 배열의 거리의 합(이하 평균합, 중간합) 구하고 비교해 결과 출력하기
void getResult(int avg, int mid){
    int sum1=0, sum2=0;

    if(avg==mid) // 평균 혹은 중간값이 가장 최적의 위치이므로
        printf("최적의 장소는: %d\n", mid);
    else{ // 평균합, 중간합 구하고,
        for(int i=0; i<len; i++){
            sum1 += abs(arr[i]-avg);
            sum2 += abs(arr[i]-mid);
        }
        if(sum1>sum2) // 비교
            printf("최적의 장소는: %d\n", mid);
        else if(sum2>sum1)
            printf("최적의 장소는: %d\n", avg);
        else
            printf("최적의 장소는: %d or %d\n", mid, avg);
    }
}