#include <stdio.h>
//2 Array av. daraa ni tedniig husnegted hadgalj avaad husnegtees toog haina. Herev baival haana baigaag ni gargaj ir.
//Baihgui bol baihgui gedgiig hevle.

int main() {
	int m, n, haih, count=0, arr[100][100];
		printf("Mur baganaa oruulna uu?: \n");
		scanf("%d %d", &m, &n);
		printf("------------------------\n");
		printf("%d Too oruulna uu? \n", (m * n));
  	for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", & arr[i][j]);
    }
  }
	printf("------------------------\n");
	printf("Haih toogoo oruulna uu \n");
  	scanf("%d", & haih);

	printf("------------------------");
  	for (int i = 0; i < m; i++) {
    	for (int j = 0; j < n; j++) {
      	if (arr[i][j] == haih) {
        	printf("\nHaisan too (%dx%d)deer bairlaj baina \n", i+1, j+1);
        count++;
      }
    }
  }

  	if (count==0)
    printf("\n (-1 x 1)", &haih);

	return 0;
}
