/*
SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI

Técnico em Desenvolvimento de Sistemas - Turma H

Aluno: Alvaro Delgado Quintana
Prof.: Ana

Atividade: beecrowd | 1115
Cuadrante

Data: 09/10/2026
Cascavel - PR
*/
#include <stdio.h>

int main (){

    int x, y, c, d;

    d=1;
    c=1;

    while(d==1){
        scanf("%d", &x);
        scanf("%d", &y);
        
        if(x>0&&y>0){
            printf("primeiro\n");
        }else{
            if(x<0&&y>0){
                printf("segundo\n");
            }else{
                if(x<0&&y<0){
                    printf("terceiro\n");
                }else{
                    if(x>0&&y<0){
                        printf("quarto\n");
                    }else{
                        d=0;
                    }
                }

            }
        }

    }

    return 0;
    
}