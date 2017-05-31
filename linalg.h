/* 
 * Universidade de Brasília
 * Disciplina: Algoritmos e Programação de Computadores
 * Turma: FF
 * Aluno: Pedro Henrique de Melo Alves Santos - 17/0062562
 * 
 * Projeto em Sala 03: Biblioteca de funções de Álgebra Linear
 * < O objetivo da biblioteca é definir um estrutura propria para matrizes e ser capaz de 
 *   realizar operações matriciais como: ler matrizes, imprimir matrizes, somar matrizes,
 *   subtrair matrizes, multiplicar matrizes, mostrar a matriz transposta e verificar simetria >
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#ifndef LINALG_H
#define LINALG_H


typedef struct Matrix
{
    int rows;
    int columns;
    double **ordem;
}  Matrix;

Matrix scanm(unsigned int rows, unsigned int columns)
{
    Matrix m;
    m.rows=rows;
    m.columns=columns;
    m.ordem=(double**)malloc(rows*sizeof(double*));
    int i, j;
    for(i=0;i<rows;i++)
    {
        m.ordem[i]=(double*)malloc(columns*sizeof(double));
        for(j=0;j<columns;j++)
        {
            scanf("%lf", &m.ordem[i][j]);
        }
    }
    return m;

}
void printm (Matrix A) //print só recebe 1 matriz de parâmetro
{
    int i,j;
    printf("\n");
    for(i=0;i<A.rows;i++)
    {
        for(j=0;j<A.columns;j++)
        {
            printf("%.1lf ", A.ordem[i][j]);
        }
        printf("\n");
    }
} 

Matrix sum(Matrix A, Matrix B)
{
    int i,j;
    Matrix erro;
    Matrix sum;
    sum.ordem=(double**)malloc(A.rows*sizeof(double*));
    for(i=0;i<A.rows;i++)
    {
        sum.ordem[i]=(double*)malloc(A.columns*sizeof(double));
        for(j=0;j<A.columns;j++)
        {
            sum.ordem[i][j]=A.ordem[i][j]+B.ordem[i][j];
        }
    }
    if(A.rows==B.rows&&A.columns==B.columns)
        return sum;
    else
        

    
} 

Matrix subtract (Matrix A, Matrix B)
{
    int i,j;
    Matrix subtract;
    Matrix erro[1][1];
    subtract.ordem=(double**)malloc(A.rows*sizeof(double*));
    for(i=0;i<A.rows;i++)
    {
        subtract.ordem[i]=(double*)malloc(A.columns*sizeof(double));
        for(j=0;j<A.columns;j++)
        {
            subtract.ordem[i][j]=A.ordem[i][j]-B.ordem[i][j];
        }
    }
    if(A.rows==B.rows&&A.columns==B.columns)
        return subtract;
    else
        
    
    
}

Matrix dot(Matrix A,Matrix B)
{
    int i,j,k,aux;
    Matrix dot;
    dot.ordem=(double**)malloc(A.rows*sizeof(double*));
    for(i=0;i<A.rows;i++)
    {
        dot.ordem[i]=(double*)malloc(A.columns*sizeof(double));
        for(j=0;j<A.columns;j++)
        {
            aux=0;
            for(k=0;k<A.columns;k--){
                aux+=A.ordem[i][k]*B.ordem[k][j];
            }
            dot.ordem[i][j]=aux;
        }
    }
    if(A.columns==B.rows)
        return dot;
    


}



#endif
