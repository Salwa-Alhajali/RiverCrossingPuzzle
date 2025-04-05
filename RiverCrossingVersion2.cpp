#include <iostream>
using namespace std;

string Character = " ";

// Function to draw the characters in their current positions
void drawing(int character_sid, string Character) {
    if (character_sid % 2 == 0) {
        cout << "\t                      " << Character << "         \t\n";
    } else {
        cout << "  " << Character << "\t\n";
    }
}

int main() {
    int choice, Mouse_sid = 1, Cat_sid = 1, Human_sid = 1, Cheese_sid = 1;
    int count = 0;

    // Introduction and game rules
    cout << "\n=== Welcome to the River Crossing Challenge! ===\n";
    cout << "The human, mouse, cat, and cheese must cross the river... but danger is everywhere!\n";
    cout << "The cat wants to eat the mouse. The mouse wants the cheese. And you have only 15 moves!\n";
    cout << "Here's how to play:\n";
    cout << "1. Move the human alone.\n";
    cout << "2. Move the human and mouse together.\n";
    cout << "3. Move the human and cat together.\n";
    cout << "4. Move the human and cheese together.\n";
    cout << "BUT remember: the cat can't be left with the mouse, and the mouse can't be left with the cheese!\n";
    cout << "Make the right moves... or it's GAME OVER!\n";
    cout << "Good luck!\n";

    cout<< "____________________________________________________________\n\n";
            
    // Drawing the characters for the first time
    drawing(1, "/_\\ ");
    drawing(1, "(=^._.^=)");
    drawing(1, "<:3 )~~");
    drawing(1, "(o.o)");
    cout << "                  \\__|>__/              \n             ~~~~~~~~~~~~~~~         ";

    cout<< "\n____________________________________________________________\n\n";

    // Main game loop
    while (count < 15) {
        cout << "\n=== Mission: Safely Move All Characters Across the River ===\n";
        cout << "Choose a number to move the characters:\n";
        cout << "1. The human alone\n";
        cout << "2. The human and the mouse\n";
        cout << "3. The human and the cat\n";
        cout << "4. The human and the cheese\n";
        cout << "Enter your choice: ";
        cin >> choice;
        count++;
       

        // Scenario where the cat might eat the mouse
        if ((Cat_sid % 2 != 0 && Mouse_sid % 2 != 0 && Human_sid% 2 != 0 && (choice == 1 || choice == 4))||(Cat_sid % 2 == 0 && Mouse_sid % 2 == 0 && Human_sid% 2 == 0 && (choice == 1 || choice == 4))) {
            cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n"; 
            cout << "x                                                                          x\n"; 
            cout << "x   Oops! The cat is about to eat the mouse — this move cannot happen!     x\n";
            cout << "x                                                                          x\n"; 
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n"; 
            continue; // Retry the move
        }

        // Scenario where the mouse might eat the cheese
        //cout<<Human_sid<<Mouse_sid<<Cat_sid<<Cheese_sid<< if (Not(choice == 1 || choice == 3) &&( (Cheese_sid % 2 == Mouse_sid % 2 != 0&& Human_sid% 2 !== 0)|| (Cheese_sid % 2 == Mouse_sid % 2 == 0 && Human_sid% 2 == 0))){};
        if ((choice == 1 || choice == 3) &&( (Cheese_sid % 2 !=0&& Mouse_sid % 2 != 0&& Human_sid% 2 != 0)|| (Cheese_sid % 2 ==0&& Mouse_sid % 2 == 0 && Human_sid% 2 == 0))) {
            cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n"; 
            cout << "x                                                                           x\n"; 
            cout << "x   Oops! The mouse is about to eat the cheese — this move cannot happen!   x\n";
            cout << "x                                                                           x\n"; 
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n"; 
            continue; // Retry the move
        }

        // Moving the human
        if (choice == 1) {
            Human_sid += 1;
        } 
        // Moving the human and the mouse together
        else if (choice == 2) {
            if (Human_sid % 2 != Mouse_sid % 2) {
                cout << "\n--------------------------------------------------------------------------\n";
                cout << "   The mouse is not on the side where the boat is, so it can't get on." << endl;
                cout << "--------------------------------------------------------------------------\n";
                continue;
            }
            Mouse_sid += 1;
            Human_sid += 1;
        } 
        // Moving the human and the cat together
        else if (choice == 3) {
            if (Human_sid % 2 != Cat_sid % 2) {
                cout << "\n--------------------------------------------------------------------------\n";
                cout << "   The cat is not on the side where the boat is, so it can't get on." << endl;
                cout << "--------------------------------------------------------------------------\n";
                continue;
            }
            Cat_sid += 1;
            Human_sid += 1;
        } 
        // Moving the human and the cheese together
        else if (choice == 4) {
            if (Human_sid % 2 != Cheese_sid) {
                cout << "\n--------------------------------------------------------------------------\n";
                cout << "   The cheese is not on the side where the boat is, so it can't get on." << endl;
                cout << "--------------------------------------------------------------------------\n";
                continue;
            }
            Cheese_sid += 1;
            Human_sid += 1;
        }

        // Handling invalid input
        if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
            cout << "\n**********************************************************************\n";
            cout << "   A mysterious character appears out of nowhere! 0~0!" << endl;
            cout << "**********************************************************************\n";
            continue;
        }
         else {
            // Displaying the current positions of the characters
            if (Cheese_sid % 2 == 0) {
                cout << "The cheese is on the right,";
            } else {
                cout << "The cheese is on the left,";
            }
            if (Cat_sid % 2 == 0) {
                cout << "The cat is on the right,";
            } else {
                cout << "The cat is on the left,";
            }
            if (Mouse_sid % 2 == 0) {
                cout << "The mouse is on the right,";
            } else {
                cout << "The mouse is on the left,";
            }
            if (Human_sid % 2 == 0) {
                cout << "The human is on the right\n\n";
            } else {
                cout << "The human is on the left\n\n";
            }


            // cout << "\nCurrent positions:\n";
    
            // // Cheese Position
            // cout << "Cheese: " << (Cheese_sid % 2 == 0 ? "Right" : "Left") << "\t";
            
            // // Cat Position
            // cout << "Cat: " << (Cat_sid % 2 == 0 ? "Right" : "Left") << "\t";
            
            // // Mouse Position
            // cout << "Mouse: " << (Mouse_sid % 2 == 0 ? "Right" : "Left") << "\t";
            
            // // Human Position
            // cout << "Human: " << (Human_sid % 2 == 0 ? "Right" : "Left") << "\n";

            cout<< "____________________________________________________________\n\n";
            
            // Drawing the characters in their new positions
            drawing(Cheese_sid, "/_\\ ");
            drawing(Cat_sid, "(=^._.^=)");
            drawing(Mouse_sid, "<:3 )~~");
            drawing(Human_sid, "(o.o)");
            cout << "               \\__|>__/              \n             ~~~~~~~~~~~~~~~         ";

            cout<< "\n____________________________________________________________\n\n";

        }

        // Checking for a win condition
        if (Cat_sid % 2 == 0 && Mouse_sid % 2 == 0 && Human_sid % 2 == 0 && Cheese_sid % 2 == 0) {
            cout << "\nYou have successfully completed the task, thank you! You made " << count << " moves." << endl;
            break;
        }
    }

    // Checking if the player took too many moves or performed excellently
    if (count == 15) {
        cout << "\nBetter luck next time! You've taken 15 steps and didn't win." << endl;
    } else if (count == 7) {
        cout << "\nYou moved perfectly! You're amazing!\n\\(0 O 0)/\n";
        cout << "    \\ | /    \n";
        cout << "  --  *  --  \n";
        cout << "    / | \\    \n";
        cout << "     '      \n";
    }
}
