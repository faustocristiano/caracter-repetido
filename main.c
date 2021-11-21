#include <stdio.h>



int contar(char str[] , char caracter)
{

    {
        int j=0;
        int cont=0;
        while (str[j]!=0)
        {
            if (str[j]==caracter)
                cont++;
            j++;
        }
        printf("Quantidade de letra '%c' que se repete é = %d\n",caracter,cont);

    }

    {
        int i=0;
        while (str[i]!=0)
            i++;
        printf("O tamanho da String é = %d\n",i);

    }
    return 0;
}

int main(void)
{
    char string [50];
    char letra;

    printf("Entre com a primeira palavra:\n");
    scanf("%s",string);
    printf("Letra que se repete na palavra:\n");
    scanf(" %c",&letra);
    contar(string,letra);

    printf("*******************************\n");

    printf("Entre com a segunda palavra:\n");
    scanf("%s",string);
    printf("Letra que se repete na palavra:\n");
    scanf(" %c",&letra);
        contar(string,letra);

    printf("*******************************\n");

    printf("Entre com a  terceira palavra:\n");
    scanf("%s",string);
    printf("Letra que se repete na palavra:\n");
    scanf(" %c",&letra);
    contar(string,letra);

    printf("*******************************\n");

}

