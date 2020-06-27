#include <iostream>
#include<windows.h>
using namespace std;
class TicTackToe
{
public:
    int player = 1;
    int i;
    int choice;
    char mark;
    char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

    int checkwin();
    void board();
};

int main()
{
    system("color 03");
    TicTackToe b;
    do
    {
        b.board();
        b.player=(b.player%2)?1:2;

        cout << "Player " << b.player << ", enter a number:  ";
        cin >> b.choice;

        b.mark=(b.player == 1) ? 'X' : 'O';

        if (b.choice == 1 && b.square[1] == '1')

            b.square[1] = b.mark;
        else if (b.choice == 2 && b.square[2] == '2')

            b.square[2] = b.mark;
        else if (b.choice == 3 && b.square[3] == '3')

            b.square[3] = b.mark;
        else if (b.choice == 4 && b.square[4] == '4')

            b.square[4] = b.mark;
        else if (b.choice == 5 && b.square[5] == '5')

            b.square[5] = b.mark;
        else if (b.choice == 6 && b.square[6] == '6')

            b.square[6] = b.mark;
        else if (b.choice == 7 && b.square[7] == '7')

            b.square[7] = b.mark;
        else if (b.choice == 8 && b.square[8] == '8')

            b.square[8] = b.mark;
        else if (b.choice == 9 && b.square[9] == '9')

            b.square[9] = b.mark;
        else
        {
            cout<<"Invalid move ";

            b.player--;
            cin.ignore();
            cin.get();
        }
        b.i=b.checkwin();

        b.player++;
    }while(b.i==-1);
    b.board();
    if(b.i==1)
    {
        cout<<"==>\aPlayer "<<--b.player<<" win ";
    }
    else
    {
        cout<<"==>\aGame draw";
    }
    cin.ignore();
    cin.get();
    return 0;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/

int TicTackToe::checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


                                     //******************************************************************//
                                    //    FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK       //
                                   //******************************************************************//


void TicTackToe::board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

                                 //********************************************************************//
                                //                           END OF PROJECT                           //
                               //********************************************************************//