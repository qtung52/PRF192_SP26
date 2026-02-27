#include <stdio.h>

void inMaASCII() {
	for(char c = 'A'; c <= 'Z'; c++) {
        printf("%c\t| %d\n", c, (int)c);
    }
}

int main() {
	inMaASCII();
	return 0;
}
