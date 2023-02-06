#include <stdio.h>
void main () {

int startnum= 151;
int i;
    for( i = 1; i <= 10; i++) {
        printf("%d\t%d\n", i,startnum+2);
        startnum= startnum + 2;
    }
    return ;
}
