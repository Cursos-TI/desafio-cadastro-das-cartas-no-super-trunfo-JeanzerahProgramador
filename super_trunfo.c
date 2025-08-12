#include <stdio.h>

int main (){


        //carta A
    char estado_A;
    char codigo_da_carta_A[5];
    char nome_da_cidade_A[20];       //só vai funcionar se responder "são_paulo", ou "SP"
    unsigned long int populacao_A;
    float area_A;
    float PIB_A;
    int turismo_A;
    float densidade_populacional_A;   // densidade populacional (FLOAT) = populaçao/ area da cidade
    float PIB_percapta_A;             // pib percapta (FLOAT) = pib/ população
    float super_poder_A;

        //carta B
    char estado_B;
    char codigo_da_carta_B[5];
    char nome_da_cidade_B[20];       //só vai funcionar se responder "rio_de_janeiro", ou "RJ"
    unsigned long int populacao_B;
    float area_B;
    float PIB_B;
    int turismo_B;
    float densidade_populacional_B;
    float PIB_percapta_B;
    float super_poder_B;


        //funções carta A
    printf("Digite o estado: \n");                            //char
    scanf("%c", &estado_A);

    printf("Digite o codigo da carta: \n");                   //char
    scanf("%s", codigo_da_carta_A);

    printf("Digite o nome da cidade: \n");                    //char
    scanf("%s", nome_da_cidade_A);

    printf("Digite o tamanho da populacao: \n");               //unsigned long int
    scanf("%lu", &populacao_A);

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

    printf("Digite o tamanho da populacao: \n");               //unsigned long int
    scanf("%lu", &populacao_B);

    printf("Digite sua area: \n");                             //float
    scanf("%f", &area_B);

    printf("Digite o PIB: \n");                                //float
    scanf("%f", &PIB_B);

    printf("Digite a quantidade de pontos turisticos: \n");    //int
    scanf("%d", &turismo_B);



    //funções automáticas de densidade e pib
    //carta a
    densidade_populacional_A = (float)populacao_A / area_A;
    PIB_percapta_A = (PIB_A * 1000000000.0f) / (float)populacao_A;

    super_poder_A = (float)populacao_A + area_A + PIB_A + (float)turismo_A + PIB_percapta_A + 
    (1.0f / densidade_populacional_A);

    //carta b
    densidade_populacional_B = (float) populacao_B / area_B;
    PIB_percapta_B = (PIB_B * 1000000000.0f) / (float)populacao_B;

    super_poder_B = (float)populacao_B + area_B + PIB_B + (float)turismo_B + PIB_percapta_B + 
    (1.0f / densidade_populacional_B);




    //impressão das respostas das cartas
printf("\n");
printf("\n");
printf("*** Atributos Carta A *** \n");  
printf("Estado: %c\n", estado_A);
printf("Codigo: %s\n", codigo_da_carta_A);
printf("Nome da cidade: %s\n", nome_da_cidade_A);
printf("Populacao: %lu\n", populacao_A);
printf("Area: %.2f\n", area_A);
printf("PIB: %.2f\n", PIB_A);
printf("Pontos turisticos: %d\n", turismo_A);
printf("\n");
    printf("A densidade populacional eh: %.2f \n", densidade_populacional_A); // 2 casas decimais
    printf("A PIB Percapta eh: %.2f \n", PIB_percapta_A);                     // 2 casas decimais
    printf("Super Poder: %.2f\n", super_poder_A);

printf("\n");

printf("*** Atributos Carta B *** \n");  
printf("Estado: %c\n", estado_B);
printf("Codigo: %s\n", codigo_da_carta_B);
printf("Nome da cidade: %s\n", nome_da_cidade_B);
printf("Populacao: %lu\n", populacao_B);
printf("Area: %.2f\n", area_B);
printf("PIB: %.2f\n", PIB_B);
printf("Pontos turisticos: %d\n", turismo_B);
printf("\n");
    printf("A densidade populacional eh: %.2f \n", densidade_populacional_B); // 2 casas decimais
    printf("A PIB Percapta eh: %.2f \n", PIB_percapta_B);                     // 2 casas decimais
    printf("Super Poder: %.2f\n", super_poder_B);

printf("\n");

printf("*** Comparacao de Cartas: ***\n");

printf("Populacao: Carta 1 venceu (%d)\n", (populacao_A > populacao_B));
printf("Area: Carta 1 venceu (%d)\n", (area_A > area_B));
printf("PIB: Carta 1 venceu (%d)\n", (PIB_A > PIB_B));
printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (turismo_A > turismo_B));
printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade_populacional_A < densidade_populacional_B));
printf("PIB per Capita: Carta 1 venceu (%d)\n", (PIB_percapta_A > PIB_percapta_B));
printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder_A > super_poder_B));




return 0;


}
