#include <stdio.h>

int main(void) {
	int arr[10];
	for (int i = 0; i < 10; i++) arr[i] = i;

	int* ptr = arr;
	int count = 0;

	for (int i = 0; i < 10; i++) if (*(ptr + i) == *(arr + i)) count++;

	if (count == 10) printf("True");
	else printf("False");
}