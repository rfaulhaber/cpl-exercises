#include <stdio.h>

main() {
    long nc = 0;
    long nl = 0;

    int c;
    while ((c = getchar()) != EOF) {
	if (c != '\n') ++nc;
	else ++nl;
    }

    printf("chars\tlines\n");
    printf("%ld\t%ld\n", nc, nl);
}
