/* P2.c */

/* Mateus Araujo Beletti */

/* 11811ETE014 */

#include <stdio.h>



int main()

{

    int opc, contador = 0,soma = 0, estado = 0,base = 2, exp = 0, potencia = 1, tamanho = 0, contador2=0, hexadecimal, decbi, octal, decimal;

    char num[256];

    printf("1 - Binario para Decimal\n2 - Binario para Hexadecimal\n3 - Hexadecimal para Decimal\n4 - Hexadecimal para Binario\n5 - Decimal para Binario\n6 - Decimal para Hexadecimal\n7 - Octal para Decimal\n8 - Decimal para Octal\n_________________________________________________");

    printf("\n\nSelecione a opcao desejada: ");

    scanf("%d", &opc);

    switch(opc)

    {

        case 1:

            printf("Binario para Decimal\n");

            scanf("%s", num);

            for(contador = 0; num[contador] != '\0'; contador++,tamanho++){

            }

            for(contador = tamanho - 1;contador > 0; contador--,contador2++)

            {

                potencia = 1;

                for(exp = 0; exp < contador2; exp++)

                    potencia = potencia * base;

                if(num[contador] == '0')

                    estado = 0;

                else

                    estado = 1;

                soma = soma + estado * potencia;

            }

            printf("%d", soma);

            break;

        case 2:

            printf("Binario para Hexadecimal\n");

            scanf("%s", num);

            for(contador = 0; num[contador] != '\0'; contador++,tamanho++){

            }

            for(contador = tamanho - 1;contador > 0; contador--,contador2++)

            {

                potencia = 1;

                for(exp = 0; exp < contador2; exp++)

                    potencia = potencia * base;

                if(num[contador] == '0')

                    estado = 0;

                else

                    estado = 1;

                soma = soma + estado * potencia;

            }

            printf("%X", soma);

            break;

        case 3:

            printf("Hexadecimal para Decimal\n");

            scanf("%X", &hexadecimal);

            printf("%d", hexadecimal);

            break;

        case 4:

            printf("Hexadecimal para Binario\n");

            scanf("%X", &hexadecimal);

            itoa(hexadecimal,num,2);

            printf("%s", num);

            break;

        case 5:

            printf("Decimal para Binario\n");

            scanf("%d", &decimal);

            itoa(decimal,num,2);

            printf("%s", num);

            break;

        case 6:

            printf("Decimal para Hexadecimal\n");

            scanf("%d", &decimal);

            itoa(decimal,num,16);

            printf("%s", num);

            break;

        case 7:

            printf("Octal para Decimal\n");

            scanf("%o", &octal);

            printf("%d", octal);

            break;

        case 8:

            printf("8 - Decimal para Octal\n");

            scanf("%d", &decimal);

            printf("%o", decimal);

    }

    return 0;

}
