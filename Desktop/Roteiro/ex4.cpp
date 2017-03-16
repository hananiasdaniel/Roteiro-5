#include <iostream>
#include <string>

using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
    int tel;
public:
    Pessoa(string);
    Pessoa(string, int, int);

    void setNome(string);
    void setIdade(int);
    void setTel(int);

    string getNome(){
        return nome;
    }
    int getIdade(){
        return idade;
    }
    int getTel(){
        return tel;
    }
};

Pessoa::Pessoa(string n){
    setNome(n);
}
Pessoa::Pessoa(string n, int i, int t){
    setNome(n);
    setIdade(i);
    setTel(t);
}

void Pessoa::setNome(string n){
    nome = n;
}

void Pessoa::setIdade(int i){
    if(i < 0){
        cout << "idade errada!" << endl;
    }else{
        idade = i;
    }
}

void Pessoa::setTel(int t){
    if(t < 0){
        cout << "Telefone invalido" << endl;
    }else{
        tel = t;
    }
}

int main(){
    string nome;
    int idade, telefone;

    cout << "Qual o nome da pessoa?" << endl;
    cin >> nome;
    cout << "Qual a idade?" << endl;
    cin >> idade;
    cout << "Qual o telefone da pessoa?" << endl;
    cin >> telefone;
    cout << endl;
    Pessoa Pessoa1(nome, idade, telefone);

    cout << "Qual o nome da pessoa?" << endl;
    cin >> nome;
    cout << "Qual a idade?" << endl;
    cin >> idade;
    cout << "Qual o telefone da pessoa?" << endl;
    cin >> telefone;
    cout << endl;
    Pessoa Pessoa2(nome, idade, telefone);

    cout << "Qual o nome da pessoa?" << endl;
    cin >> nome;
    cout << "Qual a idade?" << endl;
    cin >> idade;
    cout << "Qual o telefone da pessoa?" << endl;
    cin >> telefone;
    cout << endl;
    Pessoa Pessoa3(nome, idade, telefone);

    cout << Pessoa1.getNome() << " tem " << Pessoa1.getIdade() << " anos e seu telefone eh: " << Pessoa1.getTel() << endl;
    cout << Pessoa2.getNome() << " tem " << Pessoa2.getIdade() << " anos e seu telefone eh: " << Pessoa2.getTel() << endl;
    cout << Pessoa3.getNome() << " tem " << Pessoa3.getIdade() << " anos e seu telefone eh: " << Pessoa3.getTel() << endl;

    return 0;
}
