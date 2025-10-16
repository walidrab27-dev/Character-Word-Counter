/*
 * Project : Character & Word Counter
 * Author  : Walid Rabei
 * Date    : 16.10.2025
 */

#include <iostream>
#include <string>
using namespace std;

// 🎨 ANSI color codes
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

int main()
{
    string st;
    int charCount = 0, wordCount = 0, letterCount = 0;

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    cout << CYAN << "==============================\n";
    cout << "   Character & Word Counter\n";
    cout << "==============================\n\n"
        << RESET;

    cout << YELLOW << "Enter your text: " << RESET;
    getline(cin, st);

    if (st.empty())
    {
        cout << RED << "Empty string!" << RESET << endl;
        return 0;
    }

    for (int i = 0; i < st.size(); i++)
    {
        charCount++;

        if (st[i] != ' ')
            letterCount++;

        if (st[i] == ' ' && i > 0 && st[i - 1] != ' ')
            wordCount++;
    }

    if (!st.empty() && st.back() != ' ')
        wordCount++;

    cout << endl;
    cout << GREEN << "Words Count:      " << wordCount << RESET << endl;
    cout << BLUE << "Letters Count:    " << letterCount << RESET << endl;
    cout << YELLOW << "Total Characters: " << charCount << RESET << endl;

    cout << CYAN << "\n==============================\n"
        << RESET;

    return 0;
}