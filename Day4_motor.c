#include <stdio.h>
#include <math.h>


int main(void){
    double m, Tm, G, eta, r, c, SF;
    int Nm;
    const double g = 9.81;

    // 사용자 입력
    printf("총 질량 입력 : %lf\n", m);                 if(scanf("lf", &m)!=1) return 1;
    printf("모터 정격토크 입력 : %lf\n", Tm);           if(scanf("lf", &Tm)!=1) return 1;
    printf("구동 모터수 입력 : %lf\n", Nm);            if(scanf("lf", &Nm)!=1) return 1;
    printf("감속비 입력 : %lf\n", G);                 if(scanf("lf", &G)!=1) return 1;
    printf("구동 효율 입력 : %lf\n", eta);             if(scanf("lf", &eta)!=1) return 1;
    printf("바퀴 반지름 입력 : %lf\n", r);             if(scanf("lf", &r)!=1) return 1;
    printf("구름 계수 입력 : %lf\n", c);              if(scanf("lf", &c)!=1) return 1;
    printf("안전계수 입력 : %lf\n", SF);              if(scanf("lf", &SF)!=1) return 1;

    //입력범위 검증
    if ( eta <= 0 || eta > 100 || r <= 0 || Tm <= 0 || Nm <= 0 || c < 0.015 || c < 0.03 || SF < 1 ) {
        printf("입력값 범위를 확인하세요\n");
        return 1;

    //총 가용 견인력 계산
    double T_tot    = Nm * Tm * G * eta;
    double F_avail  = T_tot / r;
    double mg       = m * g
    printf("F_avail(총 가용 견인력) : %lf N\n", F_avail);


    /* 함수예제
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
    */
    // 등판 가능 최대각
    double sin_θ = (F_avail / SF - c * mg) / mg;
    if (sin_θ < 0.0) sin_θ = 0.0;
    if (sin_θ > 1.0) sin_θ = 1.0;

    double θ_rad = asin(sin_θ);
    // 작성 완료하기
}
