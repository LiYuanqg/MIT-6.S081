/**********
  File Descriptor: File descriptor is interger that uniquely idnetifies an open file of the process.

  File Descriptor table: File descriptor table is the collection of interger array indices that are file descriptors in which elemetns are pointers to file table entries. One unique file descriptors table is provided in OS for each process.

  File Table Entry: File table entries is a structure In-memory surrogate for an open file, which is created when process request to opens file and these entries maintains file position.

 ************/

/***
  int create(char *filename, mode_t mode):used to create a new empty file.
    - return first unused fd(generally when first create use in process because 0,1,2 fd are recerved)
    - return -1 when error

  How is work in OS
  1. Create new empty file on disk
  2. Create file table entry
  3. Set first unused fd to point to file table entry
  4. Return fd used, -1 upon failure

*/

/***
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int open(const char* Path, int flags [,int mdoe]);//Used to open file for reading, writing or both.
    - flags: How you like to use.
        - O_RDONLY(read only), O_WRONLY(erite only), O_RDWR(read and write), O_CREAT(create file if it doesn't exist), O_EXCL(prevent creation if it already exisis)

    How it works in OS
    1. FInd the existing file on disk
    2. Create file table entry
    3. Set first unused fd to point ot file table entry
    4. Return fd used, -1 upon failure
*/

#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
extern int errno;
int main()
{
    //if file doesn't have in directory then file foo.txt is created.
    int fd=open("foo.txt",O_RDONLY|O_CREAT);

    printf("fd = %d\n",fd);

    if(fd==-1)
    {
        //print which type of error have in a code
        printf("Error Number %d\n",errno);

        //print program detail "Success or failure"
        perror("Program");
    }
    return 0;
}
