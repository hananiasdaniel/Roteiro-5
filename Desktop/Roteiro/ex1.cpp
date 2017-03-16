#include <iostream>

using namespace std;

class Data{
private:
	int dia;
	int mes;
	int ano;
public:
	Data(int, int, int); //metodo contrutor

	void setDia(int);
	void setMes(int);
	void setAno(int);

	int getDia(){
		return dia;
	}
	int getMes(){
		return mes;
	}
	int getAno(){
		return ano;
	}

	void avancarDia(int, int, int);

};

Data::Data(int d, int m, int a){ //metodo construtor
	setDia(d);
	setMes(m);
	setAno(a);

	if(m == 2){
		if(d <= 28){
			setDia(d);
		}
	}
    if(m == 4 || m == 6 || m == 9 || m == 11){ //checa os meses com 30 dias
        if(d <= 30){
            setDia(d);
			}
    }
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){ //checa os meses com 31 dias
        if(d <= 31){
            setDia(d);
			}
    }
	}


void Data::setDia(int d){
if (d > 0 && d < 32){
		dia = d;
	}else{
		cout << "Dia invalido" << endl;
	}
}

void Data::setMes(int m){
	if(m > 0 && m < 13){
		mes = m;
	}else if(m < 0 && m > 12){
		cout << "Mes invalido" << endl;
	}
}
void Data::setAno(int a){
	if (a > 0){
		ano = a;
	}
}

void Data::avancarDia(int, int, int){
	int d;
	int m;
	int a;

	d = getDia();
	m = getMes();
	a = getAno();

	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
			if(d == 31){
				setDia(1);
				setMes(m + 1);
			}else if(d <= 30){
                    setDia(d + 1);
			}
	}
	if(m == 2){
		if(d == 28){
            setDia(1);
			setMes(m + 1);
		}else if(d <= 27){
                setDia(d + 1);
		}
	}
	if(m == 4 || m == 6 || m == 9 || m == 11){
			if(d == 30){
				setDia(1);
                setMes(m + 1);
			}else if(d < 30){
				setDia(d + 1);
			}
	}
	if(m == 12 && d == 31){
			setDia(1);
			setMes(1);
			setAno(a + 1);
	}
}


int main(){
	int dia, mes, ano;

	cout << "digite o dia" << endl;
	cin >> dia;
	cout << "digite o mes" << endl;
	cin >> mes;
	cout << "digite o ano" << endl;
	cin >> ano;

	//Data(dia, mes, ano);

	Data dataTest(dia, mes, ano); // objeto
	cout << dataTest.getDia() << "/" << dataTest.getMes() << "/" << dataTest.getAno() << endl;

	dataTest.avancarDia(dia, mes, ano);
	cout << "O proximo dia e': ";
	cout << dataTest.getDia() << "/" << dataTest.getMes() << "/" << dataTest.getAno() << endl;

	return 0;
}
