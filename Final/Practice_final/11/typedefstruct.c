#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

typedef struct date _date;

typedef struct
{
    char title[30];
    char company[30];
    char kinds[30];
    _date release;
}software;

int main()
{
    software mine = {"과제", "yoons", "mac", {2002, 03, 31}};

    printf("%s\n", mine.title);
    printf("%s\n", mine.company);
    printf("%s\n", mine.kinds);
    printf("%d %d %d\n", mine.release.year, mine.release.month, mine.release.day);
}
