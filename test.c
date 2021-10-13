#include<stdio.h>
void main() {
	int sum = 0;
	for(int i = 1; i <= 40; i++) {
		sum += i;
	}
	printf("1~40의 합은 %d 입니다.", sum);
}
