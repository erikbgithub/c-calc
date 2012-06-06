#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void _print_help( )
{
    printf("calc - simple calculator\n");
    printf("Usage: calc <expr>\n");
    printf("<expr> - a simple math expression\n");
}

int main( int argc, char ** argv )
{
    if ( argc != 2 )
    {
        _print_help();
        exit(0);
    }

    char *s = argv[1];
    printf("expression: %s\n",s);
}
