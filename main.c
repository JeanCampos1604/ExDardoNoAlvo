#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    printf("Descubra quantos pontos voc� ganhou no lan�amento de seu dardo!\n");

    int x,y;
    printf("Digite a posi��o da coordenada x: ");
    scanf("%d",&x);
    printf("Digite a posi��o da coordenada y: ");
    scanf("%d",&y);

    if ((x > 10 || x < -10) || (y > 10 || y < -10)) {
       printf("Voc� n�o acertou o alvo! Tente novamente!");
   }  else if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1)) {
       printf("Voc� acertou o centro do alvo! ganhou 10 pontos!");
   }  else if ((x >= -5 && x <= 5) && (y >= -5 && y <= 5)) {
       printf("Voc� acertou o alvo! ganhou 5 pontos!");
   }  else if ((x >= -10 && x <= 10) && (y >= -10 && y <= 10)) {
       printf("Voc� acertou o alvo! ganhou 1 ponto!");
   }


    return (0);
}
