# 1. Operating System Interfaces

## 1.1 Process and Memory
一个xv6进程由**用户空间内存（指令、数据和堆栈）**和**内核私有的每个进程状态**组成。内核通过进程标识符（PID）和每个进程关联起来。