#include <stdio.h>

int main(void){
    double m, N, t, G, R, W;
            //반지름, 
    
    const double g = 9.81;  //중력가속도 [9.81 N/m^2]
    const double c = 0.018; //구름저항계수 - 고무바퀴 - 아스팔트 (일반적인 형태)
    const double SF = 2.0;  //안전계수
    const double DM = 1.2;  //설계마진
    
    for F_min > 
    printf("구동 바퀴 수 입력 : %lf\n", N);          if (scanf("%lf", &N)!=1) return 1;
    printf("총 하중(kg) 입력 : %lf\n", m);         if (scanf("%lf", &m)!=1) return 1;
    printf("모터 정격 토크(N*m) 입력 : %lf\n", t);   if (scanf("%lf", &t)!=1) return 1;
    printf("감속비 입력 : %lf\n", G);              if (scanf("%lf", &G)!=1) return 1;
    printf("바퀴 지름 입력 : %lf\n", R);          if (scanf("%lf", &R)!=1) return 1;    
    printf("중량 입력 : %lf\n", W);               if (scanf("%lf", &W)!=1) return 1;
    
    // 중량 계산
    W = m * g;

    // 견인력 계산2
    double F_min = c * W * SF * DM;
    double F_motor = (t * G / R/2) * N;

    printf("필요한 최소 견인력 (F_min) : %f", F_min);
    printf("모터가 낼 수 있는 최소 견인력 (F_motor) : %f", F_motor);

    if (F_min <= F_motor)
    {
        printf("모터 적정성 여부 판단 결과 : 적합");
    }
    
    else if (F_min > F_motor)
    {
        printf("모터 적정성 여부 판단 결과 : 필요 최소 견인력이 부족합니다.");
    }
    
    // 모터 변경, for문으로 스펙 찾기.
    return 0;
}