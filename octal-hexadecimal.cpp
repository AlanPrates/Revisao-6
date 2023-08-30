#include <iostream>
using namespace std;

int main() {
    for (char a = '0'; a <= '9'; a++) {
        cout << "'";
        cout << a;
        cout << "' - Decimal: " << (int)a;
        cout << " Octal: " << oct << (int)a;  // Define a saída em base octal
        cout << " Hexadecimal: " << hex << (int)a;  // Define a saída em base hexadecimal
        cout << endl;
    }

    return 0;
}
