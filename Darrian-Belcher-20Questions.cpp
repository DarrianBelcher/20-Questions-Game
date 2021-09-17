/*
Name(s): Darrian Belcher
Date: 02/20/21
Program Name: 20 Questions
Program Description: 20 Questions game in which the user selects an animal and continuously answeres yes or no questions until the animal has been correctly selected
*/

#include <iostream>
#include <iomanip>

using namespace std;

/*
Summary: Menue function that prints the game header and selectable options
Reasoning: Allows the user to read game instructions, play, or quit
Input: N/A
Output: N/A
*/
void menu()
{
    cout << setw(45) << setfill('*') << ' ' << endl;
    cout << "* Welcome to 20 Questions: Animal Edition! *" << endl;
    cout << setw(45) << setfill('*') << ' ' << endl;

    cout << "1. Instructions " << endl;
    cout << "2. Play" << endl;
    cout << "3. Quit" << endl;
}

/*
Summary: function that prints yes or no answer options to the user
Reasoning: Declutter code
Input: N/A
Output: N/A
*/
void printOptions(){
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
}


/*
Summary: Switch statement to verify menue selection, multiple questions to narrow down and classify selected animal, multiple if statements to verify yes or no input  
Reasoning: Needed to create the game and decision tree
Input: N/A
Output: N/A
*/
void game()
{
    int selectedMenueOption; // integer to store initial menue selection 

    do // do-while loop so the program continuously runs until option 3 (quit) is selected
    {
        menu(); // menu function called to display options

        string animalOptions[10] = {"dog", "cat", "gold fish", "small turtle", "lion", "tiger", "cheetah", "tiger", "bear", "elephant"}; // array of animal options

        int yesOrNo; // yes or no integer that will continously be checked throughout the code, 1 = yes, 2 = no

        cin >> selectedMenueOption; // 

        switch(selectedMenueOption){
            case 1:  // if 1 is selected, instructions are displayed
                cout << endl; 
                cout << "In this game, you will select an animal from a list of available choices. You will then answer a series of yes or no questions until this program can classify which choice you selected. " << endl; 
                cout << endl;
                break;

            case 2:  // if 2 is selected, the game begins
                
                cout << endl << "Select one of the following animals: " << endl << endl; 
                
                for(int i = 0; i < 10; i++){ // prints animal options from array
                    cout << animalOptions[i] << endl; 
                }

                /* Multiple yes or no questions are asked to classify the user's selected animal through a decision tree. 

                1. A question is asked
                2. The printOptions function is called to display yes / no options
                3. User input is stored in yesOrNo variable
                4. if / else if statements are used to verify input and continue down the decision tree

                This cycle is repeated until the animal is classified */
                
                cout << endl << "Is the animal typically domesticated? " << endl;
                printOptions();
                cin >> yesOrNo;
                cout << endl; 

                if (yesOrNo == 1){
                    cout << "Does the animal have paws?" << endl;
                    printOptions();
                    cin >> yesOrNo;
                    cout << endl;

                    if (yesOrNo == 1)
                    {
                        cout << "Does the animal have nine lives?" << endl;
                        printOptions();
                        cin >> yesOrNo;
                        cout << endl;

                        if (yesOrNo == 1)
                        {
                            cout << "The animal you selected is a cat!" << endl;
                        }
                        
                        else if(yesOrNo == 2){
                            cout << "The animal you selected is a dog!" << endl; 
                        }
                    }
                    else if (yesOrNo == 2){
                        cout << "Does the animal have legs?" << endl;
                        printOptions();
                        cin >> yesOrNo;
                        cout << endl;

                        if (yesOrNo == 1){
                            cout << "The animal you selected is a small turtle!" << endl;
                        }
                        
                        else if (yesOrNo==2){
                            cout << "Does the animal have gills?" << endl;
                            printOptions();
                            cin >> yesOrNo;
                            cout << endl;

                            if(yesOrNo==1){
                                cout << "The animal you selected is a gold fish!" << endl; 
                            }
                            
                            else if (yesOrNo == 2){
                                cout << "The animal you selected is a snake!" << endl; 
                            }
                        }
                    }
                }
                
                else if (yesOrNo == 2)
                {
                    cout << "Is the animal in the Felidae family?" << endl;
                    printOptions();
                    cin >>yesOrNo;
                    cout << endl;

                    if (yesOrNo == 1)
                    {
                        cout << "Does the animal have a mane?" << endl;
                        printOptions();
                        cin >> yesOrNo;
                        cout << endl;

                        if (yesOrNo == 1)
                        {
                            cout << "The animal you selected is a lion!" << endl;
                        } 
                       
                        else if (yesOrNo ==2){
                            cout << "Does the animal have spots?" << endl;
                            printOptions();
                            cin >> yesOrNo;
                            cout << endl;

                            if (yesOrNo == 1){
                                cout << "Can the animal run up to 80 mph?" << endl;
                                printOptions();
                                cin >> yesOrNo;
                                cout << endl;

                                if(yesOrNo == 1){
                                    cout << "The animal you selected is a cheetah!" << endl;
                                }
                                
                                else if (yesOrNo == 2){
                                    cout << "The animal you selected is a jaguar!" << endl;
                                }
                            }
                           
                            else if(yesOrNo == 2){
                                cout << "The animal you selected is a tiger!" << endl;
                            }
                        }
                        

                    }
                    
                    else if (yesOrNo == 2){
                        cout << "Is the animal an omnivore?" << endl;
                        printOptions();
                        cin >> yesOrNo;
                        cout << endl;

                        if(yesOrNo == 1){
                            cout << "The animal you selected is a bear!" << endl;
                        }
                       
                        else if (yesOrNo == 2){
                            cout << "The animal you selected is an elephant!" << endl;
                        }
                    }
                }
        }

    } while (selectedMenueOption != 3); // loop stops when 3(quit) is inputted
}

/*
Summary: Main function used to call the game function
Reasoning: Needed so the game can be displayed to the terminal
Input: N/A
Output: N/A 
*/
int main(){
    game();
    return 0; 
}