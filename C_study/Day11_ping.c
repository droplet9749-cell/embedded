//fgets와 fputs 한줄씩 입출력 - 여러 줄의 문장을 입력하여 한 줄로 출력
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *ifp, *ofp;
    char str[80];
    char *res;

    ifp = fopen("a.txt", "r");
    if (ifp == NULL)
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }
    ofp = fopen("b.txt", "w");
    if (ofp == NULL)
    {
        printf("출력 파일을 열지 못했습니다.\n");
        return 1;
    }

    while(1)
    {
        res = fgets(str, sizeof(str), ifp);
        printf("\n");
        printf("%s", str);              // 출력
        if (res == NULL)
        {
            break;
        }
        //str[strlen(str) - 1] = '\0';
        strcspn(str, "\n");                     // strcspn = 특정 문자들이 처음 등장하기 전까지의 길이
        fputs(str, ofp);
        fputs(" ", ofp);
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}*/

// 핑 파일 열어서 코드작성

#include <stdio.h>


int main(void)
{
    FILE *fp;
    char str[100];
    int i = 0;

    fp = fopen("ping.txt", "r");
    if (fp == NULL)
    {
        printf("파일을 찾지 못했습니다.\n");
        return 1;
    }
    char time_day[200][100];
    char time[200][100];
    int count = 0;
    while ((fgets(str, sizeof(str), fp)) != NULL)
    {
        i++;
        char *day_start = strstr(str, ": ");
        char *day_end = strstr(str, "-");
        char *time_end = strstr(str, "[**]");
        char *time_start = strstr(str, "-");

        if (day_end != NULL && day_start != NULL && day_end > day_start)
        {
            char temp_day[100];
            strncpy(temp_day, day_start, day_end - day_start);
            temp_day[day_end - day_start] = '\0';
        }


        if (time_end != NULL && time_start != NULL && time_end > time_start)
        {
            char temp_time[100];
            strncpy(temp_time, time_start, time_end - time_start);
            temp_time[time_end - time_start] = '\0';
        }

        time_day[i];
        time[i];

    }
    for (int i = 0; i < count; i++)
    {
        printf("time[%d] : %s\n", i+1, time[i]);
    }
    printf("\n총 %d개의 시간 로그를 저장했습니다.\n", count);
    fclose(fp);

    return 0;

}

//     while (fgets(line, sizeof(line), fp) != NULL) {
//         // 개행문자 제거
//         line[strcspn(line, "\n")] = '\0';

//         // 토큰 분리
//         char *token = strtok(line, " ");  // 첫 번째 공백 기준
//         if (token != NULL) p.id = atoi(token);

//         token = strtok(NULL, " ");
//         if (token != NULL) strcpy(p.name, token);

//         token = strtok(NULL, " ");
//         if (token != NULL) p.age = atoi(token);

//         printf("ID: %d, Name: %s, Age: %d\n", p.id, p.name, p.age);
//     }

//     fclose(fp);
//     return 0;
// }