//
//  Created by liyuanqiang on 2022/9/26.
//
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    int pid = fork();
    printf("Hello, World!\n");
    
    if(pid==0)
        printf("fork() returns 0. That means I'm the CHILD PROCESS\n");
    else
        printf("fork() returns %d > 0. That means I'm the PARENT PROCESS, the PID of the child process which I created is %d\n",pid,pid);
    return 0;
}