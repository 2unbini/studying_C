
/*
#include <stdio.h>

void OriginArr(int (*arr)[4]){
    int x=1;
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            arr[i][j] = x ;
            ++x;
        }
    }
}

void FirstRound(int (*arr)[4]){
    int x=1;
    int i, m;
    int j, n;
    int temp;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            m = i;
            n = j;
            temp = m;
            m = n;
            n = temp;
            if(n==0)
                n = 3;
            else if(n==1)
                n = 2;
            else if(n==2)
                n = 1;
            else
                n = 0;
            arr[m][n] = x;
            ++x;
        }
    }
}

void SecondRound(int (*arr)[4]){
    int x=1;
    int i, j;

    for(i=3; i>=0; i--){
        for(j=3; j>=0; j--){
            arr[i][j] = x;
            ++x;
            }
        }

}

void ThirdRound(int (*arr)[4]){
    int x=1;
    int i, m;
    int j, n;
    int temp;
    for(i=3; i>=0; i--){
        for(j=3; j>=0; j--){
            m = i;
            n = j;
            temp = m;
            m = n;
            n = temp;
            if(n==0)
                n = 3;
            else if(n==1)
                n = 2;
            else if(n==2)
                n = 1;
            else
                n = 0;
            arr[m][n] = x;
            ++x;
        }
    }
}

void PrintResult(int (*arr)[4]){
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++)
            printf("%4d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    int arr[4][4];

    OriginArr(arr);
    PrintResult(arr);
    FirstRound(arr);
    PrintResult(arr);
    SecondRound(arr);
    PrintResult(arr);
    ThirdRound(arr);
    PrintResult(arr);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i;
    srand((int)time(NULL));

    for(i=0; i<2; i++)
        printf("주사위 %d의 결과: %d\n", i+1, rand()%6+1);
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char *rcp[3] = {"바위", "가위", "보"};
    char *ment[3] = {"비겼습니다", "당신이 이겼습니다", "당신이 졌습니다"};
    int n, com;
    int win=0, same=0, result=0;

    while(1){
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &n);
        srand((int)time(NULL));
        com = rand()%3+1;
        if(n==1)
            result = (com==1) ? 0 : com==2 ? 1 : 2;
        else if(n==2)
            result = (com==1) ? 2 : com==2 ? 0 : 1;
        else
            result = (com==1) ? 1 : com==2 ? 2 : 0;
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, %s!\n", rcp[n-1], rcp[com-1], ment[result]);
        if(result==0)
            ++same;
        else if(result==1)
            ++win;
        else if(result==2){
            printf("게임의 결과: %d승, %d무\n", win, same);
            break;
        }
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectBall(int arr[]){
    int num, i;
    srand((int)time(NULL));
    for(i=0; i<3; i++){
        num = rand()%10;
        arr[i] = num;
    }
}

void scanBall(int arr[]){
    int i;
    printf("3개의 숫자 선택: ");
    for(i=0; i<3; i++)
        scanf("%d", &arr[i]);
}

int main(){
    int arrCom[3];
    int arrUser[3];
    int i, j;
    int strike=0, ball=0, count=0;

    selectBall(arrCom);
    
    printf("Game Start!\n\n");
    while(strike!=3){
        scanBall(arrUser);
        strike=0, ball=0;
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(arrCom[i]==arrUser[j]){
                    if(i==j)
                        strike++;
                    else
                        ball++;
                }
            }
        }
        count++;
        printf("%d번째 도전 결과: %dstrike, %dball!!\n", count, strike, ball);
    }
    printf("\nGame Over!\n");
    return 0;
}
*/

#include <stdio.h>

int main(){
    int n;
    int num=1;
    int i=0, j=0, k, l=0;
    
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);

    int arr[n][n];
    for(j=0; j<n; j++){
        arr[i][j] = num;
        num++;
    }
    k = n-1;
    while(1){

        for(j=0; j<k-l; j++){
            arr[j+1+l][k] = num;
            num++;
            if(num==n*n+1)
                break;
        }
        if(num==n*n+1)
            break;
        for(j=0; j<k-l; j++){
            arr[k][k-(j+1)] = num;
            num++;
            if(num==n*n+1)
                break;
        }
        if(num==n*n+1)
            break;        
        k--;
        for(j=0; j<k-l; j++){
            arr[k-j][i] = num;
            num++;
            if(num==n*n+1)
                break;
        }
        if(num==n*n+1)
            break;
        i++;
        l++;
        for(j=0; j<k; j++){
            arr[i][j+l] = num;
            num++;
            if(num==n*n+1)
                break;
        }
        if(num==n*n+1)
            break;
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}