#include <stdio.h>

#define OUT 0
#define IN  1

main() {
	int lens[20];

	for (int i = 0; i < 20; i++) {
		lens[i] = 0;
	}

	int wl = 0;

	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (wl < 21) {
				++lens[wl];
			}

			wl = 0;
		} else {
			++wl;
		}
	}

	for (int i = 0; i < 20; i++) {
		if (lens[i] > 0) {
            if (i < 10) printf("%i  >", i);
            else  printf("%i >", i);
			
			for (int j = 0; j < lens[i]; j++) {
				printf("%s", "|");
			}

			printf("%s", "\n");
		}

	}
}
