 #include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,tabla[10];
           
            for (x=1;x<=10;x++)
            {
        tabla[x]=x;
    }
           
            for (x=1;x<=10;x++)
            {
        printf("%d\n",tabla[x]);
    }
           
       
    return 0;
}
