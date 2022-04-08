#include <stdio.h>

int main(int argc, char *argv[])
{
    int year;
    scanf("%d", &year);
    year = !(year%400) || ( !(year%4) && (year%100) );
    if(year) printf("leap year");
    else printf("common year");

    printf("%d", year);

    return 0;
}
