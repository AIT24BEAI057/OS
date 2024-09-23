#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
pid_t p=fork();
if (p==0)
{
printf("i am a child processor with id:%d\n",getpid());
printf("my parent id is:%d\n",getpid());
}
else if(p>0)
{
printf("i am a parent processor with id:%d\n",getpid());
printf("my child id is:%d\n",getpid());
}
else{
printf("fork fail\n");
}
return 0;
}
