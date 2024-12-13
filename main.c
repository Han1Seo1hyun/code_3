#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int main() {
    int sum_j = 0;
    int sum_h = 0;
    int i = 1;

    while (i <= 100) { 
        if (i % 2 == 0) { 
            sum_j += i;
        } else {
            sum_h += i;
        }
        i++; 
    }

    printf("1~100±îÁöÀÇ Â¦¼ö/È¦¼öÇÕÀº %d %d\n", sum_j, sum_h);
	
	return 0;
}
