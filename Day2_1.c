#include <stdio.h>

int main(void)
{
    /*
    printf("%c\n", 'A');
    printf("%s\n", "A");
    printf("%c은 %s입니다.\n", '1', "first");

    char fruit[20] = "straberry";

    printf("딸기 : %s\n", fruit);
    printf("딸기쨈 : %s %s\n", fruit, "jam");

    int income = 0;
    double tax;
    const double tax_rate = 0.12;
    //double tax_rate = 0.11; (const로 초기설정 -> 변경X 오류발생)

    income = 456;
    tax = income * tax_rate;
    printf("세금은 : %.1lf입니다.\n", tax);
*/
/*
    char grade;
    char name[20];

    printf("학점 입력 : ");
    scanf("%c", &grade);
    printf("이름 입력 : ");
    scanf("%s", name);
    printf("%s의 학점은 %c입니다.\n", name, grade);
    */
    int a = 10, b = 10;

    ++a;
    --b;

    printf("a : %d\n, a");
    printf("b : %d\n, b");

    return 0;
}