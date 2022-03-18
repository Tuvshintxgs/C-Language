#include <stdio.h>

int main() {
	for(int i = 1; i <= 7; i++) {
		int tsag = 24;
		int ajil, hicheel, untah;
		printf("Unuudur %d-dahi udur\n", i);
		printf("Heden tsag untah ve = ");
		scanf("%d", &untah);
		tsag = tsag - untah;
		printf("Heden hicheeltei ve = ");
		scanf("%d", &hicheel);
		if(0 < hicheel) {
			int num;
			for(int j = 1; j <= hicheel; j++) {
				printf("%d-r hicheel heden tsag oroh ve = ", j);
				scanf("%d", &num);
				tsag = tsag - num;
			}
		}
		printf("Uur tuluvlusun heden ajiltai ve = ");
		scanf("%d", &ajil);
		if(0 < ajil) {
			int num;
			for(int j = 1; j <= ajil; j++) {
				printf("%d-r ajil heden tsag hiigdeh ve = ", j);
				scanf("%d", &num);
				tsag = tsag - num;
			}
		}
		printf("%d-dahi udriin %d tsag chuluutei bolj bn.\n\n", i, tsag);
	}
	
	return 0;
}
