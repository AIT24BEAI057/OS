#include <stdio.h>
#include <unistd.h>

int main() {
    char *cn="ls";
char *argv[] = {"ls", "-l", NULL};
printf("befor execvp()\n");
int status=execvp(cn,argv);
printf("status:%d\n",status);
printf("Now this line will de ex");
}
