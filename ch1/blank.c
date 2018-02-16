#import <stdio.h>

main() {
	int c;
	int b = 0;
	while((c = getchar()) != EOF) {
		if (c == ' ') {
			++b;
		} else {
			b = 0;
		}

		if (b <= 1) {
			putchar(c);
		}
	}
}
