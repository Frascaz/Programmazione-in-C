#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

int i,j, altezza=30,larghezza=30,gameover,score; // integrali per i confini della mappa
int x,y,fruttax,fruttay,flag; //integrali per la frutta 

//funzione per disegnare il perimetro
void draw()
{
    for (i = 0; i < altezza; i++){
        for (j = 0; j < larghezza; j++) {
            if( i == 0 || i == larghezza - 1 || j == 0 || j == altezza - 1) {
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//Codice del driver
int main()
{
    //chiamata alle funzioni
    draw();

    return 0;
}
