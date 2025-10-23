#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int N, i, threshold;                            // 센서 개수, for문(i), 임계값 정의
    printf("센서 개수를 입력하시오.\n");
    printf("센서 개수 범위 1 <= N <= 16.\n");
    scanf("%d", &N);                                // 센서 개수 사용자 입력

    printf("입계값을 입력하시오.\n");
    printf("임계값 범위 0 <= Threshold <= 1023.\n");
    scanf("%d", &threshold);                        // 임계값 사용자 입력

    if (N < 1 || 16 < N || threshold < 0 || 1023 < threshold)
    {
        printf("입력값 범위를 확인하세요.");
        return 1;
    }

    int value[N], label[N];                         // 반사값, 인식값 정의
    char black_count;                               // 검정라인 인식 횟수 정의

    srand(time(NULL));
    printf("value 값을 입력하시오.\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &value[i]);                        // value 값 사용자 입력
        // value[i] = rand() %1024;                    // 0 ~ 1023 범위설정하여 랜덤설정
        if (value[i] < threshold)
        {
            label[i] = 1;
            black_count++;
        }
        else if (value[i] >= threshold)
        {
            label[i] = 0;
        }
    }
    printf("label = ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", label[i]);
    }
    printf("\nblack_count : %d\n", black_count);

    int sum_index;                                     // 센서 index 합
    double index_avg;                                  // 센서 index 평균

    if (black_count == 0)
    {
        printf("라인 없음 == 작동 정지");
    }
    else if (1 <= black_count)
    {
        for (i = 0; i < N; i++)
        {
            sum_index += i * label[i];
        }
        index_avg = sum_index / black_count;
        printf("index_avg = %0.2lf", index_avg);
    }

    return 0;
}