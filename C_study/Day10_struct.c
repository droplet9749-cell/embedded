// typedef를 사용한 자료형 재정의
/*#include <stdio.h>

typedef struct student
{
    int num;
    double grade;
} Student;           // typedef struct 실행되면서 생략되어 중괄호 후에 바로 실행.
//typedef struct student Student;   // -> 구조체를 새 자료형의 이름으로 재정의
void print_data(Student *ps);

int main(void)
{
    Student s1 ={ 315, 4.2 };

    print_data(&s1);

    return 0;
}

void print_data(Student *ps)
{
    printf("학번 : %d\n", ps -> num);
    printf("학점 : %.1lf\n", ps -> grade);
}*/

// 다양한 구조체 예제 -> typedef 적용하기
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(void)
{
    struct profile yuni;
    strcpy(yuni.name, "서하윤");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char *)malloc(80);
    printf("자기소개 : ");
    gets(yuni.intro);

    printf("이름 : %s\n", yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s\n", yuni.intro);
    free(yuni.intro);

    return 0;
}*/

// 구조체 문제풀기

/*
    ! 문제
    학생 5명의 국어, 영어, 수학 점수를 입력해 총점, 평균, 학점을 구하고
    총점 순으로 정렬을 출력한다.
    학점은 평균이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C 그외 F로 평가*/

// 구조체 설정 - (입력, 출력 - 평균함수 적용, 학점 계산함수 적용) 반복문으로 5개의 리스트 만들기
// 만든 리스트로 출력 -> 정렬
#include <stdio.h>

double avg(Student *ps);

typedef struct student
{
    int id;
    char name[20];
    int kor, eng, mat;
    int sum;
    double avg;
    char grade;
}Student;

int main(void)
{
    int N;
    printf("인원을 설정해주세요");
    scanf("%d", &N);
    Student info[N];
    int i;
    for (i = 0; i < N; i++)
    {
        printf("학번 : ");
        scanf("%d", &info[i].id);
        printf("이름 : ");
        scanf("%s", info[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d", &info[i].kor, &info[i].eng, &info[i].mat);

        info[i].avg = avg(&info[i]);
        info[i].sum = info[i].kor + info[i].eng + info[i].mat;
        if (info[i].avg >= 90)
        {
            info[i].grade = 'A';
        }

        else if (info[i].avg >= 80)
        {
            info[i].grade = 'B';
        }

        else if (info[i].avg >= 70)
        {
            info[i].grade = 'C';
        }
        else
        {
            info[i].grade = 'F';
        }
        /*
        // 중간 계산단계 검토
        printf("학번 : %d\n", info[i].id);
        printf("이름 : %s\n", info[i].name);
        printf("국어 : %d, 영어 : %d, 수학 : %d\n",
            info[i].kor, info[i].eng, info[i].mat);
        printf("학점 : %c\n", info[i].grade);
        */

    }

    printf("# 정렬 전 데이터...\n");

    for (i = 0; i < N; i++)
    {
        printf("%5d\t%10s\t%5d\t%5d\t%5d\t%5d\t%.1lf\t%c\n",
        info[i].id, info[i].name, info[i].kor, info[i].eng, info[i].mat,
        info[i].sum, info[i].avg, info[i].grade);
    }

    for (i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (info[i].sum < info[j].sum)
            {
                Student temp = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }

    printf("# 정렬 후 데이터...\n");

    for (i = 0; i < N; i++)
    {
        printf("%5d\t%10s\t%5d\t%5d\t%5d\t%5d\t%.1lf\t%c\n",
        info[i].id, info[i].name, info[i].kor, info[i].eng, info[i].mat,
        info[i].sum, info[i].avg, info[i].grade);
    }

}

double avg(Student *ps)
{
    return (ps->kor + ps->eng + ps->mat) / 3.0;
}

int grade(int avg_res)
{

}

