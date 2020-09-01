#include <iostream>
#include <conio.h>

int age;

int main()
{
    std::cout << "How old are you? \n";
    std::cin >> age;
    system("cls");
    std::cout << "You are " << age << " years old.\n";
    if (age < 20) {
        std::cout << "Which means you are a teenager";
    }
    if (age >= 20) {
        std::cout << "Which means you are an adult";
    }
    _getch;
}