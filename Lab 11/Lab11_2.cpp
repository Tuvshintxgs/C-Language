#include <stdio.h>
#include <math.h>

// 2 tsegiin hoorondiin zaig oloh function bich.

struct point{
	int x,y;
};

double distance(point a, point b){
	double d;
    d=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
    
    return d;
}
int main(){
	double x;
    struct point a,b;
    
    printf("Ehnii tseg \n");
    scanf("%d%d",&a.x, &a.y);
    
    printf("Etsesiin tseg \n");
    scanf("%d%d",&b.x, &b.y);
    
    x=distance(a,b);
    printf("\nHoyor tsegiin hoorondiin zai: %f", x);
    
    return 0;
}
