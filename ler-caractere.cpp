#include <iostream>
using namespace std;

int main() {
    char input_char;

    cout << "Digite um caractere: ";
    cin >> input_char;

    cout << "'";
    cout << input_char;
    cout << "' - Decimal: " << (int)input_char;
    cout << " Octal: " << oct << (int)input_char;  // Define a saída em base octal
    cout << " Hexadecimal: " << hex << (int)input_char;  // Define a saída em base hexadecimal
    cout << endl;

    return 0;
}
