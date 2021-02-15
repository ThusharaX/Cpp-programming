#include <stdio.h>

int main(void) {
	printf("Hello\n");
	char ch;
	scanf_s("%c", &ch); // Without an input command visual studio
	// runs the code and automatically returns to the editor
	return 0;
}