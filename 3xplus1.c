#include <stdio.h>

int main() {
	int t;
	int i = 0;
	long long int x;
	long long int xo = 1;
	long long tt = 0;
	long long max = 0;
	long long j;
	scanf("%d", &t);
	long numbers[t];
	long long peak;
	x = xo;
	while (i<t){
		while (x !=1) {
				x = (x%2==0) ? (x/2) : ((x*3)+1);
				//printf("%d\n",x);
				tt = tt + 1;
			}
			numbers[i] = tt;
		//printf("\n%d\n",numbers[i]);
		tt = 0;
		i = i +1;
		//printf("n=%d\n\n", i);
		xo = xo + 1;
		x = xo;
	}
	for (int j = 1; j < t; j++) {
		if (numbers[j] > max) {
			max = numbers[j];
			peak = j+1;
			}
	}
	printf("done: %d\n", peak);
	x = peak;
	while (x !=1) {x = (x%2==0) ? (x/2) : ((x*3)+1); printf("x: %d\n",x);}
	return 0;
}