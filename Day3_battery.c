#include <stdio.h>
#include <math.h>   //수학 함수 사용시 필수

int main(void)
{
    double x, y;

    printf("실수 x 입력 : ");
    scanf("%lf", &x);
    printf("실수 y 입력 : ");
    scanf("%lf", &y);

    printf("\n[matg.h 함수 예제]\n");
    printf("sqrt(x)     = %.4f\n", sqrt(x));
    printf("pow(x)      = %.4f\n", pow(x, y));
    printf("sin(x)      = %.4f\n", sin(x));
    printf("cos(x)      = %.4f\n", cos(x));
    printf("log(x)      = %.4f\n", log(x));
    printf("fabs(x)     = %.4f\n", fabs(x));

    return 0;
    /* gcc Day3_battery.c -o Day3_battery -lm
    워크스페이스 경로 확인 후 위 명령어 터미널에 입력
    ㄴ Day3_battery 라는 함수 포함된 실행파일 생성.
    ./Day3_battey 입력하여 실행 */
}