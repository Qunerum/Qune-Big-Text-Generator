#include <stdio.h>
#include "fonts.h"

char* space = " ";

void prt(Font font, char* txt) {
    for (int i = 0; i < font.charHeight; i++) {
        int t = 0;
        while (txt[t] != '\0') { printf("%s%s", font.chars[txt[t]][i], space); t++; }
        printf("\n");
    }
}

int main() {
    Font font = doubleFrame;
    char* txt = "QGPU";
    prt(font, txt);
    return 0;
}
