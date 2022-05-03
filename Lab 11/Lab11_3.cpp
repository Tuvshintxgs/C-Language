#include <stdio.h>
#include <math.h>

struct rational{
	int d, n; // d/n gesen engiin butarhai
	
};

typedef struct rational rational;
rational add(rational a, rational b); // a,b butarhaig nemeh
	int a,b;
	rational k;
	k.d=a.n*b.d;
	k.n=a.d*b.n;
	
	
	return k; 	
	
rational sub(rational a, rational b); // a,b butarhaig hasah
	rational k;
	
	k.d=a.n-b.d;
	k.n=a.d-b.n;

	return k;
	
rational mult(rational a, rational b); // a,b butarhaig urjih
rational div(rational a, rational b); // a,b butarhaig huvaah
rational simplify(rational a); // a,b butarhaig huraah

void print(rational a);

