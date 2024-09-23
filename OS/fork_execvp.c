#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/types.h>

int main() {
    char *cn="ls";
char *argv[] = {"ls", "-l", NULL};
printf("before execvp()\n");
pid_t p=fork();
int status=0;
if (p==0)
{
printf("child");
int status=execvp(cn,argv);
if (status==-1)
{
printf("incorrect ter\n");
}
}else
{
printf("parent\n");
printf("stastus:%d\n",status);
printf("Now this line will de ex");
}
}
