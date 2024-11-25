#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "header.h"


int main() {
    setlocale(0, "Portuguese");
    int p,i, fase_atual = 0; //p=poder


Personagem personagem[3]     ;
    inicializar_jogo(personagem, 3, &p);

     menu(personagem, 3, &p, fase_atual);

    p = fase0();
    fase_atual++;
    for(i=1;i<=4;i++){
        ler_fase(i, personagem, p);
        fase_atual++;
    }
    fase5(p,personagem);

    return 0;
}
