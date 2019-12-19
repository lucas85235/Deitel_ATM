#include <iostream>
#include <stdlib.h>

int main() {

    const int account_number = 12345;
    const int account_pin = 54321;

    float account_balance = 250.0f;

    int verify_number;
    int verify_pin;

    std::cout << "Welcome!\n" << std::endl;
    std::cout << "Please enter your account number: ";
    std::cin >> verify_number;
    std::cout << std::endl << "Enter your PIN: ";
    std::cin >> verify_pin;

    if (account_number == verify_number) {
        if (account_pin == verify_pin) {
            std::cout << std::endl << "Log!" << std::endl;
        }
    }

    system("clear||cls");

    int menu_choice;

    std::cout << "Main menu: " << std::endl;
    std::cout << "  1 - View my balance" << std::endl;
    std::cout << "  2 - Withdraw cash" << std::endl;
    std::cout << "  3 - Deposit funds" << std::endl;
    std::cout << "  4 - Exit" << std::endl;
    std::cout << "Enter a choice: ";
    std::cin >> menu_choice;

    system("clear||cls");

    if (menu_choice == 4) {
        return 0;
    }
    else if (menu_choice == 3) {
        int withdraw_choice;
        std::cout << "Withdrawal options: " << std::endl;
        std::cout << "  1 - $20     4 - $100" << std::endl;
        std::cout << "  2 - $40     5 - $200" << std::endl;
        std::cout << "  3 - $60     6 - Cancel transaction" << std::endl;
        std::cout << "Choose a withdrawal option (1-6): ";
        std::cin >> withdraw_choice;

        system("clear||cls");

        if (withdraw_choice == 1) {
            account_balance -= 20;
            std::cout << "Withdraw R$ 20,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (withdraw_choice == 2) {
            account_balance -= 40;
            std::cout << "Withdraw R$ 40,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (withdraw_choice == 3) {
            account_balance -= 60;
            std::cout << "Withdraw R$ 60,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (withdraw_choice == 4) {
            account_balance -= 100;
            std::cout << "Withdraw R$ 100,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (withdraw_choice == 5) {
            account_balance -= 200;
            std::cout << "Withdraw R$ 200,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (withdraw_choice == 6) {
            return 0;
        }       
    }
    else if (menu_choice == 2) {
        int deposit_choice;
        std::cout << "Deposit options: " << std::endl;
        std::cout << "  1 - $20     4 - $100" << std::endl;
        std::cout << "  2 - $40     5 - $200" << std::endl;
        std::cout << "  3 - $60     6 - Cancel transaction" << std::endl;
        std::cout << "Choose a Deposit option (1-6): ";
        std::cin >> deposit_choice;

        system("clear||cls");

        if (deposit_choice == 1) {
            account_balance += 20;
            std::cout << "Deposit R$ 20,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (deposit_choice == 2) {
            account_balance += 40;
            std::cout << "Deposit R$ 40,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (deposit_choice == 3) {
            account_balance += 60;
            std::cout << "Deposit R$ 60,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (deposit_choice == 4) {
            account_balance += 100;
            std::cout << "Deposit R$ 100,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (deposit_choice == 5) {
            account_balance += 200;
            std::cout << "Deposit R$ 200,00" << std::endl;  
            std::cout << "Your balance amount: " << account_balance << std::endl;
        }
        if (deposit_choice == 6) {
            return 0;
        } 
    }
     else if (menu_choice == 1) {
        std::cout << "Your balance amount: " << account_balance << std::endl;
    }

    return 0;
}
