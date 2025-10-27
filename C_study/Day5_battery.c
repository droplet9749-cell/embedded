#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N, i;
    // double battery[101];
    //미리 101,100 개로 지정 해놓는 이유 추후에 얼마나 사용될지 모르기 때문에 여유롭게. but 메모리 낭비일 수 있음
    int warning = 0; // 0: OFF, 1: ON
    int level; // 배터리 잔량

    printf("배터리 잔량 표기 횟수 입력 : ");
    scanf("%d", &N);                                // 배터리 잔량 표기 횟수 사용자 입력
    double battery[N];                              // 사용자 정의 횟수 battery 배열 저장
    srand(time(NULL));                              // 시간 초기화
    for (i = 0; i < N; i++)
    {
        level = rand() %101;                        // 배터리 잔량 임의저장
        battery[i] = level;
        printf("현재 배터리 잔량 : %d\n", level);

        if (warning == 0 && level <= 30)
        {
            warning = 1;
            printf("@@@배터리 충전 필요@@@\n");
        }
        
        else if (warning == 1 && level >= 35)
        {
            warning = 0;
            printf("@@@배터리 충전 필요 해제@@@\n");
        }
    }

}