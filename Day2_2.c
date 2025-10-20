#include <stdio.h>

int main(void)
{   // 증감연산자 실습
    /*int a = 10, b = 10;

    ++a;
    --b;

    printf("a : %d\n", a);
    printf("b : %d\n", b);
    */

    //형변환 연산자 실습
    /*
    int a = 20, b = 3;
    double res;

    res = ((double)a) / ((double)b);
    printf("a = %d, b = %d\n", a, b);
    printf("a / b의 결과 : %.1lf\n", res);

    a = (int)res;
    printf("(int) %.lf의 결과 : %d\n", res, a);
    */

    //sizeof 연산자
    /*
    int a = 10;
    double b = 3.4;

    printf("int형 변수의 크기 : %d\n", sizeof(a));
    printf("double형 변수의 크기 : %d\n", sizeof(b));
    printf("정수형 상수의 크기 : %d\n", sizeof(10));
    printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4));
    printf("char 자료형의 크기 : %d\n", sizeof(char));

    long c = 10;
    printf("long형 변수의 크기 : %d\n", sizeof(c));
    */
   
    //조건 연산자 실습
    /*
    int a = 10, b = 20, res;

    res = (a > b) ? a : b;
    printf("큰 값 : %d\n", res);
    */

    //연산자 우선순위와 연산방향 실습
    /*
    int a = 10, b = 5;
    int res1;
    int res2;
    int res3;
    int res4;

    res1 = a / b * 2;
    printf("res = %d\n", res1);
    res2 = ++a *3;
    printf("res = %d\n", res2);
    res3 = a > b && a != 5;
    printf("res = %d\n", res3);
    res4 = a % 3 == 0;
    printf("res = %d\n", res4);

    printf("res = %d\n", res4);
    */

    // 조건문 실행 효율 늘리기 실습
    /*
    int a = 10;
    
    if (a <= 3)
    {
        if (a == 1)
        {
        printf("일");
        }
        else if (a ==2)
        {
            printf("이");
        }
        else
        {
            printf("삼");
        }
    }
    else if (3 < a && a <=6)
    {
        if (a == 4)
        {
        printf("사");
        }
        else if (a == 5)
        {
            printf("오");
        }
        else
        {
            printf("육");
        }
    }
    else if (6 < a && a<= 9)
    {   
        if (a == 7)
        {
            printf("칠");
        }
        else if (a == 8)
        {
            printf("팔");
        }
        else
        {
            printf("구");
        }
    }
    else
    {
        printf("십");
    }
    */
    //switch~case 문 실습 1
    /*
    int rank = 2, m = 0;

    switch (rank)
    {
    case 1:
        m = 300;
        break;
    case 2:
        m = 200;
        break;
    case 3:
        m = 100;
        break;
    default:
        m = 10;
        break;
    }
    printf("m : %d\n", m);
    */
    //MDROBOT 배터리 용량 선정 실습 _ MDH150
    int A = 8;      //평균 전류
    int vel = 6.4;  // 선속도 km/h
    int eta = 0.9;  // 시스템 효율 설정
    int R = 0.5;    // 예비율 설정
    int V = 24;     // 공칭 전압 24~48vdc
    int C

    return 0;

}