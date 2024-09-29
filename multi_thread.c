
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void* ReadFile(void* arg)
{
    printf("Reading Files....\n");
    sleep(2);
    printf("File readed.\n\n");
    return NULL;

}
void* ViewFile(void* arg)
{
    printf("Searching your files.......\n");
    sleep(1);
    printf("view  Your files\n");
    return NULL;
}

int main ()
{
    pthread_t t1,t2;

    pthread_create(&t1,NULL,ReadFile,NULL);
    pthread_create(&t2,NULL, ViewFile,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
 
    return 0;
}