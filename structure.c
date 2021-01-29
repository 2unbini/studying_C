/*
#include <stdio.h>
#include <string.h>

union employee
{
    char name[20];
    char personNum[20];
    int payment;
};

int main(){
    union employee p1;
    
        puts("종업원의 정보 입력.");
        puts("이름 입력: ");
        fgets(p1.name, sizeof(p1.name), stdin);
        puts("주민번호 입력: ");
        fgets(p1.personNum, sizeof(p1.personNum), stdin);
        puts("급여 입력: ");
        scanf("%d", &p1.payment);

        printf("이름: %s주민번호: %s급여: %d\n", p1.name, p1.personNum, p1.payment);

    return 0;
}
*/
/*
#include <stdio.h>

union point{
    int xpos;
    int ypos;
};

int main(){
    union point arr[3];
    int i;

    for(i=0; i<3; i++){
        printf("점의 좌표 입력: ");
        scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
    }

    for(i=0; i<3; i++)
        printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
    return 0;
}
*/

/*
#include <stdio.h>

union person{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(){
    union person arr[3]={
        {"권은빈", "010-4289-1995", 25},
        {"김태형", "010-4828-1949", 25},
        {"박지민", "010-5854-1484", 25}
    };
    
    int i;
    for(i=0; i<3; i++)
        printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
    return 0;
}
*/

/*
#include <stdio.h>

union employee
{
    char name[20];
    char personalID[20];
    int payment;
};

int main(){
    union employee arr[3];
    int i;

    for(i=0; i<3; i++){
        printf("이름, 주민번호, 급여정보 입력:\n");
        scanf("%s %s %d", arr[i].name, arr[i].personalID, &arr[i].payment);
    }
    puts("이름, 주민번호, 급여정보:");
    for(i=0; i<3; i++)
        printf("%s %s %d\n", arr[i].name, arr[i].personalID, arr[i].payment);
    return 0;
}
*/

/*
#include <stdio.h>

union point{
    int xpos;
    int ypos;
};

int main(){
    union point pos1={1,2};
    union point pos2={100,200};
    union point *ptr=&pos1;

    (*ptr).xpos +=1;
    (*ptr).ypos +=1;
    printf("[%d, %d]\n", ptr->xpos, ptr->ypos);

    ptr=&pos2;
    ptr->xpos +=1;
    ptr->ypos +=1;
    printf("[%d, %d]\n", (*ptr).xpos, (*ptr).ypos);

    return 0;
}
*/

/*
#include <stdio.h>

union point{
    int xpos;
    int ypos;
};

union circle{
    double radius;
    union point *center;
};

int main(){
    union point cen={2, 7};
    double rad=5.5;

    union circle ring={rad, &cen};
    printf("원의 반지름: %g\n", ring.radius);
    printf("원의 중심: [%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos);
    return 0;
}
*/

/*
#include <stdio.h>

union point{
    int xpos;
    int ypos;
    union point *ptr;
};

int main(){
    union point pos1={1, 1};
    union point pos2={2, 2};
    union point pos3={3, 3};

    pos1.ptr = &pos2;
    pos2.ptr = &pos3;
    pos3.ptr = &pos1;

    printf("점의 연결관계\n");
    printf("[%d,%d]와 [%d,%d]의 연결\n",
        pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
    printf("[%d,%d]와 [%d,%d]의 연결\n",
        pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
    printf("[%d,%d]와 [%d,%d]의 연결\n",
        pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
    return 0;
}
*/
/*
#include <stdio.h>

union point{
    int xpos;
    int ypos;
};
typedef union point Point;

typedef union person{
    char name[20];
    char phoneNum[20];
    int age;
} Person;

int main(){
    Point pos={10,20};
    Person p1={"권은빈", "010-0102-0304", 25};
    printf("[%d, %d]\n", pos.xpos, pos.ypos);
    printf("%s %s %d\n", p1.name, p1.phoneNum, p1.age);
    return 0;
}
*/
/*
#include <stdio.h>

typedef union point{
    int xpos;
    int ypos;
} Point;

void OrgSymTrans(Point *ptr){
    ptr->xpos = (ptr->xpos)*-1;
    ptr->ypos = (ptr->ypos)*-1;
}

void ShowPosition(Point pos){
    printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main(){
    Point pos={5, -8};
    OrgSymTrans(&pos);
    ShowPosition(pos);
    OrgSymTrans(&pos);
    ShowPosition(pos);
    return 0;
}
*/
/*
#include <stdio.h>

typedef union point{
    int xpos;
    int ypos;
} Point;

int main(){
    Point pos1={2,3};
    Point pos2;
    pos2=pos1;

    printf("크기: %lu\n", sizeof(pos1));
    printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
    printf("크기: %lu\n", sizeof(pos2));
    printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
    return 0;
}
*/

