#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Empregado{
private:
    string nome;
    string sobrenome;
    float salario;
public:
    Empregado(string, string, float);

    void setNome(string);
    void setSobrenome(string);
    void setSalario(float);

    string getNome(){
        return nome;
    }
    string getSobrenome(){
        return sobrenome;
    }
    float getSalario(){
        return salario;
    }
};

Empregado::Empregado(string n, string sn, float s){
    setNome(n);
    setSobrenome(sn);
    setSalario(s);
}
void Empregado::setNome(string n){
    nome = n;
}

void Empregado::setSobrenome(string sn){
    sobrenome = sn;
}

void Empregado::setSalario(float s){
    if(s < 0){
        cout << "O salario esta ERRADO" << endl;
    }else{
        salario = s;
    }
}

int main (){
    string nome, sobre;
    float salario;



    cout << "Digite o nome do trabalhador 1:" << endl;
    cin >> nome;
    cout << "Digite o sobrenome do trabalhor 1:" << endl;
    cin >> sobre;
    cout << "Digite o salario mensal 1:" << endl;
    cin >> salario;
    cout << endl;

    Empregado Empregado1(nome, sobre, salario);


    cout << "Digite o nome do trabalhador 2:" << endl;
    cin >>nome;
    cout << "Digite o sobrenome do trabalhor 2:" << endl;
    cin >> sobre;
    cout << "Digite o salario mensal 1:" << endl;
    cin >> salario;
    cout << endl;

    Empregado Empregado2(nome, sobre, salario);

    cout << "Nome           :  " << Empregado1.getNome() << " " << Empregado1.getSobrenome() << endl;
    cout << "Salario Mensal :  " << Empregado1.getSalario() << endl;
    cout << "Salario Anual  :  " <<(Empregado1.getSalario() * 12) << endl;
    cout << endl;
    cout << "Nome           :  " << Empregado2.getNome() << " " << Empregado2.getSobrenome() << endl;
    cout << "Salario Mensal :  " << Empregado2.getSalario() << endl;
    cout << "Salario Anual  :  " <<(Empregado2.getSalario() * 12) << endl;

    cout << (Empregado1.getSalario() * 0,1) << endl;
    cout << "AGORA HAVERA UM ACRESCIMO DE 10% NOS SALARIOS." << endl;
    cout << "Nome           :  " << Empregado1.getNome() << " " << Empregado1.getSobrenome() << endl;
    cout << "Salario Mensal :  " << (Empregado1.getSalario() + (Empregado1.getSalario() * 0.1)) << endl;
    cout << "Salario Anual  :  " << (Empregado1.getSalario() + (Empregado1.getSalario() * 0.1)) * 12 << endl;
    cout << endl;
    cout << "Nome           :  " << Empregado2.getNome() << " " << Empregado2.getSobrenome() << endl;
    cout << "Salario Mensal :  " << (Empregado2.getSalario() + (Empregado2.getSalario() * 0.1)) << endl;
    cout << "Salario Anual  :  " << (Empregado2.getSalario() + (Empregado2.getSalario() * 0.1)) * 12 << endl;
    cout << endl;







    return 0;
}
