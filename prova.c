//Vitor Cavalli de Oliveira
//RA: 12922115000



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num, num2, positivos = 0, negativos = 0;
float mediaP;
int somaT;

/*
1° - Crie um procedimento com 2 parâmetros do tipo inteiro que recebam os valores  que foram digitados. 
Informe quantos valores  são positivos (maiores que zero) e quantos valores são negativos (menos que zero). 
(sem retorno, com a saida n
o console - printf/count/System.out.printIn - realizada pelo procedimento). 
*/


void capValores(int num, int num2){

        if(num > 0)
            positivos++;
        if(num < 0)
            negativos++;  
        if(num2 > 0)
            positivos++;
        if(num2 < 0)
            negativos++;

    printf("-------------------------------------\n");
    printf("Positivos: [%d]\nNegativos: [%d]\n", positivos, negativos);
    printf("-------------------------------------\n");
    
}

/*
2° - Crie uma função que recebe 3 parâmetros do tipo float (teste passando que devem ser o primeiro e o 
segundo valores digitados pelo usuário e, 
como terceito parãmetro, a soma do primeiro e do segundo valor) 
Calcule a média ponderada dos 3 valores considerando, respectivamente, os pesos 1 , 3 e 5. 
Está função deve retornar a média final. Está média deve ser exibida no console, mas não pela função. 
*/


float calcMedia(float num, float num2){
    
    float valor1 = num;
    float valor2 = num2;
    float valor3 = num + num2;
    float mediaP = (valor1 * 1 + valor2 * 3 + valor3 * 5 )/(1 + 3 + 5);
    // NAO PODE RETORNAR PELA FUNÇÃO
    return mediaP;

}

/*
3° -  Crie uma função do tipo inteiro com dois valores inteiro como parâmetro, atribuindo os valores que foram digitados. 
Mostre a tabuada do dois valores (obrigatorio usar uma estrutura de repetição para multiplar os numeros de 1 a 10). 
A função deverá retornar a soma dos resultados do todas as operações das duas tabuadas. ok
Está função também deve apresentar a média ponderada (pesos 1 , 3 e 5) para os seguintes 3 valores  os dois valores usados como entrada desta função 
e a soma dos resultados de todas as operações . 
*/

int calcTabu(int num, int num2){
    int soma = 0;
    int soma2 = 0;
    int x;
    int i;
    int somaT;
   
    printf("Tabuada do [%d]\n", num);
    for(int x = 1; x<=10; ++x){
        printf("%ix%i = %i\n", x, num, x * num);
        soma += x*num;
    }
    printf("A soma da tabuada: [%d]\n", soma);
    
    printf("-------------------------------------\n");
    printf("Tabuada do [%d]\n", num2);
    for(int x = 1; x<=10; ++x){
        printf("%ix%i = %i\n", x, num2, x * num2);
        soma2 += x*num2;
    }
    printf("A soma da tabuada: [%d]\n", soma2);
    printf("-------------------------------------\n");

    somaT = soma + soma2;
    
    float mediaPonderadaTabu = (num * 1 + num2 * 3 + somaT * 5 )/(1 + 3 + 5);
    printf("A média ponderada das operações da tabuada: [%.2f]\n", mediaPonderadaTabu);
    return somaT;
}


int main() {  
    
    setlocale(LC_ALL, "Portuguese_Brasil");
    
    printf(">>> Digite o primeiro valor: ");
    scanf("%d", &num);
    printf(">>> Digite o segundo valor: ");
    scanf("%d", &num2);

    capValores(num, num2);
    mediaP = calcMedia(num, num2);
    printf(">>> A média ponderada: [%.2f]\n", mediaP); // PRINTF DA FUNÇÃO DA MEDIA PONDERADA
    printf("-------------------------------------\n");
    somaT = calcTabu(num, num2);
    printf("A soma total de todas operações da tabuada: [%d]\n", somaT);
    system("pause");
    return 0;
}
