#include    <stdio.h>

#define     IN      1
#define     OUT     0

int
main(void)
{
    int     na[26], nA[26];
    int     nl, nw, nb, no, nc;
    int     state;      /* 1 inside a word, 0 outside */
    int     c, i;

    state = OUT;
    nl = nw = nb = no = nc = 0;
    for(i = 0; i < 26; i++) na[i] = 0;
    for(i = 0; i < 26; i++) nA[i] = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n') nl++;
        nc++;
        if((c == ' ') || (c == '\t') || (c == '\n')) {
            state = OUT; nb++;
        }
        else if((c >= 'a') && (c <= 'z')) na[c - 'a']++;
        else if((c >= 'A') && (c <= 'Z')) nA[c = 'A']++;
        else no++;
        if(state == OUT) {
            state = IN;
            nw++;
        }
    }

    for(i = 0; i < 26; i++) {
        printf("%c =", 'a'+i);
        printf(" %d", na[i]);
        if(i != 25) printf(", ");
    } 
    printf("\n");
    for(i = 0; i < 26; i++) {
        printf("%c =", 'A'+i);
        printf(" %d", nA[i]);
        if(i != 25) printf(", ");
    } 
    printf("\n%d lines, %d words, %d blanks, %d charcters\n", nl, nw, nb, nc);
}
