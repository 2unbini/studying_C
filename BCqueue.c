#include <stdio.h>

const int MAX_QUEUE = 10; // 큐의 최대 수용값
int arr[MAX_QUEUE+1]={0,}; // 큐 배열(배열의 길이가 MAX_QUEUE+1인 것은, delete 실행시 오류를 방지하기 위함)
int arrNum = 0; // 현재 큐의 위치
int front=0, rear=0; // 맨 앞 큐, 맨 뒤 큐의 값(arrNum으로부터 받음)

void doQueue(int); // switch문에 따라 큐 수행
void addQueue(); // 큐 배열에 값 추가
void delQueue(); // 큐 배열에서 값 삭제
void viewQueue(); // 큐 배열 보기

int main(){
    int n;

    while(1){
        printf("1. Insert\n2. Delete\n3. Display\n4. Quit\n");
        printf("select number: ");
        scanf("%d", &n); // 수행할 함수 번호 입력
        if(n==4){
            printf("[QUIT PROGRAM]"); // quit 수행
            break;
        }
        doQueue(n); // 번호에 따른 함수 호출(하는 함수)
        printf("\n");
    }

    return 0;
}

// 사용자로부터 입력받은 번호에 따라 수행할 함수 판별(그리고 실행)
void doQueue(int n){
    switch (n)
    {
    case 1:
        addQueue();
        break;
    case 2:
        delQueue();
        break;
    case 3:
        viewQueue();
        break;
    default:
        printf("wrong number, please select number(1~4)\n");
        break;
    }
}

// 큐의 현재 위치(배열의 위치)를 변수 rear에 저장한 뒤, 큐가 다 찼는지 아닌지 판별하고, 데이터 입력받음
void addQueue(){
    rear = arrNum;
    if(rear==MAX_QUEUE){
        printf("queue is now full!\n");
    }
    else{
        printf("insert data : ");
        scanf("%d", &arr[arrNum]);
        ++arrNum;
    }
}

// 큐의 현재 위치를 변수 front에 저장한 뒤, 큐가 비었는지 아닌지 판별하고, 데이터 삭제, 배열 새로 정렬함
// 배열 새로 정렬할 때, 큐가 꽉 찬 경우 arr[10]과 같이 할당한 데이터 이상의 값에 접근하게 되는데,
// 이 때 오류를 방지하기 위해 배열의 길이를 10이 아닌 11로 정함.
void delQueue(){
    front = arrNum;
    if(front==0){
        printf("queue is now empty!\n");
    }
    else{
        printf("the first queue %d deleted.\n", arr[0]);
        for(int i=0; i<front; i++){
            arr[i]=arr[i+1];
            arr[i+1]=0;
        }
        --arrNum;
    }
}

// 현재 배열을 보여주고, 몇 자리가 남았는지 알려줌.
void viewQueue(){
    printf("QUEUE LIST : ");
    for(int i=0; i<arrNum; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n%d left.\n", MAX_QUEUE-arrNum);
}