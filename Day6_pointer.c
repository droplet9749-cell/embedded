// 주소 연산자 - 변수의 주소 출력예제
/*#include <stdio.h>

int main(void)
{
    int a;                                      // int형 변수 선언
    double b;                                   // double형 변수 선언
    char c;                                     // char형 변수 선언

    printf("int형 변수의 주소 : %p\n", &a);        // 주소 연산자로 주소 계산.
    printf("double형 변수의 주소 : %u\n", &b);
    printf("char형 변수의 주소 : %u\n", &c);

    return 0;
}*/

// 포인터와 간접 참조 연산자 예제1 *pa 활용 주소에 값 대입
/*#include <stdio.h>

int main(void)
{
    int a;                                      // 일반 변수 선언
    int *pa;                                    // 포인터 선언

    pa = &a;                                    // 포인터에 a의 주소 대입
    //pa = 10;                                  // 포인터에 주소만 들어갈 수 있다
    *pa = 12;                                   // 포인터로 변수 a에 10 대입

    // *00 = 00의 값을 뜻함

    printf("포인터로 a 값 출력 : %d\n", *pa);
    printf("변수명 a 값 출력 : %d\n", a);       // 변수 a 값 출력
    printf("변수명 a 값 출력 : %d\n", pa);      // pa의 주소 출력

    return 0;
}*/

// 여러가지 포인터 활용해보기
/*#include <stdio.h>

int main(void)
{
    int a = 10, b = 15, total;
    double avg;
    int *pa, *pb;
    int *pt = &total;
    double *pg = &avg;

    pa = &a;
    pb = &b;
    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("두 정수의 평균 : %.1lf\n", *pg);

    return 0;
    
}*/

// const를 사용한 포인터
/*#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    const int *pa = &a;                     // 포인터 pa는 변수 a를 가리킨다.

    printf("변수 a 값 : %d\n", *pa);         // 포인터를 간접 참조하여 a 출력
    pa = &b;                                // 포인터가 변수 b를 가리키게 한다.
    printf("변수 b 값 : %d\n", *pa);         // 포인터를 간접 참조하여 b 출력
    pa = &a;                                // 포인터가 다시 변수 a를 가르킨다.
    printf("변수 a 값 : %d\n", *pa);         // 포인터로 간접 참조하여 바뀐 값 출력
    a = 20;                                 // a를 직접 참조하여 값을 바꾼다.
    printf("변수 a 값 : %d\n", *pa);         // 포인터로 간접 참조하여 바뀐 값 출력

    // const 사용 이유 : 간접 참조하여 값 변경 불가.
    // ex) *pa = 20; 실행 X 포인터를 불러와서 a의 값을 변경하지 못한다.
    // *pa와 a 값을 바꾸고 싶다면 a = x; 형태로 주소 내부 값을 변경하거나 주소를 변경(*pa값).

    return 0;
}*/

// 주소와 포인터의 크기
#include <stdio.h>

int main(void)
{
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
    printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기 : %d\n\n", sizeof(&db));

    printf("char * 포인터의 크기 : %d\n", sizeof(pc));
    printf("int * 포인터의 크기 : %d\n", sizeof(pi));
    printf("double * 포인터의크기 : %d\n\n", sizeof(pd));


    printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
    printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
    printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

    return 0;
}