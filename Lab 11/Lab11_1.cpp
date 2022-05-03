#include <stdio.h>
#include <math.h>

// 2 gurvaljnii medeelliin unshaad, Heron-ii tomyogoor talbaig olj ali tom gurvaljniig ol.

struct Triangle {
	int a,b,c;
};

double find_area(double a, double b, double c) {
	double p,s;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	
	return s;
}
int main(){
	double s1,s2;
	struct Triangle g1,g2;
	
	printf("Ehnii gurvaljingiin a,b,c-g oruulna uu: \n");
	scanf("%d%d%d",&g1.a,&g1.b,&g1.c);
	printf("Hoyordugaar gurvaljingiin a,b,c-g oruulna uu: \n");
	scanf("%d%d%d",&g2.a,&g2.b,&g2.c);
	
	s1=find_area(g1.a,g1.b,g1.c);
	s2=find_area(g2.a,g2.b,g2.c);
	
	printf("\n-------------------------\n");
	printf("%f %f", s1,s2);
	printf("\n-------------------------\n");
	
	if(s1>s2){
		printf("\nEhnii gurvaljnii talbai ih.");
	}
	else{
		printf("\nHoyrdugaar gurvaljnii talbai ih.");
	}
	return 0;
}
