#include <iostream>
using namespace std;

void StampaMacchina(string Modello, string Marca, int Anno){
    cout << "Il modello della macchina è " << Modello << endl;
    cout << "La marca è " << Marca << endl;
    cout << "L'anno di produzione è " << Anno << endl;
}

class Car{
    public:
        string marca;
        string modello;
        int annata;
};

int main(){
    Car car;

    cout << "Inseriere marca macchina: ";
    cin >> car.marca;
    cout << "Inseriere modello macchina: ";
    cin >> car.modello;
    cout << "Inseriere anno creazione: ";
    cin >> car.annata;
 

    StampaMacchina(car.marca, car.modello, car.annata);

    Car car2;

    cout << "Inseriere marca macchina: ";
    cin >> car2.marca;
    cout << "Inseriere modello macchina: ";
    cin >> car2.modello;
    cout << "Inseriere anno creazione: ";
    cin >> car2.annata;

  
    StampaMacchina(car2.marca, car2.modello, car2.annata);
}
