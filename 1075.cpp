#include <stdio.h>

int main() {
	int N;
	int F;
	
	scanf("%d %d", &N, &F);
	//199 3-> 나머지 1 198로 바꿔야함.
	//printf("%d", N % F);
	int tmp = (N / 100) * 100;
	int ans;
	for (int i = tmp; i < tmp + 100; i++) {
		if (i % F == 0) {
			ans = i;
			break;
		}
		else
			continue;
	}
	if (ans % 100 < 10) 
		printf("0%d", ans%100);
	else		
		printf("%d", ans%100);
}