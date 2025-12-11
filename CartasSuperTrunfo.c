#include <stdio.h>
//TEST

//Estrutura base da carta
struct Carta{
    int carta1, pontos_turisticos1;
    float PIB1, populaçao1, area1;
    char cidade1[50], estado1[3], codigo1[4];
};






//Dados de cada carta, eu optei por colocar os dados eu mesmo!
int main(){
   struct Carta carta_1 = {
    1,
    13,
    22.224,
    874.633,
    210.044,
    "João Pessoa",
    "A",
    "A01"

   };
      struct Carta carta_2 = {
    2,
    10,
    699.28,
    22.990,
    248.219,
    "São Paulo",
    "B",
    "B01"

   };
//interatividade com o usuario
   int escolha;

   printf("Escolha uma carta(1 e 2): ");
   scanf("%d", &escolha);


   switch (escolha){
     case 1:
         printf("Carta: %d\n",carta_1.carta1);
         printf("Estado: %s\n",carta_1.estado1);
         printf("Código: %s\n",carta_1.codigo1);
         printf("Nome da cidade %s\n",carta_1.cidade1);
         printf("População: %.3f de pessoas\n",carta_1.populaçao1);
         printf("Área da cidade: %.3f de Km²\n",carta_1.area1);
         printf("PIB: %.3f Bilhões de reais\n",carta_1.PIB1);
         printf("Pontos túristicos: %d\n",carta_1.pontos_turisticos1);
         break;
     case 2:
         printf("Carta: %d\n",carta_2.carta1);
         printf("Estado: %s\n",carta_2.estado1);
         printf("Código: %s\n",carta_2.codigo1);
         printf("Nome da cidade %s\n",carta_2.cidade1);
         printf("População: %.3f milhões de pessoas\n",carta_2.populaçao1);
         printf("Área da cidade: %.3f milhões de Km²\n",carta_2.area1);
         printf("PIB: %.3f Bilhões de reais\n",carta_2.PIB1);
         printf("Pontos túristicos: %d\n",carta_2.pontos_turisticos1);
         break;
     default:
         printf("Carta inválida!\n");
         break;
   }
 return 0;



}
