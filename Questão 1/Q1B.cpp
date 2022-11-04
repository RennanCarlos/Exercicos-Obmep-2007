#include <iostream>
#include <string>

using namespace std;

bool Verificar(int n){
    string numero = to_string(n);
    bool tt = true;
    for(int i = 0; i < numero.length();i++){
       if(numero[i] == '1' || numero[i] == '2'){
           //cout << "\nTeste2\n";
       } else {
           //cout << "\nTeste\n";
           tt = false;
           break;
       }
    }
    if(tt)
       return true;
    else
       return false;
}

int main(){
	int numero = 9;
    while(true){
        //cout << "Testando com: " << numero << "\n";
        if(Verificar(numero)){
            printf("Menor numero encontrado: %i \n", numero);
            break;
        }
        numero += 9;
    }
    system("pause");
	return 0;
}
