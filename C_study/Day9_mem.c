// malloc, free 함수 - 동적 할당한 저장 공간을 사용하는 프로그램
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int));
    if (pi == NULL)
    {
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));

    *pi = 10;                                       // 포인터로 동적 할당 영역 사용
    *pd = 3.4;

    printf("정수형으로 사용 : %d\n", *pi);              // 동적 할당 영역에 저장된 값 출력
    printf("실수형으로 사용 : %.1lf\n", *pd);

    free(pi);                                       // 동적 할당 영역 반환
    free(pd);

    return 0;
}*/

// 동적 할당 영역을 배열처럼 쓰기

// 기타 동적 할당 함수 @@@@@@@@@@@@@@ 동적할당 파트 전체적으로 다시 살펴보기

// 사용자 정의 자료형 - 구조체 선언과 멤버 사용
/*#include <stdio.h>

struct student
{
    int num;
    double grade;
};

int main(void)
{
    struct student s1;

    s1.num = 2;
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);

    return 0;
}*/

// 최고 학점의 학생 데이터 출력
// strcpy

// 구조체 파트 전부 복습하기

// 구조체 배열 초기화하고 출력
#include <stdio.h>

struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

int main(void)
{
    struct address list[5] =
    {
        {"홍길동", 23, "111-1111", "울릉도 독도"},
        {"이순신", 35, "222-2222", "서울 건천동"},
        {"장보고", 19, "333-3333", "완도 청해진"},
        {"유관순", 15, "444-4444", "충남 천안"},
        {"안중근", 45, "555-5555", "황해도 해주"}
    };

    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("%10s%5d%15s%20s\n",
            list[i].name, list[i].age, list[i].tel, list[i].addr);
    }

    return 0;
}