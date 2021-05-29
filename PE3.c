#include "PE2.c"

int main()
{
   
    char a;
    FILE * fp;
    getfilename();

    fp=fopen(filename,"r");
    getinformation(fp);
    
    printf("IMAGE_DOS_header\n");
    printf("e_magic  %x%x",infor1.e_magic[0],infor1.e_magic[1]);
    printf("\ne_lfanew   %.2x %.2x %.2x %.2x",infor1.e_lfanew[0],infor1.e_lfanew[1],infor1.e_lfanew[2],infor1.e_lfanew[3]);

    printf("\n\n\nIMAGE_NT_header");
    printf("\nsignature    %.2x%.2x%.2x%.2x",infor2.signature[0],infor2.signature[1],infor2.signature[2],infor2.signature[3]);

    printf("\n\n\nIMAGE_FILE_header");
    printf("\nmachine  %.2x%.2x",infor2.machine[0],infor2.machine[1]);
    printf("\nnumberofsection   %d%d",infor2.numberofsection[0],infor2.numberofsection[1]);
    printf("\ncharacteristics   %.2x%.2x",infor2.characteristic[0],infor2.characteristic[1]);

    printf("\n\n\nIMAGE_OPTIONAL_header");
    printf("\naddressofentrypoint   %.2x%.2x%.2x%.2x",infor3.addressofentrypoint[0],infor3.addressofentrypoint[1],infor3.addressofentrypoint[2],infor3.addressofentrypoint[3]);
    printf("\nbaseofcode   %.2x%.2x%.2x%.2x",infor3.baseofcode[0],infor3.baseofcode[1],infor3.baseofcode[2],infor3.baseofcode[3]);
    printf("\nbaseofdata   %.2x%.2x%.2x%.2x",infor3.baseofdata[0],infor3.baseofdata[1],infor3.baseofdata[2],infor3.baseofdata[3]);
    printf("\nimagebase    %.2x%.2x%.2x%.2x",infor3.imagebase[0],infor3.imagebase[1],infor3.imagebase[2],infor3.imagebase[3]);
    printf("\nnumberofrvaandsizes   %.2x%.2x%.2x%.2x",infor3.numberofrvaandsizes[0],infor3.numberofrvaandsizes[1],infor3.numberofrvaandsizes[2],infor3.numberofrvaandsizes[3]);

    printf("\n\n\n IMAGE_DATA_DIRECTLY");
    printf("\ndata2 vituraladdress   %.2x%.2x%.2x%.2x",infor3.virtualaddress[0],infor3.virtualaddress[1],infor3.virtualaddress[2],infor3.virtualaddress[3]);
    printf("\nsize                   %.2x%.2x%.2x%.2x",infor3.size[0],infor3.size[1],infor3.size[2],infor3.size[3]);
    
    printf("\ndata2 vituraladdress   %.2x%.2x%.2x%.2x",infor3.virtualaddress10[0],infor3.virtualaddress10[1],infor3.virtualaddress10[2],infor3.virtualaddress10[3]);
    printf("\nsize                   %.2x%.2x%.2x%.2x",infor3.size10[0],infor3.size10[1],infor3.size10[2],infor3.size10[3]);
   
    printf("\ndata2 vituraladdress   %.2x%.2x%.2x%.2x",infor3.virtualaddress13[0],infor3.virtualaddress13[1],infor3.virtualaddress13[2],infor3.virtualaddress13[3]);
    printf("\nsize                   %.2x%.2x%.2x%.2x",infor3.size13[0],infor3.size13[1],infor3.size13[2],infor3.size13[3]);
    
    printf("\n\n\n IMAGE_SECTION_HEADER");

    printf("\nsectionalignment       %.2x%.2x%.2x%.2x",infor4.sectionalignment[0],infor4.sectionalignment[1],infor4.sectionalignment[2],infor4.sectionalignment[4]);
    printf("\nalignment              %.2x%.2x%.2x%.2x",infor4.filealignment[0],infor4.filealignment[1],infor4.filealignment[2],infor4.filealignment[3]);
    
    printf("\n\n\nsection0");
    printf("\nNAME                   %c%c%c%c%c%c%c%c",infor4.name[7],infor4.name[6],infor4.name[5],infor4.name[4],infor4.name[3],infor4.name[2],infor4.name[1],infor4.name[0]);
    printf("\nvituralsize            %.2x%.2x%.2x%.2x",infor4.virtualsize[0],infor4.virtualsize[1],infor4.virtualsize[2],infor4.virtualsize[3]);
    printf("\nsizeofrawdata          %.2x%.2x%.2x%.2x",infor4.sizeofrawdata[0],infor4.sizeofrawdata[1],infor4.sizeofrawdata[2],infor4.sizeofrawdata[3]);
    printf("\npointertorawdata       %.2x%.2x%.2x%.2x",infor4.pointertorawdater[0],infor4.pointertorawdater[1],infor4.pointertorawdater[2],infor4.pointertorawdater[3]);
    printf("\ncharacteristics        %.2x%.2x%.2x%.2x",infor4.characteristics[0],infor4.characteristics[1],infor4.characteristics[2],infor4.characteristics[3]);

    
    system("pause");
    return 0;
    
}