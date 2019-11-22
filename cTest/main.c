#include <stdio.h>

#define MAX_VAL 13
#define DASH_PER_NUMBER 4

#define TRUE 1
#define FALSE 0

void printLine(int input, int isHeader) {
    int i;
    const char* format = isHeader ? "   |" : "%3d|";
    
    printf(format, input);

    for(i = 1; i < MAX_VAL; ++i)
        printf("%3d|", input * i);

    printf("\n");
}

void printHeader() {
    int i;

    printLine(1, TRUE);
    for (i = 0; i < MAX_VAL * DASH_PER_NUMBER; ++i)
        printf("-");

    printf("\n");
}

int main(void) {
    int i;
    printHeader();
    for (i = 1; i < MAX_VAL; ++i)
        printLine(i, FALSE);
    
    return 0;
}
