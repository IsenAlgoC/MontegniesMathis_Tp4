#include <stdio.h>
#include <stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20


int main() {
	int MyTab1[TAILLETAB1];
	int i = 0;
	int l = 0;
	int* MyPtr1 = &MyTab1[TAILLETAB1] - 1;

	for (i = 0; i < 20; i++) {
		MyTab1[i] = i + 1;
		printf("%d %c", MyTab1[i], SEPARATEUR);
	}
	printf("\n");

	for (l = 0; l < 20; l++) {
		printf("%d %c", *MyPtr1, SEPARATEUR);
		MyPtr1--;
	}
}