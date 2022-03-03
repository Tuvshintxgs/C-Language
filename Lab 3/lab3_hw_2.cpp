#include <stdio.h>

int main()
{
	int jil,sar,udur,jil1,sar1,udur1;
	
	printf("Unuudriin on sariig oruulna uu?: \n");
	printf("Jil: ");
	scanf("%d", &jil);
	printf("Sar: ");
	scanf("%d", &sar);
	printf("Udur: ");
	scanf("%d", &udur);
	
	printf("Shalgah on sar udruu oruulna uu?: \n");
	printf("Jil: ");
	scanf("%d", &jil1);
	printf("Sar: ");
	scanf("%d", &sar1);
	printf("Udur: ");
	scanf("%d", &udur1);
	
	if (jil1>jil) {
		printf("Ireedui");
		}
		if (jil1==jil){
			if (sar1>sar) {
				printf("Ireedui");
				}
				if (sar1==sar){
					if (udur1>udur){
						printf("Ireedui");
					}
					else{
						printf("Ungursun");
					}
				}
			else{
				printf("Ungursun");
			}
		}
	else{
		printf("Ungursun");
	}
	return 0;
}
