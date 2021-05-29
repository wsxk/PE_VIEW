#include "PE1.c"

char filename[30];
struct DOS infor1;
struct PE infor2;
struct optional infor3;
struct sectional infor4;

void getfilename(void)
{
    printf("Please integer the filename:");
    scanf("%s",filename);
}

void getinformation(FILE * fp)
{
    char past[400];
    unsigned int i=0;
    //DOS
    fscanf(fp,"%c",&infor1.e_magic[1]);
    fscanf(fp,"%c",&infor1.e_magic[0]);
    fgets(past,59,fp);
    fscanf(fp,"%c",&infor1.e_lfanew[3]);
    fscanf(fp,"%c",&infor1.e_lfanew[2]);
    fscanf(fp,"%c",&infor1.e_lfanew[1]);
    fscanf(fp,"%c",&infor1.e_lfanew[0]);
    
    i=infor1.e_lfanew[0]*16*16*16+infor1.e_lfanew[1]*16*16+infor1.e_lfanew[2]*16+infor1.e_lfanew[3];
    for(int a=0;a<(i-64-1);a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }
    //PE
    fscanf(fp,"%c",&infor2.signature[3]);
    fscanf(fp,"%c",&infor2.signature[2]);
    fscanf(fp,"%c",&infor2.signature[1]);
    fscanf(fp,"%c",&infor2.signature[0]);

    fscanf(fp,"%c",&infor2.machine[1]);
    fscanf(fp,"%c",&infor2.machine[0]);

    fscanf(fp,"%c",&infor2.numberofsection[1]);
    fscanf(fp,"%c",&infor2.numberofsection[0]);

    for(int a=0;a<14;a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }

    fscanf(fp,"%c",&infor2.characteristic[1]);
    fscanf(fp,"%c",&infor2.characteristic[0]);

    for(int a=0;a<16;a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }
    fscanf(fp,"%c",&infor3.addressofentrypoint[3]);
    fscanf(fp,"%c",&infor3.addressofentrypoint[2]);
    fscanf(fp,"%c",&infor3.addressofentrypoint[1]);
    fscanf(fp,"%c",&infor3.addressofentrypoint[0]);

    fscanf(fp,"%c",&infor3.baseofcode[3]);
    fscanf(fp,"%c",&infor3.baseofcode[2]);
    fscanf(fp,"%c",&infor3.baseofcode[1]);
    fscanf(fp,"%c",&infor3.baseofcode[0]);

    fscanf(fp,"%c",&infor3.baseofdata[3]);
    fscanf(fp,"%c",&infor3.baseofdata[2]);
    fscanf(fp,"%c",&infor3.baseofdata[1]);
    fscanf(fp,"%c",&infor3.baseofdata[0]);

    fscanf(fp,"%c",&infor3.imagebase[3]);
    fscanf(fp,"%c",&infor3.imagebase[2]);
    fscanf(fp,"%c",&infor3.imagebase[1]);
    fscanf(fp,"%c",&infor3.imagebase[0]);
    

    fscanf(fp,"%c",&infor4.sectionalignment[3]);
    fscanf(fp,"%c",&infor4.sectionalignment[2]);
    fscanf(fp,"%c",&infor4.sectionalignment[1]);
    fscanf(fp,"%c",&infor4.sectionalignment[0]);

    fscanf(fp,"%c",&infor4.filealignment[3]);
    fscanf(fp,"%c",&infor4.filealignment[2]);
    fscanf(fp,"%c",&infor4.filealignment[1]);
    fscanf(fp,"%c",&infor4.filealignment[0]);
    for(int a=0;a<52;a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }
    fscanf(fp,"%c",&infor3.numberofrvaandsizes[3]);
    fscanf(fp,"%c",&infor3.numberofrvaandsizes[2]);
    fscanf(fp,"%c",&infor3.numberofrvaandsizes[1]);
    fscanf(fp,"%c",&infor3.numberofrvaandsizes[0]);

    for(int a=0;a<8;a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }
    fscanf(fp,"%c",&infor3.virtualaddress[3]);
    fscanf(fp,"%c",&infor3.virtualaddress[2]);
    fscanf(fp,"%c",&infor3.virtualaddress[1]);
    fscanf(fp,"%c",&infor3.virtualaddress[0]);

    fscanf(fp,"%c",&infor3.size[3]);
    fscanf(fp,"%c",&infor3.size[2]);
    fscanf(fp,"%c",&infor3.size[1]);
    fscanf(fp,"%c",&infor3.size[0]);

    for(int a=0;a<56;a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }

    fscanf(fp,"%c",&infor3.virtualaddress10[3]);
    fscanf(fp,"%c",&infor3.virtualaddress10[2]);
    fscanf(fp,"%c",&infor3.virtualaddress10[1]);
    fscanf(fp,"%c",&infor3.virtualaddress10[0]);

    fscanf(fp,"%c",&infor3.size10[3]);
    fscanf(fp,"%c",&infor3.size10[2]);
    fscanf(fp,"%c",&infor3.size10[1]);
    fscanf(fp,"%c",&infor3.size10[0]);
    

    for(int a=0;a<16;a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }
    fscanf(fp,"%c",&infor3.virtualaddress13[3]);
    fscanf(fp,"%c",&infor3.virtualaddress13[2]);
    fscanf(fp,"%c",&infor3.virtualaddress13[1]);
    fscanf(fp,"%c",&infor3.virtualaddress13[0]);

    fscanf(fp,"%c",&infor3.size13[3]);
    fscanf(fp,"%c",&infor3.size13[2]);
    fscanf(fp,"%c",&infor3.size13[1]);
    fscanf(fp,"%c",&infor3.size13[0]);
    
    for(int a=0;a<24;a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }

    fscanf(fp,"%c",&infor4.name[7]);
    fscanf(fp,"%c",&infor4.name[6]);
    fscanf(fp,"%c",&infor4.name[5]);
    fscanf(fp,"%c",&infor4.name[4]);
    fscanf(fp,"%c",&infor4.name[3]);
    fscanf(fp,"%c",&infor4.name[2]);
    fscanf(fp,"%c",&infor4.name[1]);
    fscanf(fp,"%c",&infor4.name[0]);

    fscanf(fp,"%c",&infor4.virtualsize[3]);
    fscanf(fp,"%c",&infor4.virtualsize[2]);
    fscanf(fp,"%c",&infor4.virtualsize[1]);
    fscanf(fp,"%c",&infor4.virtualsize[0]);

    fscanf(fp,"%c",&infor4.sizeofrawdata[3]);
    fscanf(fp,"%c",&infor4.sizeofrawdata[2]);
    fscanf(fp,"%c",&infor4.sizeofrawdata[1]);
    fscanf(fp,"%c",&infor4.sizeofrawdata[0]);

    fscanf(fp,"%c",&infor4.pointertorawdater[3]);
    fscanf(fp,"%c",&infor4.pointertorawdater[2]);
    fscanf(fp,"%c",&infor4.pointertorawdater[1]);
    fscanf(fp,"%c",&infor4.pointertorawdater[0]);

    for(int a=0;a<12;a++)
    {
        int d;
        fscanf(fp,"%c",&d);
    }

    fscanf(fp,"%c",&infor4.characteristics[3]);
    fscanf(fp,"%c",&infor4.characteristics[2]);
    fscanf(fp,"%c",&infor4.characteristics[1]);
    fscanf(fp,"%c",&infor4.characteristics[0]);

}