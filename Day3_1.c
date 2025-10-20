#include <stdio.h>

//int main(void)
//{
    /* while 문
    int a = 1;

    while (a < 10)
    {
        a = a * 2;
    }
    printf("a : %d\n", a);

    return 0;
    */

    /* for 문 - for 조건 순서대로 진행
    int a = 1;
    int i;

    for (i = 0; i < 3; i++,printf("i = %d입니다.", i))
    {
        a = a * 2;
    }
    printf("a : %d\n", a);

    return 0;
    */

    /* do~while문 - !특징 : 최초 1회는 반드시 실행한다. 코드 실행순서대로 진행되기 때문.
    int a = 1;

    do
    {
        a = a * 2;
    } while (a < 10);
    printf("a : %d\n", a);
    
    return 0;
    */
    
    /* 중첩 반복문
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
    */

    /* 중첩 반복문
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j-i > 0; j--)
        //for (j = 0; 0<= j < 5; j++) -> 비교연산자 좌측부터 진행 후 우측 부등호 계산으로 오류발생
        {   
            printf("*");
            if (j < 0)
            break;
        }
        printf("\n");
    }
    return 0;
    */

    /*for문 구구단
    int i, j;
    for (i = 2; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
    return 0;
    */

    /*while문 구구단
    int i = 2;
    int j;
    while (i < 10)
    {
        j = 1;

        while (j < 10)
        {
            printf("%d * %d = %d\t", i, j, i*j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
    */
//}
/* 함수 sum
int sum(int x, int y); //함수 지정 순서 앞에 들어와도 정상 작동 but 메인 함수가
//우선순위에 있기 때문에 매개 변수가 있는 int a = 10, b = 20; ... 해당 부분 우선 작성

int sum(int x, int y)
{
    int temp;

    temp = x + y;

    return temp;
}

int main(void)
{
    int a = 20, b = 30;
    int result;

    result = sum(a,b);
    printf("result : %d\n", result);

    return 0; 
}*/

