#include <stdio.h>
int main()
{
    int a,b,c,d,e;
  
    printf("1deh: ");
    scanf("%d",&a);
    printf("2doh: ");
    scanf("%d",&b);
    printf("3dah: ");
    scanf("%d",&c);
    printf("4doh: ");
    scanf("%d",&d);
    printf("5dah: ");
    scanf("%d",&e);
  
    int min=a;
	int max;
  	int med=a;
  	
  	if (a < min) min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;
    printf("\nHamgiin baga ni %d", min);
    
    if (a > max) max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;
    printf("\nHamgiin ih ni %d", max);
    
    if (a>b && a>c && a<d && a<e ) med = a;
    if (b>a && b>c && b<d && b<e ) med = b;
    if (c>a && c>b && c<d && c<e ) med = c;
    if (d>a && d>b && d<c && d<e ) med = d;
    if (e>a && e>b && e<c && e<d ) med = e;
    printf("\nDundaj ni %d", med);

}
