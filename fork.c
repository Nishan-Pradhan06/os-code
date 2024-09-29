#include<stdio.h>
#include<unistd.h>
int main()
{
    int id;
    fork();
    printf("Process Id 1: %d\n",getpid());
    fork();
    printf("Process Id 2: %d\n", getpid());
    // id = fork();
    // if (id ==0)
    // {
    //     printf("This is Child Pocess: %d\n",getpid());
    // }
    // else{
    //     printf("This is Parenet Process: %d\n",getpid());
    // }
    return  0;
    
}