#include<stdio.h>
#define FILE_READ "input.txt"

int main()
{
    FILE * filp;
    int count = 1;
    int nl, nt, ns,co;
    nl = 0;
    nt = 0;
    ns = 0;
    co = 0;
    char c,d;
    filp = fopen(FILE_READ, "r");
    if(filp == NULL)
        printf("file not found\n");
    while((c = fgetc(filp)) != EOF) {
        if(c == ' ')
            ++ns;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
        if(c == '/')
        {
        	if(d=fgetc(filp)=='/')
        	{
				++co;
			}
		}
    }
    printf("\nBlanks: %d\nTabs: %d\nNewlines: %d\nComments: %d\n", ns, nt, nl,co);
    return 0;
}
