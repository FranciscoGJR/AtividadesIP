/*********************************************************************/
/**   ACH2001 - Introducao a Programacao                            **/
/**   EACH-USP - Primeiro Semestre de 2021                          **/
/**   <turma> - <nome do professor>                                 **/
/**                                                                 **/
/**   Terceiro Exercicio-Programa                                   **/
/**                                                                 **/
/**   <nome do(a) aluno(a)>                   <numero USP>          **/
/**                                                                 **/
/*********************************************************************/

#include <stdio.h>

#define pecaX 'X'
#define pecaY 'O'
#define espacoVazio ' '

#define true 1
#define false 0

typedef int bool;


/*
	Jogo da Velha - programa para verificar o status de um jogo.

	Lista de Status calculado:
    0 - Jogo nao iniciado: o tabuleiro esta 'vazio', i.e., sem pecas X e O;
    1 - Jogo encerrado1: o primeiro jogador (que usa as pecas X) ganhou;
    2 - Jogo encerrado2: o segundo jogador (que usa as pecas O) ganhou;
    3 - Jogo encerrado3: empate - todas as casas do tabuleiro estao preenchidas com X e O, mas nenhum dos jogadores ganhou;
    4 - Jogo ja iniciado e em andamento: nenhuma das alternativas anteriores.
 */

char horizontalVestical(char tabuleiro[][3]){
    int i = 0;
    //      HORIZONTAL
    for(i = 0; i <= 2; i++){
        if((tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][0] == tabuleiro [i][2]) && tabuleiro[i][0] != espacoVazio){
            return tabuleiro[i][0];
        }

    //      VESTICAL
        if((tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[0][i] == tabuleiro [2][i]) && tabuleiro[0][i] != espacoVazio){
            return tabuleiro[0][i];
        }
    }
    return 'n';
}


int verificaStatus(char tabuleiro[][3]) {

	//      CONTAR VAZIO E CHEIO
	int linha, coluna, vazio = 0, cheio = 0;

    for(linha = 0; linha <=2; linha++){
        for(coluna = 0; coluna <= 2; coluna++){
            if(tabuleiro[linha][coluna] == espacoVazio)
                vazio += 1;
            if(tabuleiro[linha][coluna] != espacoVazio)
                cheio += 1;
        }
    }

    //      TABULEIRO VAZIO
    if(vazio == 9) return 0;

    //      GANHADOR HORIZONTAL OU VESTIVAL
    if(horizontalVestical(tabuleiro) == pecaX) return 1;
    if(horizontalVestical(tabuleiro) == pecaY) return 2;

    //      DIAGONAL PRINCIPAL
    if((tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2]) && tabuleiro[0][0] != espacoVazio){
        if(tabuleiro[0][0] == pecaX)
            return 1;
        return 2;
    }

    //      DIAGONAL SECUNDÁRIA
    if((tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0])&& tabuleiro[0][2] != espacoVazio){
        if(tabuleiro[0][2] == pecaX)
            return 1;
        return 2;
    }

    //      EMPATE
    if(cheio == 9)
        return 3;

    //      JOGO NÃO INICIADO
    return 4;
    }


int main(){
	char tab0[][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	char tab1[][3] = {{' ',' ',' '},{'O','O',' '},{'X','X','X'}};
	char tab2[][3] = {{'O','X','X'},{'O','O','O'},{' ',' ','O'}};
	char tab3[][3] = {{'O','X','X'},{' ','O','O'},{'O','X','O'}};
    char tab4[][3] = {{' ','X','O'},{'X',' ','X'},{'O','O',' '}};
    char tab5[][3] = {{'X',' ','O'},{'X','O',' '},{'O',' ',' '}};
    char tab6[][3] = {{'O','X','O'},{'O','X','O'},{'X','O','X'}};
    char tab7[][3] = {{' ',' ','O'},{' ','O',' '},{'O','X','X'}};
    char tab8[][3] = {{' ',' ',' '},{' ','X',' '},{' ',' ',' '}};

	printf("Status calculado: %i\n", verificaStatus(tab0));

	printf("Status calculado: %i\n", verificaStatus(tab1));

	printf("Status calculado: %i\n", verificaStatus(tab2));

	printf("Status calculado: %i\n", verificaStatus(tab3));

	printf("Status calculado: %i\n", verificaStatus(tab4));

	printf("Status calculado: %i\n", verificaStatus(tab5));

	printf("Status calculado: %i\n", verificaStatus(tab6));

	 printf("Status calculado: %i\n", verificaStatus(tab7));

	printf("Status calculado: %i\n", verificaStatus(tab8));
	return 0;
}


/* SAIDA ESPERADA:
Status calculado: 0
Status esperado para o tabuleiro0: 0

Status calculado: 1
Status esperado para o tabuleiro1: 1

Status calculado: 2
Status esperado para o tabuleiro2: 2

Status calculado: 3
Status esperado para o tabuleiro1: 3

Status calculado: 4
Status esperado para o tabuleiro4: 4
*/
