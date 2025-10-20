#include <stdio.h>
#include <math.h>   //수학 함수 사용시 필수

/*배터리 용량 확인 실습코드
int main(void){
    double I_load, vel, R, V, C, eta;

// 배터리 사양 및 환경정보 입력
printf("평균 전류 I_load [A] (부하측) : ");      if (scanf("%lf", &I_load)!=1) return 1;
printf("평균 속도 vel [km/h] : ");              if (scanf("%lf", &vel)!=1) return 1;
printf("예비율 R [20% = 0.2] : ");              if (scanf("%lf", &R)!=1) return 1;

printf("공칭전압 V [V] : ");                    if(scanf("%lf", &V)!=1) return 1;
printf("용량 C [ah] : ");                      if(scanf("%lf", &C)!=1) return 1;
printf("시스템효율 eta [90% = 0.9] : ");         if(scanf("%lf", &eta)!=1) return 1;

//입력범위 검증
if (V<=0 || C<=0 || I_load<=0 || vel<=0 || R<0 || R>=0 || eta<=0 || eta>100 ) {
    printf("입력값 범위를 확인하세요\n");
    return 1;
}
//소비전력 (W)
    const double P = (V * I_load) / eta;
//사용 가능 에너지 (Wh)
    const double E_usable = V * C * eta * (1.0 - R);

//런타임 계산 (h)
    const double t_h = E_usable / P;
    const double t_min = t_h * 60.0;

//주행거리 계산 (km)
    const double d_km = vel * t_h;

//출력결과
    printf("사용 가능 에너지 E_usable : %.2f Wh\n", E_usable);
    printf("런타임 t                : %.2f h (%lf min)\n", t_h, t_min);
    printf("주행거리 d               : %.2f km\n", d_km);

    return 0;
}*/

int main(void) {
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
}