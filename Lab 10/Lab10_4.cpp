#include<stdio.h>

void read(int a[], int n) {
	int i;
  	for(i = 0; i < n; i++)
    scanf("%d", & a[i]);
}

void print(int a[], int n) {
	int i;
	for (i = 0; i < n; i++)
    	printf("%d ", a[i]);
		printf("\n");
}

/*
	x buhel too ugugduhud module-iig ni butsaana.
		x<0 baival -x
		x>=0 baival x toog butsaana.
*/

int modul(int x) {
  	if(x < 0)
    x=x*(-1);
	return x;
}

/* a husnegt ugugduhud hadgalagdsan toonuudiin niilberiig butsaana.
	a - husnegt
	n - husnegted hadgalagdsan elementuudiin too
*/
int sum(int a[], int n) {
	int s = 0;
	for (int i=0; i<n; i++) {
		s=s+a[i];
  	}
	return s;
}

/* a husnegt ugugduhud hadgalagdsan toonuudiin arifmetik dundajiig butsaana.
	a - husnegt
	n - husnegted hadgalagdsan elementuudiin too
*/
int avg(int a[], int n) {
  	int s=0;
  	for (int i=0; i<n; i++) {
    	s=s+a[i];
  	}
	return s/n;
}

/* a husnegt ugugduhud hadgalagdsan urjveriig butsaana.
	a - husnegt
	n - husnegted hadgalsan elementuudiin too
*/
int product(int a[], int n) {
  	int s=1;
  	for (int i=0; i<n; i++) {
    	s=s*a[i];
	}
	return s;
}

int main() {
	int a[100], n, b[100];
	printf("n toonii utgiig oruul: ");
	scanf("%d", &n);
	read(a, n);
	printf("Tanii oruulsan daraalal: ");
	print(a, n);
	
	int mu, i;
	mu = avg(a, n);	
	printf("mu-iin utga: %d\n", mu);
	/* b husnegted moduliudiig hadgalaad, urjveriig bodno */
	for (i = 0; i < n; i++)
		b[i] = modul(a[i] - mu);
		
	int alpha;
	alpha = product(b, n);
	printf("alpha-iin utga: %d\n", alpha);
	
	return 0;
}
