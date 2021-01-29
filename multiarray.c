
//16-1 문제 1
/*
#include <stdio.h>

int main(){
    int arr[3][9];
    int dan, i;

    for(dan=2; dan<5; dan++){
        for(i=1; i<10; i++){
            arr[dan-1][i-1]=dan*i;
            printf("%d ", arr[dan-1][i-1]);
        }
        printf("\n");
    }
    return 0;
}
*/

//16-1-2
/*
#include <stdio.h>
int main(){
    int A[2][4]={1,2,3,4,5,6,7,8};
    int B[4][2];
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<4; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            B[i][j]=A[j][i];
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<2; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    return 0;
}
*/

//16-1-3
/*
#include <stdio.h>

int main(){
    int score[5][5]={0, };
    char *name[4]={"Chulsoo", "Chulhee", "Youngsu", "Younghe"};
    char *subject[4]={"Korean", "English", "Math", "History"};
    int i, j;

    for(i=0; i<4; i++){
        printf("%s 국,영,수,역 점수 입력: ", name[i]);
        for(j=0; j<4; j++){
            scanf("%d", &score[i][j]);
            score[i][4] += score[i][j];
        }
    }

    printf("         ");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            score[4][i] += score[j][i];
        }
        score[4][4] += (score[i][4]+score[4][i]);
        printf("%s ", subject[i]);
    }
    printf("name sum\n");

    for(i=0; i<4; i++){
        printf("%s : ", name[i]);
        for(j=0; j<5; j++){
            printf("%5d ", score[i][j]);
        }
        printf("\n");
    }

    printf("sub sum : ");
    for(i=0; i<5; i++)
        printf("%5d ", score[4][i]);

    return 0;

}
*/

/*
#include <stdio.h>

int main(){
    double dd[3];
    int mean = 0, i, j;
    int record[3][3][2]={
        {
            {70, 80},
            {94, 90},
            {70, 85}
        },
        {
            {93, 80},
            {95, 60},
            {90, 82}
        },
        {
            {98, 89},
            {99, 94},
            {91, 87}
        }
    };

    for(i=0; i<3; i++)
        for(j=0; j<2; j++)
            mean+=record[0][i][j];
    printf("A학급 전체 평균: %g\n", (double)mean/6);

    mean=0;
    for(i=0; i<3; i++)
        for(j=0; j<2; j++)
            mean+=record[1][i][j];
    printf("B학급 전체 평균: %g\n", (double)mean/6);

    mean=0;
    for(i=0; i<3; i++)
        for(j=0; j<2; j++)
            mean+=record[2][i][j];
    printf("C학급 전체 평균: %g\n", (double)mean/6);

    printf("%lu", sizeof(dd));
    return 0;
}
*/

