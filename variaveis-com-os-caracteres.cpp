#include <iostream>
using namespace std;

int main() {
    char input_char;

    cout << "Digite um caractere: ";
    cin >> input_char;

    cout << "'";
    cout << input_char;
    cout << "' - Decimal: " << (int)input_char;
    cout << " Octal: " << oct << (int)input_char;
    cout << " Hexadecimal: " << hex << (int)input_char;
    cout << endl;

    // Caracteres especiais
    char c_cedilla = 'ç';
    char a_tilde = 'ã';

    cout << "'" << c_cedilla << "' - Decimal: " << (int)c_cedilla << " Octal: " << oct << (int)c_cedilla << " Hexadecimal: " << hex << (int)c_cedilla << endl;
    cout << "'" << a_tilde << "' - Decimal: " << (int)a_tilde << " Octal: " << oct << (int)a_tilde << " Hexadecimal: " << hex << (int)a_tilde << endl;

    return 0;
}
