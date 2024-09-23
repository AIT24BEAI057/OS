#include <stdio.h>
#include <sys/types.h>

int main()
{
 pid_t p=fork();
 if(p<0){
  printf("fork failed");
 }
 else if(p==0){
  printf("I am child process\n");
 }
 else{
  printf("I am parent process\n");
 }
}
