#include <stdio.h>
int main (){

    //organização e declaração de variáveis
int codigo1, codigo2, npontos1, npontos2;
char carta1[2], carta2[2], estado1[3], estado2[3], cidade1[50], cidade2[50]; 
float pop1, pop2, area1, area2, PIB1, PIB2;

printf ("\n\n======================================");
printf ("\n====== BEM-VINDO AO SUPER TRUNFO ======");
printf ("\n======================================\n\n");

    //primeira sessão de entradas - CARTA 1.

printf (">>>>>>>>>> CARTA 1 <<<<<<<<<\n");
printf ("Carta (A ou B): ");
scanf ("%1s", carta1);

printf ("Estado: ");
scanf ("%2s", estado1);

printf ("Codigo: ");
scanf ("%d", &codigo1);

printf ("Nome da cidade: ");
scanf ("%49s", cidade1);

printf ("Populacao: ");
scanf ("%f", &pop1);

printf ("Area (em M quadrado): ");
scanf ("%f", &area1);

printf ("PIB: ");
scanf ("%f", &PIB1);

printf ("Numeros de pontos turisticos: ");
scanf ("%d", &npontos1);


//segunda sessão de entrdas - CARTA 2.

printf ("\n\n"); //preferi dar espaços assim por questão estética rsrsrs
printf (">>>>>>>>>> CARTA 2 <<<<<<<<<\n");
printf ("Carta (A ou B): ");
scanf ("%1s", carta2);

printf ("Estado: ");
scanf ("%2s", estado2);

printf ("Codigo: ");
scanf ("%d", &codigo2);

printf ("Nome da cidade: ");
scanf ("%49s", cidade2);

printf ("Populacao: ");
scanf ("%f", &pop2);

printf ("Area (em M quadrado): ");
scanf ("%f", &area2);

printf ("PIB: ");
scanf ("%f", &PIB2);

printf ("Numeros de pontos turisticos: ");
scanf ("%d", &npontos2);

printf ("\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>> FIMMMMMMMMMMM :-) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");

    return 0;
}
