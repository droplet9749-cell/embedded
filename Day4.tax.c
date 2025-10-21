// 리눅스 교재 58page  세금 계산 예제.
#include <stdio.h>

#define EARED_INCOME_TAX_RATE 4         //근로소득세
#define LOCAL_INCOME_TAX_RATE 10        //지방소득세
#define NATIONAL_PENSION_RATE 4.5       //국민연금
#define EMPLOYMENT_INSURANCE_RATE 0.8   //고용보험
#define HEALTH_INSURANCE_RATE 3.38      //건강보험

int main(void)
{
    float salary;
    float eit, lit, np, ei, hi;
    float total;

    printf("This program calculates social insurance tax.\n");
    printf("Please enter your salary(month): ");
    scanf("%f", &salary);

    eit = salary * (EARED_INCOME_TAX_RATE / 100.0);
    lit = eit * (LOCAL_INCOME_TAX_RATE / 100.0);
    np = salary * (NATIONAL_PENSION_RATE / 100.0); 
    ei = salary * (EMPLOYMENT_INSURANCE_RATE / 100.0);
    hi = salary * (HEALTH_INSURANCE_RATE / 100.0);
    total = eit + lit + np + ei + hi;

    printf("\nEarned income tax:        %10d Won\n", (int)eit);
    printf("\nLocal income tax:         %10d Won\n", (int)lit);
    printf("\nNational pension:         %10d Won\n", (int)np);
    printf("\nEmployment insurance:     %10d Won\n", (int)ei);
    printf("\nHealth insurance:         %10d Won\n", (int)hi);
    printf("-----------------------------------------\n");
    printf("\nTotal:                    %10d Won\n", (int)total);

    return 0;
}