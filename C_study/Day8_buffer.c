// scanf 함수의 반환값 활용 - 입력 문자의 아스키 코드 값을 출력하는 프로그램
/*#include <stdio.h>

int main(void)
{
    int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch);
        if (res == -1) break;
        printf("%d ", ch);
    }

    return 0;
}*/

// getchar 함수 하용한 문자열 입력 - 자주 다룬다 (로봇에서 문자출력 많기 때문)
// 예제 작성하기

// 입력 버퍼 지우기
/*#include <stdio.h>

int main(void)
{
    int num, grade;

    printf("학번 입력 : ");             
    scanf("%d", &num);                // 학번 입력
    getchar();                        // 버퍼에 남아있는 개행 문자 제거
    // 제거 안할 시 enter 실행으로 학점입력 X
    printf("학점 입력 : ");
    grade = getchar();               // 학점 입력
    printf("학번 : %d, 학점 : %c", num, grade);

    return 0;
}*/

// 문자열 상수 구현 방법
/*#include <stdio.h>

int main(void)
{
    printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
    printf("두 번째 문자의 주소 값 : %p\n", "apple + 1");           // 주소 값 출력
    printf("첫 번째 문자 : %c\n", *"apple");                      // 간접 참조 연산
    printf("두 번째 문자 : %c\n", *("apple" + 1));                // 포인터 연산식
    printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);         // 배열 표현식

    return 0;
}*/

// char 포인터로 문자열 사용
/*#include <stdio.h>

int main(void)
{
    char *dessert = "apple";
    // %s => 문자열 하나하나씩 읽어낸다.
    printf("오늘 후식은 %s입니다.\n", dessert);         // 문자열 출력
    dessert = "banana";                             // 새로운 문자열 대입
    printf("내일 후식은 %s입니다.\n", dessert);         // 바뀐 문자열 출력

    return 0;
}*/

// scanf 함수를 사용한 문자열 입력
/*#include <stdio.h>

int main(void)
{
    char str[80];

    printf("문자열 입력 : ");
    scanf("%s", str);                       // %s 사용하고 배열명을 준다.
    printf("첫 번째 단어 : %s\n", str);       // 배열에 입력된 문자열 출력
    scanf("%s", str);
    printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

    return 0;
}*/

// gets 합수를 사용하는 문자열 입력
/*#include <stdio.h>

int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    gets(str);
    printf("입력한 문자열은 %s입니다.", str);

    return 0;
}*/


// fgets 함수를 사용한 문자열 입력
/*#include <stdio.h>
// 나중에 입력할 공간..?

int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    fgets(str, sizeof(str), stdin);             // 입니다 만 줄바꿈 출력된다.
    str[strlen(str) - 1] = '\0';                // 줄바꿈 삭제
    //enter까지 개행문자에 삽입 되기 때문에 삭제하는 과정
    printf("입력된 문자열은 %s입니다\n", str);

    return 0;
}*/

// 표준 입력 함수의 버퍼 공유문제
// 개행 문자로 인해 gets 함수가 입력을 못하는 경우
/*#include <stdio.h>

int main(void)
{
    int age;
    char name[20];

    printf("나이 입력 : ");
    scanf("%d", &age);          // scanf 함수로 나이 입력
    getchar();                  // \n 제거
    printf("이름 입력 : ");
    gets(name);                 // gets 함수로 이름 입력
    printf("나이 : %d, 이름 : %s\n", age, name);

    return 0;
}*/

// 문자열을 대입하는 strcpy 함수
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char *ps1  = "banana";
    char *ps2  = str2;

    printf("최초 문자열 : %s\n", str1);
    strcpy(str1, str2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps1);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, "banana");
    printf("바뀐 문자열 : %s\n", str1);

    return 0;

}*/

// 원하는 개수의 문자만을 복사하는 strncpy 함수
/*#include <stdio.h>
#include <string.h>

int amin(void)
{
    char str[20] = "mango tree";            // 배열 초기화

    strncpy(str, "apple-pie", 5);           // "apple-pie"에서 다섯 문자만 복사

    printf("%s\n", str);                    // 복사 받은 문자열 출력

    return 0;
}*/

// 문자열을 붙이는 strcat, strncat 함수
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80] = "straw";         // 문자열 초기화

    strcat(str, "berry");           // str 배열에 문자열 붙이기
    printf("%s\n", str);
    strncat(str, "piece", 3);       // str 배열에 3개의 문자 붙이기
    printf("%s\n", str);

    return 0;
}*/

// strlen

// strcmp, strncmp

// 전역 변수
/*#include <stdio.h>

void assign10(void);
void assign20(void);

int a;  // 전역변수로 정의할 시에 자동 초기화 -> a = 0

int main(void)
{
    printf("함수 호출 전 a 값 : %d\n", a);

    assign10();
    assign20();

    printf("함수 호출 후 a 값 : %d\n", a);

    return 0;
}

void assign10(void)
{
    a = 10;
}

void assign20(void)
{
    int a;

    a = 20;
}*/

// 정적 지역 변수
/*#include <stdio.h>

void autuo_func(void);*/

// 레지스터 변수
// 레지스터 사용 여부는 컴파일러가 판단한다.
/*#include <stdio.h>

int main(void)
{
    register int i;
    auto int sum = 0;
    //int i;
    //int sum = 0;            // 속도 비교

    for (i = 1; i <= 10000000; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}*/

// 값을 복사해서 전달하는 방법
/*#include <stdio.h>

void add_ten(int a);    // 함수 선언

int main(void)
{
    int a = 10;

    add_ten(a);         // a 값을 복사하여 전달
    printf("a : %d\n", a);

    return 0;
}

void add_ten(int a)             // 263행의 a와 다른 독립적인 저장 공간 할당
{
    a = a + 10;                 // 271행의 매개변수 a에 10을 더한다.
}*/

// 주소를 전달하는 방법 !!!! 예제 작성 후 공부하기


// 주소를 반환하는 함수 !!!! 예제 작성 후 공부하기

