//Game show paradox simulator

#include <iostream>

using namespace std;

int main() {

    string again;
    do {
        uint32_t iter;
        cout << "How many iterations?";
        cin >> iter;

        bool switchDoors = false;
        string response;
        cout << "Switch doors if given chance? (y/n)";
        cin >> response;
        if(response == "y" || response == "yes")
            switchDoors = true;

        bool watch = false;
        cout << "watch simulation? (y/n)";
        cin >> response;
        if(response == "y" || response == "yes")
            watch = true;

        int results[iter];
        int totalWins = 0;
        for(int game : results) {
            int prize = rand() % 3 + 1;
            int choice = rand() % 3 + 1;
            int shown;
            bool win;

            if(watch)
                cout << endl << "Door " << choice << " was chosen." << endl;

            if(prize == choice) {
                //if the prize door was chosen, then 1 of the other 2 doors is randomly selected
                shown = (prize + rand() % 2) % 3 + 1;
                win = !switchDoors;
            } else {
                //if the prize door wasn't chosen, then the remaining incorrect door is chosen.
                shown = 3 - (prize+choice)%3;
                win = switchDoors;
            }

            if(watch)
            {
                cout << "Door " << shown << " was shown to not have the prize." << endl;

                if(switchDoors)
                    cout  << "You switched to Door " << 3 - (shown+choice)%3 << endl;

                cout << "Door " << prize << " had the prize, so you ";
                if(win)
                    cout << "won!" << endl;
                else
                    cout << "lost." << endl;
            }
            game = win;
            totalWins += win;
        }
        cout << endl << "You won " << totalWins << " games out of " << iter << endl;

        cout << endl << "Simulate again? (y/n)";
        cin >> again;

    } while (again == "y" || again == "yes");
}
