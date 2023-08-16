#include <stdio.h>
int towerOfHanoi(int n,char from,char to,char rem)
{
    if(n == 1)
    {
        printf("Move disk no.%d from %c to %c\n\n",n,from,to);
        return 0;
    }
    towerOfHanoi(n-1,from,rem,to);
    printf("Move disk no.%d from %c to %c\n\n",n,from,to);
    towerOfHanoi(n-1,rem,to,from);
}
int main()
{
    int n = 4;
    //n means number of disks
    towerOfHanoi(4,'A','C','B');
}
