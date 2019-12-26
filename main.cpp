#include <iostream>
#include <stdlib.h>
#include <unistd.h>

void LoginMenu();
void MainMenu();
void OptionsMenu(std::string option);

struct AccountData
{
    const int account_number = 12345;
    const int account_pin = 54321;

    float account_balance = 250.0f;

    bool VerifyAccount(int number, int pin);

    void DecrementBalance(int value);
    void IncrementBalance(int value);
    void ShowBalance();    
};

AccountData acc;

int option_choice;
int menu_choice;

int main() {

    LoginMenu();

    while(menu_choice != 4) {
        MainMenu();

        switch (menu_choice) {
        case 1:
            acc.ShowBalance();
            break;    
        case 2:
            OptionsMenu("Withdrawal");

            if (option_choice == 1) {
                acc.DecrementBalance(20);
            }
            if (option_choice == 2) {
                acc.DecrementBalance(40);
            }
            if (option_choice == 3) {
                acc.DecrementBalance(60);
            }
            if (option_choice == 4) {
                acc.DecrementBalance(100);
            }
            if (option_choice == 5) {
                acc.DecrementBalance(200);
            }
            if (option_choice == 6) {
                return 0;
            }   
            break;
        case 3:
            OptionsMenu("Deposit");

            if (option_choice == 1) {
                acc.IncrementBalance(20);
            }
            if (option_choice == 2) {
                acc.IncrementBalance(40);
            }
            if (option_choice == 3) {
                acc.IncrementBalance(60);
            }
            if (option_choice == 4) {
                acc.IncrementBalance(100);
            }
            if (option_choice == 5) {
                acc.IncrementBalance(200);
            }
            if (option_choice == 6) {
                return 0;
            } 
            break;
        }
    }

    return 0;
}

void LoginMenu() {
    system("clear||cls");

    int get_number, get_pin;

    std::cout << "Welcome!\n" << std::endl;
    std::cout << "Please enter your account number: ";
    std::cin >> get_number;
    std::cout << std::endl << "Enter your PIN: ";
    std::cin >> get_pin;

    if(!acc.VerifyAccount(get_number, get_pin)) {
        LoginMenu();
    }
}

void MainMenu() {
    system("clear||cls");

    std::cout << "Main menu: " << std::endl;
    std::cout << "  1 - View my balance" << std::endl;
    std::cout << "  2 - Withdraw cash" << std::endl;
    std::cout << "  3 - Deposit funds" << std::endl;
    std::cout << "  4 - Exit" << std::endl;
    std::cout << "Enter a choice: ";
    std::cin >> menu_choice;
}

void OptionsMenu(std::string option) {
    system("clear||cls");    

    std::cout << option << " options: " << std::endl;
    std::cout << "  1 - $20     4 - $100" << std::endl;
    std::cout << "  2 - $40     5 - $200" << std::endl;
    std::cout << "  3 - $60     6 - Cancel transaction" << std::endl;
    std::cout << "Choose a " << option << " option (1-6): ";
    std::cin >> option_choice;
}

bool AccountData::VerifyAccount(int number, int pin) {
    if (account_number == number && account_pin == pin) {
        return true; 
    } else {
        return false;
    }
}

void AccountData::IncrementBalance(int value) {
    account_balance += value;
    std::cout << "\n\n" << "Deposit R$ " << value << std::endl;  
    ShowBalance();
}

void AccountData::DecrementBalance(int value) {
    if (account_balance > value) {
        account_balance -= value;
        std::cout << "\n\n" << "Withdraw R$ " << value << std::endl;      
    }
    else {
        std::cout << "\n\n" << "You have no balance to perform this transaction!" << std::endl;      
    }
 
    ShowBalance();
}

void AccountData::ShowBalance() {
    std::cout << "\n\n" << "Your balance amount: " << account_balance << std::endl;
    sleep(4);
}
