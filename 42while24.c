#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    while (k<5)
    {
        sum=sum+k; //use something different in "while" version
        k=k+1;
    }

    printf ("Sum=%d\n",sum);


    for (k=9;k>0;k--) //in a for loop it doesn't hit k++ the first time
    {

        printf ("%6d\n", k);
    }
    {
        printf ("Blastoff!");
    }

}

