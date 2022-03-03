#include<stdio.h>

// Sagsun bumbugiin temtseend angiihan dandaa undur huuhduudiig oroltsuulahaar shiiden
// bolomjtoi huuhdiin toog olohoor bolov. Angid baigaa huuhduudiin too boloh
// 1<n<100 toog avch, daraagaar ni tedii undur boloh n shirheg toonuudiig
// unshaad dundjaas deesh undurtei heden huuhed baigaag ol.

int main()
{
   int a[100], n, i, sum=0;
   float dundaj;
		printf("Angiin huuhduudiin too hed ve?: ");
		scanf("%d",&n);
		printf("%d huuhdiin unduriig oruulna uu?: \n", n);

   for(i=0; i<n; i++)
   {
    	scanf("\n %d",&a[i]);
    	sum+=a[i];
   }

   dundaj=(float)sum/n;
   printf("\nDundaj undur=%.1f ", dundaj);

   printf("Dundajaas deesh unduruud bol:\n");
   for(i=0; i<n; i++)
   {
     if(a[i]>dundaj) printf("%d cm\n",a[i]);
   }

   return 0;
}
