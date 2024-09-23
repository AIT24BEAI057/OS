#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
pid_t p=fork();
if (p<0)
  {
   printf ("fork fail\n");
  }
printf("hello all, my process id is : %d\n" ,getpid());
}
