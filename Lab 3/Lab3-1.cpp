#include <stdio.h>
int main() {
int jil;

	printf("Jilee oruul: ");
	scanf("%d", &jil);

		if (jil % 400 == 0) {
		printf("%d Undur jil mun.", jil);
		}
		else if (jil % 100 == 0) {
		printf("%d Undur jil bish.", jil);
		}
		else if (jil % 4 == 0) {
		printf("%d Undur jil mun.", jil);
		}
		else {
		printf("%d Undur jil bish.", jil);
		}

	return 0;
}
