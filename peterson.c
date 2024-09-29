#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>

int turn;
bool flag[2] = {false, false};
void *p0(void *args)
{
    while (true)
    {
        flag[0] = true;
        turn = 1;
        while (flag[1] && turn == 1)
            ;
        sleep(1);
        printf("P0 enter in critical section"); // cs

        flag[0] = false;
        sleep(1);
    }
}

void *p1(void *args)
{
    while (true)
    {
        flag[1] = true;
        turn = 0;
        while (flag[0] && turn == 0)
            ;
        sleep(1);
        printf("P1 enter in the critical section");
        flag[1] = false;
        sleep(1);
    }
}

int main()

{
    pthread_t t0, t1;
    pthread_create(&t0, NULL, p0, NULL);
    pthread_create(&t1, NULL, p1, NULL);
    pthread_join(t1, NULL);
    pthread_join(t0, NULL);
    return 0;
}