/* implements mylib functions */

#include "mylib.h"


void count_to_n(int n)
{   for(int i=1; i<=n; i++)
    {   printf(" * %d\n",i);
        usleep(500000);
    }
}
