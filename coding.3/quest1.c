#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(){
int x = 100;
printf("hello world (pid:%d)\n", (int) getpid());
fork();
printf("hello I am child (pid:%d)\n", (int) getpid());
return 0;
}

/*
Sierra Deitsch
Question 1: The child starts at fork, not main. So it does not have a value.
When both the parent and the child change the value of x, it creates two different versions of x
*/
