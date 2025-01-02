#include <stdio.h>

int main(void) {
	int arr[10] = { 0 };
	if (arr == &arr[0]) printf("True");
	else printf("False");
}