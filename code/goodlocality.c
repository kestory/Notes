#include <stdio.h>
#define NUM 1024
#define COUNT 10
int A[NUM][NUM];
int main () {
	int i, j, k;
	for (i = 0; i < NUM; i++)			//b
		for (j = 0; j < NUM; j++)		//c
			for (k = 0; k < COUNT; k++)	//a
				A[i][j] = i + j;
	printf("%d count computing over!\n", i * j * k);
}
/*
/usr/bin/time [-pl] ./goodlocality
time ./goodlocality

abc
0.04 real         0.03 user         0.00 sys
0.04s user 0.00s system 86% cpu 0.053 total
acb#WORST
0.26 real         0.25 user         0.00 sys
0.25s user 0.00s system 96% cpu 0.268 total
bac
0.04 real         0.03 user         0.00 sys
0.04s user 0.00s system 84% cpu 0.048 total
bca#BEST
0.02 real         0.02 user         0.00 sys
0.02s user 0.00s system 78% cpu 0.034 total
cab#WORST
0.26 real         0.25 user         0.00 sys
0.28s user 0.01s system 98% cpu 0.292 total
cba
0.04 real         0.03 user         0.00 sys
0.04s user 0.00s system 92% cpu 0.046 total
Result changes every time, compare these relatively!
*/
