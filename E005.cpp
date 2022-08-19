#include <iostream>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");

    int num, mult;


    cout << "Digite o numero a ser mostrada a tabuada do 1 ao 10: ";
    cin >> num;

    for (mult=1;mult<=10;mult++) {
        cout << mult << " x " << num << " = " << mult*num << endl;
    }

    return 0;
}
