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

#include "linalg.h"

int main()
{

	Matrix A = scanm(2,2);
    Matrix B = scanm(2,2);
    printm(A);
    printm(sum(A,B));
    printm(subtract(A,B));
    printm(dot(A,B));
    printm(multiply(A,B));
    printm(transpose(A));
    

	return 0;
}
