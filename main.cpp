#include<iostream>
#include<string>

using namespace std;
string aux_comandos, comandos;

string Decod (string _aux);
string Tecla (int _tecla, const char _char);

int main () {
    int quantidade;
    string resultado;
    cout<< "Quantidade de Comandos: \n";
    cin>>quantidade;
    for (int i=0; i<quantidade; i++){
        cin >> aux_comandos;
        comandos += aux_comandos;
        aux_comandos = "";
    }
    resultado = Decod(comandos);
    cout << resultado;


    
}

string Decod (string _aux){
    string Cod;
    for(int i = 0; i < signed(_aux.length());i++){
        if(_aux[i] == '#'){        
            switch (_aux[i+1])
            {
            case '2':
                Cod += Tecla(2,_aux[i+3]);
                break;
            
            default:
                break;
            }

        }

    }
    return Cod;
}

string Tecla (int _tecla, const char _char){
    string Carac;
    switch (_tecla)
    {
    case 2:
        if(_char == '1') 
        Carac += "a";
        break;
    
    default:
        break;
    }
    return Carac;
}
