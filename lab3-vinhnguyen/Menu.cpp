#include "Menu.h"


Menu::Menu() {}

void Menu::add_option(string option)
{
    options.push_back(option);
}

int Menu::get_input() const
{
    int input = 0;
    do
    {
        display();
        cin >> input;
    } while (input < 1 || input > options.size());
    return input;
}
void Menu::display() const {
    for (int i = 0; i < options.size(); i++) {
        if (i == options.size() - 1) {
            cout << "x) " << options[i] << endl;
            return;
        }
        cout << i + 1 << ") " << options[i] << endl;
    }
}
