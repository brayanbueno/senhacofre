 #include "entrada.h"
 #include "menu.h"
 #include "ajuda.h"
 #include "saida.h"
 #include "jogar.h"
 #include "placar.h"
 #include <iostream>
 #include <iomanip>
 #include <cstdlib>
 #include <fstream>
 #include <conio.h>

using namespace std;

int main(void)

{
    int num;
    jogar master;
    char ch;
    int n;
    entrada tela1;
    menu tela2;
    ajuda tela3;
    saida tela4;
    tela1.printtela();
    cout<<" PRESSIONE ENTER PARA IR AO MENU : ";
    ch=getche();
    if(ch!='13')
    inicio:
    system("cls");
    tela2.printmenu();
   cout<<endl<<endl<<endl<<endl;
   cout<<" DIGITE A OPCAO DESEJADA : ";
   cin>>n;
   system("cls");
   cout<<endl;

   if(n==1)
   {
     tela3.printajuda();
    cout<<endl<<endl;
    cout<<" PRESSIONE ENTER PARA RETORNAR AO MENU : ";
    ch=getche();
    if(ch!='13')
    system("cls");
    goto inicio;
   }

 if(n==2)
  {
    master.inicio(num);
    cout<<endl<<endl;
    cout<<" PRESSIONE ENTER PARA RETORNAR AO MENU : ";
    ch=getche();
    if(ch!='13')
    system("cls");
    goto inicio;
  }
if(n==3)
   {
    string extempo;
    string aux;
    string exnome;
    string ranking;
    string temp; // dado temporario
    ifstream arq ("ranking.txt");
    int i, numPessoa = 0;
    jogador pessoa[15]; // numero de jogadores que aparecerão
    if(arq.is_open()) {
        while (getline(arq, ranking)) {
            temp = " ";
            for(i = 0; i< ranking.size(); i++) {
                if (ranking[i] != ' ') {
                    temp = temp + ranking[i];
                } else{
                    break;
                }
            }
            pessoa[numPessoa].nome = temp;
            temp = "";
            for(i = i+1; i < ranking.size();i++){
                    if (ranking[i] != ' ') {//se nao tiver um espaço em branco, ele soma as strings, caso contrario, ele pula
                    temp = temp + ranking[i];
                } else{
                    break;
                }
            }
            pessoa[numPessoa].pontos = temp;
            temp = "";
            for(i = i+1; i < ranking.size();i++){
                temp = temp + ranking[i];
            }
            pessoa[numPessoa].tempo = temp;
            numPessoa++;

        }


    } else {
        cout << "Arquivo invalido!";
    }
    arq.close();
//ORDENAMENTO DE TENTATIVAS
   // numPessoa--;
    for (int i=0; i<numPessoa; i++){
        for(int j=1; j<numPessoa; j++){
            if (pessoa[j-1].pontos > pessoa[j].pontos){
                // FOMOS OBRIGADOS A ORDENAR TODOS OS OBJETOS DA CLASSE
                exnome = pessoa[j-1].nome;
                aux = pessoa[j-1].pontos;
                extempo = pessoa[j-1].tempo;

                pessoa[j-1].pontos = pessoa[j].pontos;
                pessoa[j-1].nome = pessoa[j].nome;
                pessoa[j-1].tempo = pessoa[j].tempo;

                pessoa[j].pontos = aux;
                pessoa[j].nome = exnome;
                pessoa[j].tempo = extempo;

            }
        }
    }
//IMPRIMINDO SEPARADAMENTE
    cout << "TOP 10 MELHORES COLOCADOS " << endl<< endl;
    for (int i=0; i</*numPessoa*/10; i++){


        cout << "Nome: " << pessoa[i].nome << endl;
        cout << "Tentativas:" << pessoa[i].pontos << endl;
        cout << "Tempo: " << pessoa[i].tempo << endl;
        cout << "==============================" << endl;

    }

    cout<<endl<<endl;
    cout<<" PRESSIONE ENTER PARA RETORNAR AO MENU : ";
    ch=getche();
    system("cls");
    goto inicio;
}

   if(n==4)
   {
     tela4.printsaida();
    cout<<endl<<endl;
    cout<<" PRESSIONE ENTER PARA SAIR : ";
    ch=getche();


   }


}
