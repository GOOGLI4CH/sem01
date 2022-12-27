#include<iostream>
int main()

{
    const char* str = u8"Hello world\n";

    printf("%s", str);

    for (unsigned char* p = (unsigned char*)str; *p; ++p)
        printf(*p >> 6 == 2 ? " %.02X" : "\n%.02X", *p);

    return 0;
}