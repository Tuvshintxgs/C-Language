#include<stdio.h>

// n x m hemjeest husnegtiig daraah baidlaar duurge. jishee ni n=3, m=2 bol
// 1 1
// 2 2
// 3 3
// 4 4

int main()
{
int m,n,c=1;
  	printf("Heden murtei bailgah ve?: ");
  	scanf("%d", &n);
  	printf("Heden baganatai bailgah we?: ");
  	scanf("%d", &m);
int a[n][m];
  for(int i=0;i<=n;i++){
    for(int j=0; j<m; j++) {
      a[i][j]=c;
      printf("%d ", a[i][j]);
    }
    printf("\n");
    c++;
  }
  return 0;
}
