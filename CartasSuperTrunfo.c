#include <stdio.h>
#include <string.h>
//TEST 


struct Carta{
    int carta1, pontos_turisticos1;
    float PIB1, populacao1, area1;
    char cidade1[50], estado1[3], codigo1[4];
};







int main(){
   
   //Interatividade com o usuario, o usuario determina os dados de cada cidade!

    struct Carta carta_1;
     carta_1.carta1= 1;
     printf("Digite de uma cidade: \n");
     scanf(" %[^\n]", carta_1.cidade1);
    
     printf("Quantos pontos turisticos tem nesta cidade: \n");
     scanf("%d", &carta_1.pontos_turisticos1);
     
     printf("Digite o PIB desta cidade: \n");
     scanf("%f", &carta_1.PIB1);
     
     printf("Digite a população da cidade: \n");
     scanf("%f", &carta_1.populacao1);
     
     printf("Digite a área da cidade: \n");
     scanf("%f", &carta_1.area1);

     strcpy(carta_1.estado1, "A");
     strcpy(carta_1.codigo1, "A01");
     
     printf("\n=========Carta 2==========\n");
 
   
   struct Carta carta_2;

     carta_2.carta1 = 2;
     printf("Digite o nome da cidade: \n");
     scanf(" %[^\n]", carta_2.cidade1);
  
     printf("Quantos pontos turisticos tem nesta cidade: \n");
     scanf("%d", &carta_2.pontos_turisticos1);
     
     printf("Digite o PIB desta cidade: \n");
     scanf("%f", &carta_2.PIB1);
     
     printf("Digite a população da cidade: \n");
     scanf("%f", &carta_2.populacao1);
     
     printf("Digite a área da cidade: \n");
     scanf("%f", &carta_2.area1);

     strcpy(carta_2.estado1, "B");
     strcpy(carta_2.codigo1, "B01");


//Apos o envio dos dados o usuario pode escolher entre uma das duas cartas presentes para ver a ordem dos dados!
   int escolha;

     printf("Escolha uma carta(1 e 2): ");
     scanf("%d", &escolha);
     printf("\n======================\n");


     switch (escolha){
         case 1:
              printf("Carta: %d\n",carta_1.carta1);
              printf("Estado: %s\n",carta_1.estado1);
              printf("Código: %s\n",carta_1.codigo1);
              printf("Nome da cidade %s\n",carta_1.cidade1);
              printf("População: %.3f de pessoas\n",carta_1.populacao1);
              printf("Área da cidade: %.3f de Km²\n",carta_1.area1);
              printf("PIB: %.3f Bilhões de reais\n",carta_1.PIB1);
              printf("Pontos túristicos: %d\n",carta_1.pontos_turisticos1);
              break;
         case 2:
             printf("Carta: %d\n",carta_2.carta1);
             printf("Estado: %s\n",carta_2.estado1);
             printf("Código: %s\n",carta_2.codigo1);
             printf("Nome da cidade %s\n",carta_2.cidade1);
             printf("População: %.3f milhões de pessoas\n",carta_2.populacao1);
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
