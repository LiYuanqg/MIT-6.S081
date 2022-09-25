//
//  Created by liyuanqiang on 2022/9/26.
//
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    fork();
    printf("Hello, World!\n");
    return 0;
}