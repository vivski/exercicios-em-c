#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int t1, t2, t3, t4;
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    int total = t1 + t2 + t3 + t4 - 3;

    printf("%d\n", total);

    return 0;
}