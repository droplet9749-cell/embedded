#include <stdio.h>  // stdio : standard input
                    // output (표준입출력)의 줄임말
int main(void)
{
    printf("Be happy");     //be happy 출력
    printf("My freind\n");    //My freind 출력

    printf("Be happy\n");       //be happy 출력하고 줄을 바꿈 (\n)
    printf("12354678901234567890\n"); // 번호 입력하고 줄바꿈
    printf("My\tfreind\n");    //My freind 출력 (/t) 탭으로 위치이동 후 줄바꿈
    printf("Goot\bd\tchance\n"); // t를 d로 바꾸고 탭 위치이동 후 줄바꿈
    printf("Cow\rW\a\n"); // 맨 앞으로 이동 (\r) C를 W로 바꾸고 벨소리 (\a) 내고서 줄바꿈

    return 0;
}