#include <iostream>
#include <string>
#include <sstream>
using namespace std;


// Start Encryption Function

string craptionFun(string text) {
    string Craptin_Result;

    for (char x : text) {
        int encrypted = (x + 5) * 147 - 19;
        Craptin_Result += to_string(encrypted) + " ";
    }

    return Craptin_Result;
}

// End Encryption Function

/**********************************************************/

//Start Decryption Function

char decryptChar(int x) {
    return static_cast<char>((x + 19) / 147 - 5);
}

string decrypt(string text) {
    stringstream ss(text);
    string token, result;

    while (ss >> token) {
        int x = stoi(token);
        result += decryptChar(x);
    }

    return result;
}

//End Decryption Function


/**********************************************************/



int main() {
    int choice;
    string Encraption;
    string Dcraption;

    cout << " _____                             _   _              \n";
    cout << "| ____|_ __   ___ _ __ _   _ _ __ | |_(_) ___  _ __  \n";
    cout << "|  _| | '_ \\ / __| '__| | | | '_ \\| __| |/ _ \\| '_ \\ \n";
    cout << "| |___| | | | (__| |  | |_| | |_) | |_| | (_) | | | |\n";
    cout << "|_____|_| |_|\\___|_|   \\__, | .__/ \\__|_|\\___/|_| |_|\n\n\n";

    cout << "               <<< Switch Mode >>>                   \n\n";

    cout << "|  _ \\  ___  ___ _ __|___/|_| __ | |_(_) ___  _ __ \n";
    cout << "| | | |/ _ \\/ __| '__| | | | '_ \\| __| |/ _ \\| '_ \\\n";
    cout << "| |_| |  __/ (__| |  | |_| | |_) | |_| | (_) | | | |\n";
    cout << "|____/ \\___|\\___|_|   \\__, | .__/ \\__|_|\\___/|_| |_|\n";
    cout << "                        |___/|_|                      \n";
    cout << "\n";



    while (true) {
        cout << "\nChoose A Process:\n";
        cout << "1 - Encryption\n";
        cout << "2 - Decryption\n";
        cout << "0 - Exit\n";
        cout << "Choose Num: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            //Start rsma
            cout << "  _______       \n";
            cout << " /       \\      \n";
            cout << "|  LOCKED | 🔒  Encryption Activated\n";
            cout << " \\_______/      \n";
            cout << "   |   |        \n";
            cout << "   |___|        \n";
            //End rsma
            cout << "Enter The Text You Want To Encrypt: ";
            getline(cin, Encraption);
            cout << "Text After Encryption: " << craptionFun(Encraption) << endl;
        }
        else if (choice == 2) {
            //Start rsma
            cout << "  _______       \n";
            cout << " /       \\      \n";
            cout << "| UNLOCKED | 🔓  Decryption in progress...\n";
            cout << " \\_______/      \n";
            cout << "    \\   \\       \n";
            cout << "     \\___\\      \n";
            //End rsma
            cout << "Enter The Text You Want To Decrypt: ";
            getline(cin, Dcraption);
            cout << "Text After Decryption: " << decrypt(Dcraption) << endl;
        }
        else if (choice == 0) {
            //Start rsma
            cout << "\n";
            cout << "  ____                 _   ____             \n";
            cout << " / ___| ___   ___   __| | | __ ) _   _  ___ \n";
            cout << "| |  _ / _ \\ / _ \\ / _` | |  _ \\| | | |/ _ \\\n";
            cout << "| |_| | (_) | (_) | (_| | | |_) | |_| |  __/\n";
            cout << " \\____|\\___/ \\___/ \\__,_| |____/ \\__, |\\___|\n";
            cout << "                                 |___/      \n";
            cout << "\n";
            //End rsma
            break; // to End App
        }
        //to handel Eror
        else {
            //Start rsma
            cout << "\n";
            cout << "  _____   ____  _____  _____ \n";
            cout << " | ____| |  _ \\| ____|| ____|\n";
            cout << " |  _|   | | | |  _|  |  _|  \n";
            cout << " | |___  | |_| | |___ | |___ \n";
            cout << " |_____| |____/|_____||_____|\n";
            //End rsma
            cout << "\n[Error] Invalid choice. Please enter 1, 2, or 0 only.\n";
            continue; //to contnue choose befor choose false
        }

        cout << "\n---------------------------------\n";
    }

    return 0;
}