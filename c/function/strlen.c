// strlen.c

#include <stdio.h>
#include <string.h>

int main()
{
    char *s="Golden Global View";

//    clrscr();  清屏

    printf("%s has %d chars",s,strlen(s));

    return 0;
}