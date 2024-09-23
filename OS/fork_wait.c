#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
pid_t p=fork();
 if (p<0){
  printf("fork failed\n");
  return 1;
 }
 if (p == 0){
  printf("child process: %d\n", getpid());
 }
 else{
  printf("parent process: %d\n", getppid());
  wait (NULL);
  printf("child has terminated: %d\n", p); 
 }
 printf("BYE\n");
 return 0;
}
