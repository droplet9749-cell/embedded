// 360
/*
!주제
360도 라이다 센서의 모의 입력된 거리값 360개 중
가장 가까운 장애물의 거리와 방향(각도)을 찾아 출력한다.

!배경
실제 라이다 센서는 한바퀴를 스캔하면서 각 방향의 거리 데이터를 반환한다.
로봇은 이 데이터를 바탕으로 장애물의 위치를 판단한다.
라이다 데이터를 배열에 저장
그중 최솟값(최근접 거리)와 그 위치(각도)를 찾아낸다

!입력 조건
라이다 센서 스캔 데이터 개수 : 360개 -> 36개 변경
각 원소는 0 ~ 500cm 사이의 실수형(double) 거리값
0 ~ 359까지 1도 간격으로 저장
(실제 실습에서는 10개~12개 정도로 축소하여 테스트 가능)


요구사항
입력 -
*/

// #include <stdio.h>


// 라이다 데이터를 배열에 저장
//int lidar[36];
// 그중 최솟값(최근접 거리)와 그 위치(각도)를 찾아낸다

//for (0<= i; i < 37; i++)


// int main(void)
// {
//     double scan_n;

//     printf("라이다 스캔 데이터 갯수를 입력하시오. : ");
//     scanf("%lf", &scan_n);

//     int lidar[scan_n];
// }


#include <stdio.h>

int main(void)
{
    double dist[360];
    int i, min_index = 0;
    double min_value1, min_value2, min_value3;

    printf("360 라이다 거리값 입력 (테스트용으로 10개만 입력 가능)\n");
    for (i = 0; i < 10; i++)
    {
        //실제 360개지만 실습용으로 10개만 입력
        printf("%3d 거리(cm) : ", i);
        scanf("%lf", &dist[i]);
    }

    min_value1 = dist[0];
    min_value2 = dist[1];
    min_value3 = dist[2];

    for (i = 1; i < 10; i++)
    {
        if (dist[i] < min_value1)
        {
            min_value1 = dist[i];
            min_index = i;
        }
        if (min_value1 < dist[i] < min_value2)
        {
            min_value2 = dist[i];
            min_index = i;
        }
    }
    printf("\n[라이다 최소 거리 탐색 결과]\n");
    printf("가장 가까운 거리 : %.1f cm, %.1f cm, %.1f cm\n", min_value1, min_value2, min_value3);
    printf("장애물 방향 : %d\n", min_index);

    return 0;

}