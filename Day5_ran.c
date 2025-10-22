
// 특정 범위의 정수 난수 생성예제
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));          // 랜덤 초기화

    int r1 = rand() % 10;       // 0 ~ 9
    int r2 = rand() % 100 + 1;  // 1 ~ 100
    int r3 = rand() % 21 - 10;  // -10 ~ 10

    printf("0~9 랜덤 : %d\n", r1);
    printf("1~100 랜덤 : %d\n", r2);
    printf("-10~10 랜덤 : %d\n", r3);

    return 0;
}*/

// 로그에서 급가속 / 급제동 이벤트 카운트 예제

/*
! 주제
로봇의 속도 로그 데이터를 배열로 입력받아,
이웃한 시점 간의 속도 변화량을 계산하여
급가속 x >= 10 또는 급제동 x <= -10 횟수를 계산한다.

! 배경
실제 이동 로봇이나 차량에서는 속도 센서 로그를 분석하여
운행 안정성을 평가한다.
이 예제는 배열을 이용해 주행 데이터를 저장하고,
반복문으로 이웃한 값의 차이를 계산하며,
조건문으로 급가속*급제동 이벤트를 카운트한다.

즉, 배열을 이용한 "데이터 집합 분석"의 기초 예제이다.

! 입력조건
- 주행로그 개수 : N (ex. 10개)
- 각 값은 단위 시간당 속도 (km/h 또는 m/s)
- ex. 0, 12, 18, 35, 28, 25, 15, 30, 42, 33

! 요구사항


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N, i;

    printf("주행 로그 개수를 입력하시오.\n");
    scanf("%d", &N);                                         // 속도측정 횟수입력

    srand(time(NULL));                                       // 랜덤 초기화
    int speed[N];
    int A;
    A = rand() % 200;
    speed[0] = A;
    
    for (i = 1; i < N; i++)
    {
        // A = rand() % 200;                             // 랜덤 범위설정 : 0 ~ 150
        speed[i] = rand() % 9 + A;                         // 랜덤 범위설정 : 0 ~ 150
        printf("%d번째 속도 : %d (km/h)\n", i+1, speed[i]);           
    }

    int delta;                                               // 속도 변화량 정의
    double delta_p;                                          // 급가속 정의
    double delta_m;                                          // 급제동 정의
    for (i = 1; i < N; i++)
    {
        delta = speed[i] - speed[i-1];                       // 속도 변화량 설정
        if (delta >= 10)
        {
            delta_p++;
            printf("급가속 발생\n");
        }

        else if (delta <= -10)
        {
            delta_m++;
            printf("급제동 발생\n");
        }

    }
    printf("급가속 발생 횟수 : %0.lf\n", delta_p);
    printf("급제동 발생 횟수 : %0.lf\n", delta_m);

    return 0;
} // 증가 , 감소 감지하여 연속된 10회 실행

