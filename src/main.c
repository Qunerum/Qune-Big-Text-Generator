#include <stdio.h>
#include "fonts.h"

int len(char* txt) { int i = 0; while(txt[i] != '\0') i+= txt[i]==' ' ? 3 : 1; return i/3; }

int main() {
    Font font = doubleFrame;
    char c = 'A';
    for (int i = 0; i < font.charHeight; i++) {
        printf("%s", font.chars[c][i]);
        int l = len(font.chars[c][i]);
        for (int j = 0; j < font.charWidth-l; j++) printf(" ");
        printf("| %i\n", l);
    }
    return 0;
}
