#include<iostream>
#include<string>
#include <stdlib.h>

using namespace std;

string dois = "abc", tres = "def", quatro = "ghi", cinco = "jkl", seis = "mno", sete = "pqrs" , oito = "tuv", nove =  "wxyz"; 

string Decod (string _aux);


int main () {
    string aux_comandos, comandos;
    int quantidade;
    string resultado;
    cout<<"Quantidade de Comandos: \n";
    cin>>quantidade;
    if(quantidade==0){
      cout<<"Quantidade inválida \n";
      exit(0);
    }
    for (int i=0; i<quantidade; i++){
        cin >> aux_comandos;
        comandos += aux_comandos;
        aux_comandos = "";
    }
    resultado = Decod(comandos);
    cout << resultado << endl; 
}

string Decod (string _aux){
    string Cod,aux;
    int aux_num;
    for(int i = 0; i < signed(_aux.length());i++){
        if(_aux[i] == '#'){     
            switch (_aux[i+1])
            {  
            case '2':
             aux = _aux[i+3];
             aux_num = atoi(aux.c_str());
             Cod += dois[aux_num-1];
            break;
            case '3':
             aux = _aux[i+3];
             aux_num = atoi(aux.c_str());
             Cod += tres[aux_num-1];
            break;
            case '4':
             aux = _aux[i+3];
             aux_num = atoi(aux.c_str());
             Cod += quatro[aux_num-1];
            break;
            case '5':
             aux = _aux[i+3];
             aux_num = atoi(aux.c_str());
             Cod += cinco[aux_num-1];
            break;
            case '6':
             aux = _aux[i+3];
             aux_num = atoi(aux.c_str());
             Cod += seis[aux_num-1];
            break;
            case '7':
             aux = _aux[i+3];
             aux_num = atoi(aux.c_str());
             Cod += sete[aux_num-1];
            break;
            case '8':
             aux = _aux[i+3];
             aux_num = atoi(aux.c_str());
             Cod += oito[aux_num-1];
            break;
            case '9':
             aux = _aux[i+3];
             aux_num = atoi(aux.c_str());
             Cod += nove[aux_num-1];
            break;
            default:
            break;
            }
            int aux_tamanho = Cod.length()-1;
            if(!Cod[aux_tamanho]){
             cout<<"Valor invalido \n";
             exit(0);
            }
                
        }

    }
    return Cod;
}

