#include <stdio.h>
#include <math.h>
void primeiraQ(){
    float metros;
    printf("Escrever um algoritmo que pergunta um valor em metros e imprime correspondente em decímetros, centímetros e milímetros");
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);
    
    float decimetros = metros * 10;
    float centimetros = metros * 100;
    float milimetros = metros * 1000;
    
    printf("Decímetros: %.2f\n", decimetros);
    printf("Centímetros: %.2f\n", centimetros);
    printf("Milímetros: %.2f\n", milimetros);

}

void segundaQ(){
 int numero1,numero2,numero3,numero4,soma;

 printf("digite um primeiro valor para somar");
 scanf("%d", &numero1);
 printf("digite um segundo valor para somar");
 scanf("%d", &numero2);
 printf("digite um terceiro valor para somar");
 scanf("%d", &numero3);
 printf("digite um quarto valor para somar");
 scanf("%d", &numero4);
 
 soma = numero1 + numero2 + numero3 + numero4;
 printf("a soma dos valores é: %d\n", soma);
}

void terceiraQ(){
    float nota1,nota2,nota3,media;
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("digite a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("a média aritmética é: %f\n", media);
}

void quartaQ(){
    float nota1,nota2,nota3,media;
    float pesoum= 1;
    float pesodois = 5;
    float pesotres = 2;
    
    printf("digite um primeiro valor para somar");
    scanf("%f", &nota1);
    printf("digite um primeiro valor para somar");
    scanf("%f", &nota2);
    printf("digite um primeiro valor para somar");
    scanf("%f", &nota3);
    float num1 = pesoum * nota1;
    float num2 = pesodois * nota2;
    float num3 = pesotres * nota3;
    float pesos = pesoum+pesodois+pesotres;
    media = (num1 + num2 + num3)/pesos;
    
    printf("a média ponderada é: %f\n", media);

}

void quintaQ(){
    float num;
    printf("digite um valor: ");
    scanf("%f", &num);
    if(num > 0 ){
        float aoquadrado = num * num;
        printf("%.2f ao quadrado é: %.2f\n", num, aoquadrado);
        float aocubo = num * num * num;
        printf("%.2f ao cubo é: %.2f\n", num, aocubo);
        float raizquadrada = sqrt(num);
        printf("a raiz quadrada de %.2f é: %.2f\n", num, raizquadrada);
        float raizCubica = pow(num, 1.0/3.0);
        printf("A raiz cúbica de %.2f é %.2f\n", num, raizCubica);
        
    } else {
        printf("Digite um número positivo!\n");
    };
    
}

void sextaQ(){
    int totalSegundos,horas,minutos,segundos;
    
    printf("digite um valor em segundos para converter para horas");
    scanf("%d", &totalSegundos);
    horas = totalSegundos/3600;
    totalSegundos %= 3600;
    minutos = totalSegundos/60;
    segundos = totalSegundos%60;
    printf("%02d horas e %02d minutos e %02d segundos\n", horas,minutos,segundos);
}

int main() {
    // Write C code here
    sextaQ();
    return 0;
}