// 포인터 대입 규칙 - 허용되지 않는 포인터의 대입
/*#include <stdio.h>

int main(void)
{
    int a = 10;                            // 변수 선언과 초기화
    int *p = &a;                           // 포인터 선언과 동시에 a를 가리키도록 초기화
    double *pd;                            // double형 변수를 가리키는 포인터
    // int *pd;                            // double형 -> int형으로 변경

    //pd = p;                                 // 포인터 p 값을 포인터 pd에 대입.
    pd = (double*)p;                        // 포인터 p 값을 더블형태로 포인터 pd에 대입.
    printf("%lf\n",*pd);                     // pd가 가리키는 변수의 값 출력 (double)
    printf("%lf\n",(double)a);               // a 변수의 값을 double형태로 출력 
    printf("%d\n",(int)a);                  // a 변수의 값을 int형태로 출력 


    printf("%lf\n", (double)*pd);   // pd가 가리키는 변수의 값을 int형으로 바꿔서 출력 (int)-> (int) 변환
    printf("%d\n", (int)*pd);   // pd가 가르키는 주소의 값을 int 형태로 출력 - a의 주소값
    printf("%d\n", (int*)pd);   // pd가 가리키는 변수의 값 출력 (int) -> p의 주소값
    // pd 에 p의 주소를 넣어 a의 주소를 pd에 담음 - 따라서 *pd하면 10이 나와야하는데
    // pd를 double형태로 담아내어 (자료형태가 달라) 오류발생

    return 0;
}*/

// 포인터를 사용한 두 변수의 값 교환
/*#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;
    int a,b;

    
    // temp = a;      // temp에 pa가 가리키는 변수의 값 저장
    // a = b;      // pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
    // b = temp;     // pb가 가리키는 변수에 temp 값 저장
    
    
    temp = *pa;      // temp에 pa가 가리키는 변수의 값 저장
    *pa = *pb;      // pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
    *pb = temp;     // pb가 가리키는 변수에 temp 값 저장

    // main과 다른 함수에서 가져온 변수는 공유되지 않는다 따라서 return a 같은 형식으로 변수를 돌려줘야한다.
    // 이때에 돌려주는 함수는 단 1개만 돌려줄 수 있다.
    // 해결법 : 함수 () 안에 적용시킬 변수를 넣어준다. -> 함수 내부는 수식만.
    
}*/

// 포인터 예제 -> 포인터 활용하여 함수 이용 - 오름차순 배치.
/*
! 문제
키보드로 실수 3개를 입력한 후 큰 숫자부터 작은 숫자로 정렬한 뒤 출력하는 프로그램을 작성
다음 코드와 출력 결과를 참고해 Line_ip 함수를 작성하시오.
Line_ip 함수에는 이미 정의된 swap 함수를 호출해 구현하시오.

! 실행결과
실수 값 3개 입력 : 2.7 1.5 3.4
정렬된 값 출력 : 3.4 2.7 1.5
*/
// 코드작성
/*#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{
    double max, mid, min;

    printf("실수값 3개 입력 : ");
    scanf("%lf %lf %lf", &max, &mid, &min);
    line_up(&max, &mid, &min);
    printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}

void swap(double *pa, double *pb)
{
    double temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("%.1lf / %.1lf\n", *pa, *pb);
}

void line_up(double *maxp, double *midp, double *minp)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if (*maxp < *midp)
        {
            swap(maxp, midp);
        }
        else if (*midp < *minp)
        {
            swap(midp,minp);
        }
        else if (*maxp < *minp)
        {
            swap(maxp, minp);
        }
    }           // swap(&maxp, &midp); 실행시  포인터 변수의 주소로 실행됨
                // 이미 line_up 단계에서 실수의 주소를 받고 있으므로 & 제거 후 실행
    printf("%.1lf / %.1lf / %.1lf\n", *maxp, *midp, *minp);
}*/

// 배열명으로 배열 요소 사용하기 - 배열명에 정수 연산 수행, 배열 요소 사용
/*#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("세 번째 배열 요소에 키보드 입력 : ");
    scanf("%d", ary + 2);

    for (i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));  // %5d ?
    }

    return 0;

}*/

// 배열명처럼 사용되는 포인터
/*#include <stdio.h>

int main(void)
{
    int ary[3];
    int *pa = ary;
    int i;

    *pa = 10;                           // 첫 번째 배열 요소에 10 대입
    *(pa + 1) = 20;                     // 두 번째 배열 요소에 20 대입
    pa[2] = pa[0] + pa[1];              // 대괄호를 써서 pa를 배열명처럼 사용

    for (i = 0 ; i < 3; i++)
    {
        printf("%5d", pa[i]);
    }

    return 0;
}*/

// 포인터의 뺄셈과 관계연산
/*#include <stdio.h>

int main(void)
{
    int ary[5] = { 10, 20, 30, 40, 50 };
    int *pa = ary;
    int *pb = pa + 3;

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);

    pa++;
    printf("pb - pa : %u\n", pb - pa);

    printf("앞에 있는 배열 요소의 값 출력 : ");
    if (pa < pb) printf("%d\n", *pa);
    else printf("%d\n", *pb);

    return 0; // 배열명의 정수 덧셈은 가리키는 자료형의 크기를 곱해서 더한다
}*/

// 배열의 값을 출력하는 함수 - 배열 처리 함수
/*#include <stdio.h>

void print_ary(int *pa);

int main(void)
{
    int ary[5] = { 10, 20, 30, 40, 50 };

    print_ary(ary);

    return 0;
}

void print_ary(int *pa)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", pa[i]);
    }
}*/

// 크기가 다른 배열을 출력하는 함수
/*#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
    int ary1[5] = { 10, 20, 30, 40, 50};
    int ary2[7] = { 10, 20, 30, 40, 50, 60, 70};


    print_ary(ary1, sizeof(ary1)/sizeof(ary1[0]));      // 배열 전체 크기 / 배열 한 요소 크기 = 요소 개수
    printf("\n");                                       // 5 생략
    print_ary(ary2, sizeof(ary2)/sizeof(ary2[0]));      // 배열 전체 크기 / 배열 한 요소 크기 = 요소 개수
                                                        // 7 생략
    return 0;
}

void print_ary(int *pa, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
}*/

// !!!!!!! 배열에 값을 입력하는 함수 예제 풀기


// 아스키 코드 - 대문자를 소문자로 변경
/*#include <stdio.h>
int main(void)
{
    char small, cap = 'G';

    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }
    printf("대문자 : %c %c", cap, '\n');
    printf("소문자 : %c", small);

    return 0;
}*/

// getchar & puuchar 예제 건너뜀 . 풀어보기

// scanf 함수가 문자를 입력하는 과정 - 버퍼 사용 문자입력
#include <stdio.h>

int main(void)
{
    char ch;
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    scanf("%c", ch);            // 버퍼로 남아있는건 sanf ! w? 입력값 대기 상태이므로
    printf("%c", ch);
    return 0;
}