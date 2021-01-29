
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N, n=0, i, j;
    int same;
    int lotto[6];
    char bonus;
    int bball=0;

    printf("-----------------------------\n");
    printf("       @@로또추첨기@@\n");
    printf("랜덤번호가 추출됩니다.\n");
    printf("원하는 횟수를 입력해주세요: \n");
    scanf("%d", &N);
    printf("-----------------------------\n");

    srand((int)time(NULL));
    while(n!=N){
        printf("%d번째 랜덤번호: ", n+1);
        for(i=0; i<6; i++){
            while(1){
                lotto[i]=rand()%45+1;
                same = 0;
                for(j=0; j<i; j++){
                    if(lotto[i]==lotto[j])
                        same=1;
                }
                if(same == 0)
                    break;
            }
            printf("%d ", lotto[i]);
        }
        printf("\n");
        ++n;
    }

    printf("-----------------------------\n");
    printf("\n보너스 볼을 뽑으시겠습니까?\n");
    printf("y / n \n");
    scanf(" %c", &bonus);
    {
        if (bonus == 'y' || bonus == 'Y')
        {
            while(1){
                bball = rand()%45+1;
                same = 0;
                for(j=0; j<6; j++){
                    if(bball==lotto[j])
                        same=1;
                }
                if(same == 0)
                    break;
            }
            printf("\n-*-*-*-*-*-*-*-*-*-*-\n");
            printf("BONUS BALL !!! %d\n", bball);
            printf("Good Luck d_<\n");
            printf("-*-*-*-*-*-*-*-*-*-*-\n");
        }
        else if(bonus == 'n' || bonus == 'N'){
            printf("-*-*-*-*-*-*-*-*-*-*-\n");
            printf("Good Luck a_<\n");
            printf("-*-*-*-*-*-*-*-*-*-*-\n");
        }
    }

    return 0;
    

}

