#include<stdio.h>
#include<conio.h>

void tictactoe();
int wol();

char box[10]={'0','1','2','3','4','5','6','7','8','9'};

int main(){

    int wp=1,a,place;

    char pla;




    do
    {
        tictactoe();

        wp=(wp % 2);

        if(wp==1){
            pla='X';

        } else{
            pla='O';
        }


    printf("Player %d, Enter a place",wp);
    scanf("%d",&place);

    if(place==1 && box[1]=='1'){
        box[1]=pla;
    }
    else if(place==2 && box[2]=='2'){
        box[2]=pla;
    }
    else if(place==3 && box[3]=='3'){
        box[3]=pla;
    }
    else if(place==4 && box[4]=='4'){
        box[4]=pla;
    }
    else if(place==5 && box[5]=='5'){
        box[5]=pla;
    }
    else if(place==6 && box[6]=='6'){
        box[6]=pla;
    }
    else if(place==7 && box[7]=='7'){
        box[7]=pla;
    }
    else if(place==8 && box[8]=='8'){
        box[8]=pla;
    }
    else if(place==9 && box[9]=='9'){
        box[9]=pla;
    }

    else{
        printf("ERROR! Invalid input");

        wp--;
        getch();
    }
    a=wol();

    wp++;
    }

    while (a==2);

    tictactoe();

    if(a==1){
        printf("\n Winner is Player- %d",wp);
    }
    else{
        printf("Draw");
    }
    getch();

    return 0;
}

/*
IF THE FUNcTION wol returns 1, One of the player wins

IF it returns anything other than 2 or 1, The game is draw

IF 2 is returned the game is not finished and continues

*/

int wol(){

if (box[1] == box[2] && box[2]==box[3])
        return 1;

    else if (box[4] == box[5] && box[5] == box[6])
        return 1;

    else if (box[7] == box[8] && box[8] == box[9])
        return 1;

    else if (box[1] == box[4] && box[4] == box[7])
        return 1;

    else if (box[2] == box[5] && box[5] == box[8])
        return 1;

    else if (box[3] == box[6] && box[6] == box[9])
        return 1;

    else if (box[1] == box[5] && box[5] == box[9])
        return 1;

    else if (box[3] == box[5] && box[5] == box[7])
        return 1;

    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7]
        != '7' && box[8] != '8' && box[9] != '9')

        return 0;
    else
        return  2;
}

/* TO MAKE THE TIc TAc TOE BOARD
THE FUNcTION TicTacToe is used
*/

void tictactoe(){
    system("cls");
    printf("\n\n Tic Tac Toe\n\n");

    printf("Player 1 (O)  -  Player 2 (X)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

    printf("     |     |     \n\n");

}
