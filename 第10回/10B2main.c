// 10B2main.c
#include <stdio.h>
#include <stdlib.h>

#include "10B2.h"

int main(void)
{
    char *lines[100];
    char **linep = lines;
    char **endp = lines + 100;

    while (linep < endp) {
        *linep = getline1();
        if (*linep) {
            if (!**linep)
                printf("Error in getline1: Pointer to totally empty line!\n"), exit(1);
            linep++;
        }
        else
            break;
    }
    
    while (linep > lines) {
        linep--;
        printf("%s", *linep);
        free(*linep);
    }

    return 0;
}
