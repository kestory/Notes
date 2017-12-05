#include <stdio.h>
#define dprint(expr) printf(#expr "= %d\n",expr);
int Exp(int i, int n) {
	int ans = 1;
	for (int j = 1; j <= n; j++)
		ans *= i;
	return ans;
}
int main () {
	int n, total, x, y, z;
	scanf("%d", &n);
	total = 3;
	while (1) {
		for (x = 1; x <= total - 2; x++)
			for (y = 1; y <= total - x - 1; y++) {
				z = total - x - y;
				if ((Exp(x, n) + Exp(y, n)) == Exp(z, n)){
					printf("hello, world\n");
					//dprint(x)dprint(y)dprint(z)dprint(total)dprint(Exp(x, n))dprint(Exp(y, n))dprint(Exp(z, n))
					//很快就溢出然后变成0了哎
					}
			}
		total++;
	}
}
