#include <iostream>

using namespace std;

int main() {
    float prezzo, sconto;
    cout << "Inserire spesa totale non scontata: ";
    cin >> prezzo;

    if(prezzo > 300){
        sconto = (prezzo - 300) * 20 / 100;
        //300 * 10 / 100 = 30
        sconto += 30;
    } else{
        sconto = prezzo * 10 / 100;
    }

    cout << "Lo sconto è di " << sconto << "€" << endl;
    cout << "Il prezzo da pagare è " << prezzo- sconto << "€";



    return 0;
}
