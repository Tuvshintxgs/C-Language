#include <stdio.h>


void read(int A[], int n);
void print(int A[], int n);
void sort(int A[], int n);

// read
void read(int A[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("\nErembelegdsen: \n");
}

// print
void print(int A[], int n) {
	for(int i=0; i<n; i++)
		printf("%d ", A[i]);
    printf("\n");
}

// sort
void sort(int A[], int n)
{
    int i,j,k;
    for (i = 1; i < n; i++) {
        k=A[i];
        j=i-1;
        while(j>=0 && A[j] > k) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = k;
    }
}

int main() {
    int too[100], i,n;
	
	printf("Heden too oruulah ve: ");
    scanf("%d", &n);

    read(too, n);
    sort(too, n);
    print(too, n);
    printf("%d",too[100]);

    return 0;
}

