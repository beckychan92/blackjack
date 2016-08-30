#include<iostream>          //for cout
using namespace std;

int main()
{
    srand (time(NULL));
    char playgameanswer;
    playgameanswer = 'y';

    char hitornot;
    hitornot = 'y';

    int card_1, card_2, hit_card;

    while (playgameanswer == 'y')
    {
        int sum_of_cards = 0;
        card_1 = rand() % 10 + 1; //goal of getting numbers between 0-10. %10 will get us 0-9.
        card_2 = rand() % 10 + 1; //So I need to +1 at the end in order to get a range of 0-10
        hit_card = rand() % 10 + 1;
        sum_of_cards = card_1 + card_2;

        cout<<"First Cards: "<<card_1<<", "<<card_2<<endl; //Playing the first game
        cout<<"Total: "<<sum_of_cards<<endl;

        do
        {
            cout<<"Do you want another card? (y/n): ";
            cin>>hitornot;
            if (hitornot == 'n')
            {
                cout<<"Good Game!"<<endl;
            }else{
                hit_card = rand() % 10 + 1;
                cout<<"Card: "<<hit_card<<endl;
                sum_of_cards += hit_card;
                cout<<"Total: "<<sum_of_cards<<endl;
                if (sum_of_cards == 21)
                {
                    cout<<"Congrats! You won!"<<endl;
                }
                else if (sum_of_cards > 21)
                {
                    cout<<"Oh no! Bust!"<<endl;
                }
            }
        }
        while(sum_of_cards < 21 && hitornot == 'y');

        cout<<"Would you like to play again? (y/n): "<<endl; //continue playing or terminate the program
        cin>>playgameanswer;
        if (playgameanswer == 'y')
        {
            cout<<"Let's do this again!"<<endl;
        }
        else if (playgameanswer == 'n')
        {
            cout<<"Thanks for playing!"<<endl;
        }
    }
}

/*

 Output:

 First game: Bust
    First Cards: 4, 5
    Total: 9
    Do you want another card? (y/n): y
    Card: 8
    Total: 17
    Do you want another card? (y/n): y
    Card: 1
    Total: 18
    Do you want another card? (y/n): y
    Card: 5
    Total: 23
    Oh no! Bust!
    Would you like to play again? (y/n):
    y
 Second game: Blackjack
    Let's do this again!
    First Cards: 5, 6
    Total: 11
    Do you want another card? (y/n): y
    Card: 10
    Total: 21
    Congrats! You won!
    Would you like to play again? (y/n):
 Third Game: Surrender
    Would you like to play again? (y/n):
    y
    Let's do this again!
    First Cards: 6, 8
    Total: 14
    Do you want another card? (y/n): n
    Good Game!
    Would you like to play again? (y/n):
    n
    Thanks for playing!
 */
