//파일 개방과 폐쇄 - 파일을 열고 닫는 프로그램
/*#include <stdio.h>

int main(void)
{
    FILE *fp;                   // 파일 포인터

    fp = fopen("a.txt", "r");   // a.txt 파일을 읽기 전용으로 개방
    // a.txt => 개방할 파일명 r => 개방 모드 // w 모드로 (쓰기) 하면 파일 생성 후 작성
    if (fp == NULL)             // fp가 널 포인터면 파일 개방 실패
    {
        printf("파일이 열리지 않았습니다.\n"); // 안내 메시지 출력
        return 1;                         // 프로그램 종료
    }
    printf("파일이 열렸습니다.\n");           // 파일 닫기

    // 파일의 내용 화면에 출력하기 fgetc

    int ch;
    while(1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        putchar(ch);
    }
    fclose(fp);

    return 0;
}*/

// 파일의 내용 화면에 출력하기 fgetc
/*#include <stdio.h>

int main(void)
{
    FILE *fp;
    char str[] = "banana";
    int i;

    fp = fopen("b.txt", "a");       // w 쓰기모드 이전 파일에 덮어쓰기, a 이어쓰
    if (fp == NULL)
    {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }
    
    i = 0;
    while (str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    fclose(fp);

    return 0;
}*/

// 로그파일 불러와서 - 코드작성
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char str[100];
    int i;

    fp = fopen("log.txt", "r");
    if (fp == NULL)
    {
        printf("파일을 찾지 못했습니다.\n");
        return 1;
    }
    int err_cnt;
    int err[];
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("\n");
        printf("%s", str);
        if (strstr(str, "ERROR"))
        {
            err_cnt++;
            err[i] = str[i];
            printf("\n오류 발생\n");
        }

    }
    printf("오류 발생이 %d(회) 발생했습니다.", err_cnt);

    fclose(fp);
}

