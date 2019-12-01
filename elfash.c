#include <stdio.h>

int strhash(const char* str) {
    const char* p;
    int         g;
    int         h = 0;

    for(p = str; *p != '\0'; p++) 
    {
        
        h = (h << 4) + (int)(*p);
        g = h & 0xF0000000L;
        printf("antes: %d\n", h);
        if(g != 0)
        {
        h = h ^ (g >> 24);
        }
        printf("g: %d\n", g);
        h = h & ~g;
        printf("depois: %d\n", h);
    }
    return h;
}
int main() {
    printf("%d\n", strhash("Entre com um valor:Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor:Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: Entre com um valor: "));
    return 0;
}
