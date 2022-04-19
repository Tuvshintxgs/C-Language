#include <stdio.h>

// Function ashiglan ugsun string-d heden useg baigaag ol.

int count(char s[]) {
	int counter=0;
	int i=0;
	
while (s[i]!= '\0'){
	if (s[i] == 'a' ||
		s[i] == 'e' ||
		s[i] == 'i' || 
		s[i] == 'o' ||
		s[i] == 'u' ||
		s[i] == 'A' ||
		s[i] == 'E' ||
		s[i] == 'I' ||
		s[i] == 'O' ||
		s[i] == 'U')
    counter++;
    i++;
  	}
  	return counter;
}
int main() {
	char s[100];
	scanf("%[^\n]s", s);
	printf("%d\n", count(s));
	return 0;
}
