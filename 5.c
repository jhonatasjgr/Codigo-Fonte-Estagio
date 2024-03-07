/*Escreva um programa que inverta os caracteres de um string.*/
#include <stdio.h>
#include <string.h>

int main(){
    char nome[] = "pera";
    int size = strlen(nome);
    for(int i=0;i<size/2;i++){
        char x = nome[i];
        nome[i] = nome[size-i-1];
        nome[size-i-1] = x;
    }
     printf("%s",nome);
}