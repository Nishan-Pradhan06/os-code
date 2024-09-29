#include<stdio.h>
#include<unistd.h>

void ReadFile()
{
    printf("Reading Files....\n");
    sleep(2);
    printf("File readed.\n\n");

}
void ViewFile()
{
    printf("Searching your files.......\n");
    sleep(1);
    printf("view  Your files\n");
}

int main ()
{
    ReadFile();
    ViewFile();
    return 0;
}