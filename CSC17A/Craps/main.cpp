#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Status {CONTINUE, WON, LOST};          //Global enum that controls game status
int rollDice();                             //Rolls dice, and calculates and displays sum
void promptWager(float &bankBalance, float &wager);//Prompts user to enter wage

int main()
{
    float bankBalance = 1000;           //OUTPUT - Controls the users bank balance
    float wager = -1;                   //INUT - Controls the users wager
    int myPoint = 0;					//OUTPUT - Point if no win or loss on first roll
    Status gameStatus;                  //OUTPUT - Can contain one of the enumerated values
    
    //Outputs the users starting balance
    cout << "Your starting balance is $" << bankBalance << endl;
    
    //Loops until users busts or cashes in chips
    while(bankBalance != 0 && wager != 0)
    {
        //Function call prompts for bet
        promptWager(bankBalance, wager);
        if(wager != 0)                      //Only happens if not sentinel value
        {
            srand(time(0));                 //Seeds time value
            int sumOfDice = rollDice();     //Function call
            
            switch(sumOfDice)
            {
                case 7:									//Win of first roll
                case 11:								//Win on first Roll
                    gameStatus = WON;
                    bankBalance += wager * 2;           //Adds money to bank if won
                    break;
                case 2:									//Lose on first roll
                case 3:									//Lose on first roll
                case 12:								//Lose on first roll
                    gameStatus = LOST;
                    break;
                default:								//did not win or lose so remember point
                    gameStatus = CONTINUE;				//game is not over
                    myPoint = sumOfDice;				//remembers the point
                    cout << "Point is " <<myPoint << endl;
                    break;
            }
            
            //What happends during different conditions
            while (gameStatus == CONTINUE)
            {
                sumOfDice = rollDice();
                
                //Determines if you win or lose
                if(sumOfDice == myPoint)
                {
                    gameStatus = WON;
                    bankBalance += wager * 2; //Adds money to bal when win
                }
                else if (sumOfDice == 7)
                {
                    gameStatus = LOST;
                }
            }
            
            if (gameStatus == WON)
            {
                //Displays output when won
                cout << "Player wins!" << endl;
                cout << "Your bank balance is $" << bankBalance << endl << endl;
            }
            else
            {
                //Displays output when player loses
                cout << "Player loses" << endl;
                cout << "Your bank balance is $" << bankBalance << endl << endl;
                
                if(bankBalance == 0)
                {
                    //Output when player has last all money
                    cout << "Sorry you busted" << endl;
                }
            }
        }
    }
    return 0;
}

int rollDice()
{
    //picks random values for the die
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    
    int sum = die1 + die2; //complete sum of the die
    
    //displays results of the roll
    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}

void promptWager(float &bankBalance, float &wager)
{
    /**************************************************************
     * promptWager
     * This function prompts the user how much they would like
     * to wage. And deducts the wage from the bank balance.
     * This function also creates the "chatter throughout the game
     **************************************************************/
    
    if (bankBalance >= 1000 * 2)
    {
        //Chatter for when the user is up twice the amount of starting bal
        cout << "You're up big. Now's the time to cash in your chips!" << endl;
    }
    
    //Prompts and gathers input for users wager
    cout << "How much would you like to wager? (Enter 0 to cash in chips):$";
    cin >> wager;
    
    while( wager > bankBalance || wager < 0)
    {
        //Input validation for wager
        cout << endl;
        cout << "Please enter a valid wager" << endl;
        cout << "How much would you like to wager? (Enter 0 to cash in chips):$";
        cin >> wager;
    }
    
    if(wager == 0)
    {
        //Sentinel value output
        cout << "Congrats you're cashing in $" << bankBalance << " chips!!";
    }
    
    if(wager == bankBalance)
    {
        //Chatter when user is all in
        cout << "Oh, so you're going for broke huh?" << endl;
    }
    
    else if(wager < bankBalance / 4 && wager != 0)
    {
        //Chatter when user wages a small amount
        cout << "Aw c'mon, take a chance!" << endl;
        
    }
    
    //Updates balance when wager is placed
    bankBalance -= wager;
    
    cout << endl;
}