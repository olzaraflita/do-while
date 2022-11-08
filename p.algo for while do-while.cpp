#include <stdio.h>
#include <stdlib.h>

main(){

    printf("Nama: Olza Raflita\nNIM:22343009\n");
    printf("----------Program Deret Bilangan Ganjil----------\n");
    printf("=================================================\n");
    int jumlah_deret, i;
        printf("Deret bilangan ganjil yang diinginkan :");
        scanf("%d",&jumlah_deret);
    for (i=1;i<=jumlah_deret;i++)
    {
        printf("%d, ", (i * 2) - 1);
    }
    printf("\n");
    
main(){

	int jumlah_deret, i=1;
        printf("Deret bilangan ganjil yang diinginkan :");
        scanf("%d",&jumlah_deret);
    while(i<=jumlah_deret){
        printf("%d, ", (i * 2) - 1);
        i++;
    }
    printf("\n");
    return 0;

}

    

