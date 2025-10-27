// 2차원 배열 선언과 요소 사용


// 2차원 배열 초기화


// 2차원 char 배열


// 2차원 char 배열 초기화


// 3차원 배열 - 2개 반 3명 학생의 4과목 점수를 저장하는 3차원 배열
/*#include <stdio.h>

int main(void)
{
    int score[2][3][4] = {          // 2개 반 세 명의 4과목 점수 저장
        {{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
        //score[0] 면 초기화
        {{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
        //score[1] 면 초기화
    };                              // 반복 제어 변수

    int i,j,k;

    for (i =0; i < 2; i++)                          // 반 수만큼 반복
    {
        printf("%d반 점수...\n", i + 1);              // 반이 바뀔 때마다 출력
        for (j = 0; j < 3; j++)                     // 학생 수만큼 반복
        {
            for (k = 0; k < 4; k++)                 // 과목 수만큼 반복
            {
                printf("%5d", score[i][j][k]);      // 점수 출력
            }
            printf("\n");           // 한 학생의 점수를 출력하고 줄 바꿈
        }
        printf("\n");               // 한 반의 점수를 출력하고 줄 바꿈
    }

    return 0;
}*/

// 포인터 배열 선언과 사용
/*#include <stdio.h>

int main(void)
{
    char *pary[5];              // 배열 안에 값을 넣은 것이 아니라 주소를 넣었다.
    int i;

    pary[0] = "dog";
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", pary[i]);
    }

    return 0;
}*/

// 여러 개의 1차원 배열을 2차원 배열처럼 사용
/*
#include <stdio.h>

int main(void)
{
    int ary1[4] = { 1, 2, 3, 4};
    int ary2[4] = { 11, 12, 13, 14};
    int ary3[4] = { 21, 22, 23, 24};
    int *pary[3] = { ary1, ary2, ary3};
    int i, j;

    for (i = 0; i < 3; i++)                 // 3행 반복
    {
        for (j = 0; j < 4; j++)             // 4열 반복
        {
            printf("%5d", pary[i][j]);        // 2차원 배열처럼 출력
        }
        printf("\n");                       // 한 행을 출력한 후에 줄 바꿈
    }

    return 0;
}*/


// 가로세로의 합 구하기 예제 문제
/* 문제 ! 가로세로의 합 구하기
    5행 6열 2차원 배열을 선언하고 4행 5열 부분은 1 ~ 20 까지 초기화 합니다.
    초기화 된 배열에서 마지막 열의 요소에는 각 행의 합을 저장하고 마지막 행의 요소에는
    각 열의 합을 저장한 후에 전체 배열의 값을 출력하세요.
*/

#include <stdio.h>

int main(void)
{
    int i,j;

    int ary1[6] = { 1, 2, 3, 4, 5 };
    int ary2[6] = { 6, 7, 8, 9, 10 };
    int ary3[6] = { 11, 12, 13, 14, 15 };
    int ary4[6] = { 16, 17, 18, 19, 20 };
    int ary5[6] = { 0, 0, 0, 0, 0 };
    int *pary[5] = { ary1, ary2, ary3, ary4, ary5};

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            pary[4][j] += pary[i][j];
            pary[i][5] += pary[i][j];
        }
    }

    for (i = 0; i < 5; i++)
    {
        pary[4][5] += pary[4][i];
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d\t", pary[i][j]);
        }

        printf("\n");
    }

    return 0;

}