/*
#include <stdio.h>

typedef union point{
    int xpos;
    int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2){
    Point pos={pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos};
    return pos;
}

Point MinPoint(Point pos1, Point pos2){
    Point pos={pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos};
    return pos;
}

int main(){
    Point pos1={10, 2};
    Point pos2={5, 5};
    Point result;
    
    result=AddPoint(pos1, pos2);
    printf("[%d, %d]\n", result.xpos, result.ypos);
    result=MinPoint(pos1, pos2);
    printf("[%d, %d]\n", result.xpos, result.ypos);
    return 0;
}
*/

/* 문제 23-1
#include <stdio.h>

typedef union point{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point*ptr1, Point*ptr2){
    Point temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(){
    Point pos1={1, 2};
    Point pos2={4, 5};
    SwapPoint(&pos1, &pos2);
    printf("pos1[%d, %d]\npos2[%d, %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
    return 0;
}
*/

/*
#include <stdio.h>

typedef union point{
    int xpos;
    int ypos;
} Point;

typedef union{
    Point posA;
    Point posB;
} Rectangle;

int SpaceRectangle(Rectangle * ptr){
    int result;
    result = ((ptr->posA).xpos-(ptr->posB).xpos)*((ptr->posA).ypos-(ptr->posB).ypos);
    if(result<0)
        result *= -1;
    return result;
}

void PrintfFourPos(Rectangle * ptr){
    Point posC={(ptr->posA).xpos, (ptr->posB).ypos};
    Point posD={(ptr->posB).xpos, (ptr->posA).ypos};

    printf("A[%d, %d]\n", (ptr->posA).xpos, (ptr->posA).ypos);
    printf("B[%d, %d]\n", (ptr->posB).xpos, (ptr->posB).ypos);
    printf("C[%d, %d]\n", posC.xpos, posC.ypos);
    printf("D[%d, %d]\n", posD.xpos, posD.ypos);
}

int main(){
    Rectangle rec={{0,0},{100,100}};
    int space;

    space = SpaceRectangle(&rec);
    PrintfFourPos(&rec);
    printf("넓이: %d\n", space);

    return 0;
}
*/

/*
#include <stdio.h>

typedef union box{
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef union ubox{
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(){
    SBox sbx;
    UBox ubx;
    printf("%p %p %p\n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
    printf("%p %p %p\n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
    printf("%lu %lu\n", sizeof(SBox), sizeof(UBox));
    printf("%lu %lu\n", sizeof(sbx.mem2), sizeof(ubx.mem2));
    return 0;
}
*/

/*
#include <stdio.h>

typedef union{
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(){
    UBox ubx;
    ubx.mem1=20;
    printf("%d\n", ubx.mem2);

    ubx.mem3=9.13;
    printf("%d\n", ubx.mem1);
    printf("%d\n", ubx.mem2);
    printf("%f\n", ubx.mem3);
    return 0;
}
*/

/*
#include <stdio.h>

typedef struct dbshort{
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef union rdbuf{
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
} RDBuf;

int main(){
    RDBuf buf;
    printf("정수 입룍: ");
    scanf("%d", &buf.iBuf);

    printf("%u\n", buf.sBuf.upper);
    printf("%u\n", buf.sBuf.lower);
    printf("%c\n", buf.bBuf[0]);
    printf("%c\n", buf.bBuf[3]);
    return 0;
}
*/

#include <stdio.h>

typedef enum syllable{
    Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
} Syllable;

void Sound(Syllable sy){
    switch(sy){
        case Do:
            puts("Do ~"); return;
        case Re:
            puts("Re ~"); return;
        case Mi:
            puts("Mi ~"); return;
        case Fa:
            puts("Fa ~"); return;
        case So:
            puts("Sol ~"); return;
        case La:
            puts("La ~"); return;
        case Ti:
            puts("Ti ~"); return;
    }
    puts("DoremifasollatiDo~");
}

int main(){
    Syllable tone;
    for(tone=Do; tone<=Ti; tone+=1)
        Sound(tone);
    return 0;
}