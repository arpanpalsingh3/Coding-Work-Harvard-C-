#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./hello <name>\n");
        return 1;
    }
 
    string f = argv[1];
    printf("hello, %s\n", f);
}
