#include <iostream>
#include <ctime>
#include <string>
using namespace std;
void Board(string movePrint[])
{
    cout << "         " << "|       |" << "         " << endl;
    cout << "    " << movePrint[1] << "    " << "|   " << movePrint[2] << "   |" << "    " << movePrint[3] << "    " << endl;
    cout << "         " << "|       |" << "         " << endl;
    cout << "_________" << "|_______|" << "_________" << endl;
    cout << "         " << "|       |" << "         " << endl;
    cout << "    " << movePrint[4] << "    " << "|   " << movePrint[5] << "   |" << "    " << movePrint[6] << "    " << endl;

    cout << "_________" << "|_______|" << "_________" << endl;
    cout << "         " << "|       |" << "         " << endl;
    cout << "    " << movePrint[7] << "    " << "|   " << movePrint[8] << "   |" << "    " << movePrint[9] << "    " << endl;
    cout << "         " << "|       |" << "         " << endl;
    cout << "         " << "|       |" << "         " << endl;
}

int main()
{
    int Pmove;
    int Cmove;
    srand(time(0));
    cout << "Enter A Number Between 0 to 9" << endl;
    string movePrint[10] = {".|.", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Enter A Number Between 0 to 9" << endl;
            cin >> Pmove;

            if (movePrint[Pmove] != " ")
            {
                cout << "THIS PLACE HAS BEEN TAKEN" << endl;
                cin >> Pmove;
            }

            if (movePrint[Pmove] == " " && Pmove >= 0 && Pmove <= 9)
            {
                movePrint[Pmove] = "X";
            }
            else if (Pmove < 0 && Pmove > 9)
            {
                cout << "Enter A Number Between 0 to 9" << endl;
            }
        }
        else
        {
            for (int j = 0; j < 1;)
            {
                Cmove = rand() % 9;
                if (movePrint[Cmove] == " ")
                {
                    movePrint[Cmove] = "O";
                    j++;
                }
            }
        }
        Board(movePrint);
        // cout << "Hello World";
        if ((movePrint[1] == "X") && (movePrint[2] == "X") && (movePrint[3] == "X"))
        {
            cout << "YOU WON !!  | ";
            main();
        }
        else if ((movePrint[4] == "X") && (movePrint[5] == "X") && (movePrint[6] == "X"))
        {
            cout << "YOU WON !!  | ";
            main();
        }
        else if ((movePrint[7] == "X") && (movePrint[8] == "X") && (movePrint[9] == "X"))
        {
            cout << "YOU WON !!  | ";
            main();
        }
        else if ((movePrint[1] == "X") && (movePrint[4] == "X") && (movePrint[7] == "X"))
        {
            cout << "YOU WON !!  | ";
            main();
        }
        else if ((movePrint[2] == "X") && (movePrint[5] == "X") && (movePrint[8] == "X"))
        {
            cout << "YOU WON !!  | ";
            main();
        }
        else if ((movePrint[3] == "X") && (movePrint[6] == "X") && (movePrint[9] == "X"))
        {
            cout << "YOU WON !!  | ";
            main();
        }
        else if ((movePrint[1] == "X") && (movePrint[5] == "X") && (movePrint[9] == "X"))
        {
            cout << "YOU WON !!  | ";
            main();
        }
        else if ((movePrint[3] == "X") && (movePrint[5] == "X") && (movePrint[7] == "X"))
        {
            cout << "YOU WON !!  | ";
            main();
        }
        else if (i == 8)
        {
            cout << endl
                 << " **it's A Tie ** ";
            main();
        }

        if ((movePrint[1] == "O") && (movePrint[2] == "O") && (movePrint[3] == "O"))
        {
            cout << "YOU LOSE  !! | ";
            main();
        }
        else if ((movePrint[4] == "O") && (movePrint[5] == "O") && (movePrint[6] == "O"))
        {
            cout << "YOU LOSE  !! | ";
            return 0;
        }
        else if ((movePrint[7] == "O") && (movePrint[8] == "O") && (movePrint[9] == "O"))
        {
            cout << "YOU LOSE  !! | ";
            main();
        }
        else if ((movePrint[1] == "O") && (movePrint[4] == "O") && (movePrint[7] == "O"))
        {
            cout << "YOU LOSE  !! | ";
            main();
        }
        else if ((movePrint[2] == "O") && (movePrint[5] == "O") && (movePrint[8] == "O"))
        {
            cout << "YOU LOSE  !! | ";
            main();
        }
        else if ((movePrint[3] == "O") && (movePrint[6] == "O") && (movePrint[9] == "O"))
        {
            cout << "YOU LOSE  !! | ";
            main();
        }
        else if ((movePrint[1] == "O") && (movePrint[5] == "O") && (movePrint[9] == "O"))
        {
            cout << "YOU LOSE  !! | ";
            main();
        }
        else if ((movePrint[3] == "O") && (movePrint[5] == "O") && (movePrint[7] == "O"))
        {
            cout << "YOU LOSE  !! | ";
            main();
        } 
    }
    return 0;
}