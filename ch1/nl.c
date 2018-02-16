#import <stdio.h>
#define IN  0
#define OUT 1

main() {
	int c;
	int state = OUT;
	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			putchar('\n');
		} else if (state == OUT) {
			putchar(c);
		}
	}
}
