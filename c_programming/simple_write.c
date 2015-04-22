#include <unistd.h>
#include <stdlib.h>

#3.4.1　write系统调用

#系统调用write的作用是把缓冲区buf的前nbytes个字节写入与文件描述符fildes关联的文件中。
#它返回实际写入的字节数。如果文件描述符有错或者底层的设备驱动程序对数据块长度比较敏感，
#该返回值可能会小于nbytes。如果这个函数返回0，就表示未写入任何数据；
#如果它返回的是-1，就表示在write调用中出现了错误，
#错误代码保存在全局变量errno里。

int main()
{
    if ((write(1, "Here is some data\n", 18)) != 18)
#1 is standard output---screen

        write(2, "A write error has occurred on file descriptor 1\n",46);

    exit(0);
}

