/*---------------------------------------------------------
 | File:	mylib.c
 | Date:	Mon Aug 24 19:30:28 GMT 2015
 | Author:	ellery coleman
 | Abstract: 	Implements the mylib C library.
 +---------------------------------------------------------*/

#include "mylib.h"


void count_to_n(int n)
{   for(int i=1; i<=n; i++)
    {   printf(" * %d\n",i);
        usleep(500000);
    }
}
