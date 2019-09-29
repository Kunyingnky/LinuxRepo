#include "ourhdr.h"
#include <fcntl.h>
 
int main(void)
{
 
        int fd;
        char buf1[20]; /*定义一个字符串用来读取文件中的字符*/
        char buf2[10]="onetwothre";/*用来写入的字符串*/
        if ((fd = open("/home/rlk/kong/try",2|O_APPEND)) < 0)/*使用追加方式打开文件*/
                printf("open error! \n");
        if (lseek(fd,5,SEEK_SET) < 0) /*将文件的偏移量设置为5*/
                printf("lseek error! \n");
        if (read(fd,buf1,5) < 0)     /*从偏移量为5处读出五个字符*/
                printf("read error! \n");
        else
                printf("read:%s\n",buf1);/*将读出的字读输出*/
        if (write(fd,buf2,10) < 0)    /*将字符串buf2写入文件*/
                printf("write error! \n");
}

