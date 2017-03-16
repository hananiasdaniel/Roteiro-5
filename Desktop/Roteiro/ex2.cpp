#include <iostream>
#include <string>

using namespace std;

class Invoice{
private:
    int num;
    int qt;
    float preco;
    string descricao;
public:
    Invoice(int, int, float, string);

    void setNum(int);  //altera a variavel
    void setQt(int);
    void setPreco(float);
    void setDescricao(string);

    int getNum(){
        return num;
    }
    int getQt(){
        return qt;
    }
    float getPreco(){
        return preco;
    }
    string getDescricao(){
        return descricao;
    }
    float getInvoiceAmount(int, float);
};

Invoice::Invoice(int n, int q, float p, string d){
    setNum(n);
    setQt(q);
    setPreco(p);
    setDescricao(d);
}

void Invoice::setNum(int n){
    if(n <= 0){
        cout << "Numero negativo. ERRO!" << endl;
    }else{
        num = n;
    }
}

void Invoice::setQt(int q){
    qt = q;
}


void Invoice::setPreco(float p){
    preco = p;

}

void Invoice::setDescricao(string d){
    descricao = d;
}

float Invoice::getInvoiceAmount(int q, float p){
    q = getQt();
    p = getPreco();

    if(q < 0){
        qt = 0;
    }
    if(p < 0){
        preco = 0.0;
    }

    return (float)qt * preco;
}

int main(){
    int num, qt;
    float preco;
    string descricao;
    float valorFatura = 0.0;

    cout << "digite o numero do produto" << endl;
    cin >> num;
    cout << "digite a quantidade de produtos" << endl;
    cin >> qt;
    cout << "digite o preco do produto" << endl;
    cin >> preco;
    cin.ignore();
    cout << "qual a descricao do produto" << endl;
    getline(cin, descricao);



    Invoice InvoiceTest(num, qt, preco, descricao); // OBJETO
    valorFatura = InvoiceTest.getInvoiceAmount(qt, preco);
    cout << "O codigo do produto e'" << InvoiceTest.getNum() << endl;
    cout << "A quantidade comprada e'" << InvoiceTest.getQt() << endl;
    cout << "O preco de cada produto e'" << InvoiceTest.getPreco() << endl;
    cout << "O produto e'" << InvoiceTest.getDescricao() << endl;
    cout << "A fatura da compra e'" << valorFatura << endl;

    return 0;
}
