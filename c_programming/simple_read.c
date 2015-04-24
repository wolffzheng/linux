#include <unistd.h>
#include <stdlib.h>

#3.4.2　read系统调用

#系统调用read的作用是：从与文件描述符fildes相关联的文件里读入nbytes个字节的数据，
#并把它们放到数据区buf中。它返回实际读入的字节数，这可能会小于请求的字节数。
#如果read调用返回0，就表示未读入任何数据，已到达了文件尾。
#同样，如果返回的是-1，就表示read调用出现了错误。

int main()
{
    char buffer[128];
    int nread;

# 0 is standard input---keyboard
    nread = read(0, buffer, 128);
    if (nread == -1)
        write(2, "A read error has occurred\n", 26);

    if ((write(1,buffer,nread)) != nread)
        write(2, "A write error has occurred\n",27);

    exit(0);
}
