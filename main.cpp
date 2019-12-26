#include <iostream>
#include <stdlib.h>

void DecrementBalance(int value);
void IncrementBalance(int value);
void ShowBalance();

void LoginMenu();
void MainMenu();
void OptionsMenu(std::string option);
void VerifyAccount();

const int account_number = 12345;
const int account_pin = 54321;

float account_balance = 250.0f;

int verify_number;
int verify_pin;

int option_choice;
int menu_choice;

int main() {

    LoginMenu();
    MainMenu();

    switch (menu_choice) {
    case 1:
        ShowBalance();
        break;    
    case 2:
        OptionsMenu("Deposit");

        if (option_choice == 1) {
            IncrementBalance(20);
        }
        if (option_choice == 2) {
            IncrementBalance(40);
        }
        if (option_choice == 3) {
            IncrementBalance(60);
        }
        if (option_choice == 4) {
            IncrementBalance(100);
        }
        if (option_choice == 5) {
            IncrementBalance(200);
        }
        if (option_choice == 6) {
            return 0;
        } 
        break;
    case 3:
        OptionsMenu("Withdrawal");

        if (option_choice == 1) {
            DecrementBalance(20);
        }
        if (option_choice == 2) {
            DecrementBalance(40);
        }
        if (option_choice == 3) {
            DecrementBalance(60);
        }
        if (option_choice == 4) {
            DecrementBalance(100);
        }
        if (option_choice == 5) {
            DecrementBalance(200);
        }
        if (option_choice == 6) {
            return 0;
        }   
        break;
    }

    return 0;
}

void VerifyAccount() {
    if (account_number == verify_number) {
        if (account_pin == verify_pin) {
            std::cout << std::endl << "Log!" << std::endl;
        }
    }   
}

void LoginMenu() {
    std::cout << "Welcome!\n" << std::endl;
    std::cout << "Please enter your account number: ";
    std::cin >> verify_number;
    std::cout << std::endl << "Enter your PIN: ";
    std::cin >> verify_pin;

    VerifyAccount();

    system("clear||cls");
}

void MainMenu() {
    std::cout << "Main menu: " << std::endl;
    std::cout << "  1 - View my balance" << std::endl;
    std::cout << "  2 - Withdraw cash" << std::endl;
    std::cout << "  3 - Deposit funds" << std::endl;
    std::cout << "  4 - Exit" << std::endl;
    std::cout << "Enter a choice: ";
    std::cin >> menu_choice;

    system("clear||cls");
}

void OptionsMenu(std::string option) {
    std::cout << option << " options: " << std::endl;
    std::cout << "  1 - $20     4 - $100" << std::endl;
    std::cout << "  2 - $40     5 - $200" << std::endl;
    std::cout << "  3 - $60     6 - Cancel transaction" << std::endl;
    std::cout << "Choose a " << option << " option (1-6): ";
    std::cin >> option_choice;

    system("clear||cls");    
}

void IncrementBalance(int value) {
    account_balance += value;
    std::cout << "Deposit R$ " << value << std::endl;  
    ShowBalance();
}

void DecrementBalance(int value) {
    account_balance += value;
    std::cout << "Deposit R$ " << value << std::endl;  
    ShowBalance();
}

void ShowBalance() {
    std::cout << "Your balance amount: " << account_balance << std::endl;
}
