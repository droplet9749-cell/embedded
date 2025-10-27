// 매개변수가 없는 함수 
/*#include <stdio.h>

int get_num(void);

int main(viod)
{
    int result;

    result = get_num();
    printf("반환값 : %d\n", result);

    return 0;
}

int get_num(void)
{
    int num;

    printf("양수 입력 : ");
    scanf("%d", &num);

    return num;
}*/
//반환값이 없는 함수
/*#include <stdio.h>

void_print_char(char ch, int count);

int main(void)
{
    print_char('@', 5);

    return 0;
}

void print_char(char ch, int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("%c", ch);
    }

    return;
}*/

// 매개변수와 반환값이 모두 없는 함수
/*#include <stdio.h>

void print_line(void);      // 함수 선언

int main(void)
{
    print_line();           // 함수 호출
    printf("학번    이름    전공    학점\n");
    print_line();           // 함수 호출

    return 0;
}

void print_line(void)
{
    int i;

    for (i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");
}*/

// 재귀호출 함수 - 자신을 다시 호출해서 계속 반복
/*#include <stdio.h>

void fruit(void);       //함수 선언

int main(void)
{
    fruit();            //함수 호출

    return 0;
}

void fruit(void)        //재귀호출 함수 정의
{
    printf("apple\n");
    fruit();             //자신을 다시 호출
}*/

// 3번 실행되는 재귀호출 함수
/*#include <stdio.h>

void fruit(int count);

int main(void)
{
    fruit(1);
    // 처음 호출하므로 1을 인수로 준다.

    return 0;
}

void fruit(int count)       // 호출 횟수를 매개변수에 저장
{
    printf("apple\n");
    if (count == 3) return; // 호출 횟수가 3이면 반환하고 끝낸다. // return = 정지 명령.
    fruit(count + 1);       // 재호출 할 때 호출 횟수를 1 증가
    printf("jam\n");        // apple 문에서 return 하여 count 초기화 / 복사본 실행.
                            // 잼 추가 count == 3 return 상위 명령이기 때문에 jam 출력 -1

}*/

// 재휘호출 예제 1 ~ 10의 합
/*
int sum(int count);
int total;

int main(void)
{
    sum(1);
    printf("%d\n", total); // total에 담긴 값 출력
    return 0;
}
int sum(int count)
{
    total += count;
    if (count == 10) return total; // 카운터의 합 결과를 total에 담기
    sum(count +1);

}*/

// 배열
/*#include <stdio.h>

int main(void)
{
    int ary[5];                 // int형 요소 5개의 배열 선언
                                // ary는 array의 축약어
    ary[0] = 10;                // 첫 번째 배열 요소는 10 대입
    ary[1] = 20;                // 두 번째 배열 요소는 20 대입
    ary[2] = ary[0] + ary[1];   // 첫 번째와 두 번쨰 요소를 더해 세 번째 요소에 저장
    scanf("%d", &ary[3]);       // 키보드로 입력받아 네 번째 요소에 저장

    printf("%d\n", ary[2]);     // 세 번째 배열 요소 출력
    printf("%d\n", ary[3]);
    printf("%d\n", ary[4]);     // 마지막 배열 요소는 쓰레기 값

    return 0;
    
}*/

// 배열과 반복문 예제
/*#include <stdio.h>

int main(void)

{
    int score[5];
    int i;
    int total = 0;
    float avg;                  // avg 정의 파트 누락 -> 추가

    for (i = 0; i < 5; i++)     // 값을 배열의 첨자로 활용
    {
        scanf("%d", &score[i]);
    }
    for (i = 0; i < 5; i++)
    {
        total += score[i];
    }
    avg = total / 5.0;

    for (i = 0; i <5; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);

    return 0;
}*/

// sizeof 연산자 배열
/*#include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        total += score[i];
    }
    avg = total / (double)count;

    for (i = 0; i < 5; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);

    return 0;
}*/

// char 형 배열의 선언과 초기화
/*#include <stdio.h>

 int main(void)
 {
    char str[80] = "applejam";          // 문자열 초기화
    
    printf("최초 문자열 : %s\n", str);    // 초기화 문자열 출력
    printf("문자열 입력 : ");
    scanf("%s", str);                   // 새로운 문자열 입력 ex)grape
    printf("입력 후 문자열 : %s\n", str);  // 입력된 문자열 출력

    return 0;
 }*/

// 문자열 대입 strcpy 함수
/*#include <stdio.h>
#include <string.h>                  // 문자열 관련 함수 우너형을 모아놓은 헤더 파일

int main(void)
{
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");          // str1 배열에 "tiger" 복사
    strcpy(str2, str1);             // str2 배열에 str1 배열의 문자열 복사
    printf("%s, %s\n", str1, str2);

    return 0;
}*/

// 문자열 전용 입출력 함수 : gets, puts 예제
/*#include <stdio.h>

int main(void)
{
    char str[80];

    printf("문자열 입력 : ");           // 입력 안내 메시지 출력
    gets(str);                       // 빈칸을 포함한 문자열 입력
    puts("입력된 문자열 : ");             // 문자열 상수 입력
    puts(str);                        // 배열에 저장된 문자열 출력

    return 0;
}*/

// 문자열 끝네 널문자가 없다면.
/*#include <stdio.h>
// OK 출력 후 오류메시지 출력된다. 따라서 널문자 넣어줘야함.
int main(void)
{
    char str[5];

    str[0] = 'O';
    str[1] = 'K';
    printf("%s\n", str);

    return 0;
}*/