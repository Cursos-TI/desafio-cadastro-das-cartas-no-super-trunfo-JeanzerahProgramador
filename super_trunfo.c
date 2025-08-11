#include <stdio.h>

int main (){



        //carta A
    char estado_A;
    char codigo_da_carta_A[20];
    char nome_da_cidade_A[20];       //só vai funcionar se responder "são_paulo", ou "SP"
    int populacao_A;
    float area_A;
    float PIB_A;
    int turismo_A;
    float densidade_populacional_A;   // densidade populacional (FLOAT) = populaçao/ area da cidade
    float PIB_percapta_A;             // pib percapta (FLOAT) = pib/ população

        //carta B
    char estado_B;
    char codigo_da_carta_B[20];
    char nome_da_cidade_B[20];       //só vai funcionar se responder "rio_de_janeiro", ou "RJ"
    int populacao_B;
    float area_B;
    float PIB_B;
    int turismo_B;
    float densidade_populacional_B;
    float PIB_percapta_B;


        //funções carta A
    printf("Digite o estado: \n");                            //char
    scanf("%s", &estado_A);

    printf("Digite o codigo da carta: \n");                   //char
    scanf("%s", codigo_da_carta_A);

    printf("Digite o nome da cidade: \n");                    //char
    scanf("%s", nome_da_cidade_A);

    printf("Digite o tamanho da populacao: \n");               //int
    scanf("%d", &populacao_A);

    printf("Digite sua area: \n");                             //float
    scanf("%f", &area_A);

    printf("Digite o PIB: \n");                                //float
    scanf("%f", &PIB_A);

    printf("Digite a quantidade de pontos turisticos: \n");    //int
    scanf("%d", &turismo_A);


    printf("\n");
    printf("Vamos para a proxima carta \n");

    

        //funções carta B
    printf("Digite o estado: \n");                            //char
    scanf("%s", &estado_B);

    printf("Digite o codigo da carta: \n");                   //char
    scanf("%s", codigo_da_carta_B);

    printf("Digite o nome da cidade: \n");                    //char
    scanf("%s", nome_da_cidade_B);

    printf("Digite o tamanho da populacao: \n");               //int
    scanf("%d", &populacao_B);

    printf("Digite sua area: \n");                             //float
    scanf("%f", &area_B);

    printf("Digite o PIB: \n");                                //float
    scanf("%f", &PIB_B);

    printf("Digite a quantidade de pontos turisticos: \n");    //int
    scanf("%d", &turismo_B);



    //funções automáticas de densidade e pib
    densidade_populacional_A = populacao_A / area_A;
    PIB_percapta_A = PIB_A / (float) populacao_A;

    densidade_populacional_B = populacao_B / area_B;
    PIB_percapta_B = PIB_B / (float) populacao_B;





    //respostas das cartas
printf("Atributos Carta A \n");  
printf("Estado: %c\n", estado_A);
printf("Codigo: %s\n", codigo_da_carta_A);
printf("Nome da cidade: %s\n", nome_da_cidade_A);
printf("Populacao: %d\n", populacao_A);
printf("Area: %f\n", area_A);
printf("PIB: %f\n", PIB_A);
printf("Pontos turisticos: %d\n", turismo_A);
printf("\n");
    printf("A densidade populacional eh: %.2f \n", densidade_populacional_A); // 2 casas decimais
    printf("A PIB Percapta eh: %.2f \n", PIB_percapta_A);                     // 2 casas decimais


printf("\n");

printf("Atributos Carta B \n");  
printf("Estado: %c\n", estado_B);
printf("Codigo: %s\n", codigo_da_carta_B);
printf("Nome da cidade: %s\n", nome_da_cidade_B);
printf("Populacao: %d\n", populacao_B);
printf("Area: %f\n", area_B);
printf("PIB: %f\n", PIB_B);
printf("Pontos turisticos: %d\n", turismo_B);
printf("\n");
    printf("A densidade populacional eh: %.2f \n", densidade_populacional_B); // 2 casas decimais
    printf("A PIB Percapta eh: %.2f \n", PIB_percapta_B);                     // 2 casas decimais

printf("\n");

return 0;




}