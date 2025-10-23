#include <stdio.h>


int main(void)
{
    int N, i;                                // adc 값의 개수, for반복, 거리상수 정의
    printf("ADC 값의 개수를 입력하시오.\nN = ");     // adc 값의 개수 사용자 입력 0~1023
    scanf("%d", &N);
    int adc[N];                                 // adc 값의 개수대로 배열 정의
    double V_ref, k;                                  // 기준전압, 거리상수 정의

    printf("adc 입력하시오.\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &adc[i]);                   // adc 값 사용자 입력
    }
    printf("ADC     -> ");
        for (i = 0; i < N; i++)
    {
        printf("%d  ", adc[i]);                 // adc 값 출력
    }
    
    printf("\n기준 전압을 입력하시오.\n");
    scanf("%lf", &V_ref);                        // 기준전압 사용자 입력
    printf("\n거리 상수를 입력하시오.\n");
    scanf("%lf", &k);                           // 거리상수 사용자 입력
    double V[N];                                // 전압 정의
    printf("전압(V) -> ");
    double distance[N];                         // 거리 정의
    for (i = 0; i < N; i++)
    {
        V[i] = (adc[i] / 1023.0) * V_ref;       // 소수점 자리 표기 필수
        if (V[i] <=0.01 )                       // 소수점 자리 표기 필수
        {
            V[i] = 0.01;                        // 소수점 자리 표기 필수
        }
        printf("%.2lf  ", V[i]);
    }
    printf("\n거리(cm)-> ");
    for (i = 0; i < N; i++)
    {
        distance[i] = k / V[i];                 // 소수점 자리 표기 필수
        printf("%.2lf ", distance[i]);
    }
    
}