#include <stdio.h>

int main(void) {
	int input;
	scanf("%d", &input);
	for (int i = 0; i < 9; i++) printf("%d * %d = %d\n", input, i + 1, input * (i + 1));
}