#include <stdio.h>
#include <stdlib.h>

#define word 2
#define long 4

void getfilename(void);//获取文件名
void getinformation(FILE * fp);//获取dos头的两个基本信息


struct DOS{
    unsigned char e_magic[3];
    unsigned char e_lfanew[5];
};
struct PE{
    unsigned char signature[5];
    unsigned char machine[3];
    unsigned char numberofsection[3];
    unsigned char characteristic[3];
    
};
struct optional{
    unsigned char addressofentrypoint[5];
    unsigned char baseofcode[5];
    unsigned char baseofdata[5];
    unsigned char imagebase[5];
    unsigned char numberofrvaandsizes[5];
    unsigned char virtualaddress[5];
    unsigned char size[5];
    unsigned char virtualaddress10[5];
    unsigned char size10[5];
    unsigned char virtualaddress13[5];
    unsigned char size13[5];
};

struct sectional{
    unsigned char sectionalignment[5];
    unsigned char filealignment[5];
    unsigned char name[9];
    unsigned char virtualsize[5];
    unsigned char sizeofrawdata[5];
    unsigned char pointertorawdater[5];
    unsigned char characteristics[5];
};
