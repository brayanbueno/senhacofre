  #include <iostream>
  #include <iomanip>
  #include <cstdlib>
  #include<fstream>

 using namespace std;

 main()
{



    const int max=80;
    char buff[max];

    ifstream fin("MASTERMIND.TXT");

    while(fin)
    {
        fin.getline(buff,max);
        cout<<buff<<endl;
    }

system("pause");
system("cls");


    int n;
    int opcao;


      while(n)
      {
          cout<<endl<<endl<<endl<<endl;
          cout<<setfill('.');
          cout<<"AJUDA      "<<setw(15)<<"CODIGO (1)"<<endl;
          cout<<"JOGAR      "<<setw(15)<<"CODIGO (2)"<<endl;
          cout<<"SAIR       "<<setw(15)<<"CODIGO (3)"<<endl;
          cout<<endl<<endl<<endl<<endl;
          cout<<endl;
          cout<<"DIGITE SUA OPCAO : ";
          cin>>opcao;
          if(opcao==3)
          {
            system("cls");
            ifstream fin("SAIDA.TXT");
          while(fin)
           {
              fin.getline(buff,max);
            cout<<buff<<endl;
            }
            system("pause");
            system("cls");
            break;
         }


          cout<<endl<<endl<<endl<<endl;

          while(opcao>2||opcao<=0)
          {
          system("cls");
          cout<<endl<<endl<<endl<<endl;
          cout<<setfill('.');
          cout<<"AJUDA      "<<setw(15)<<"CODIGO (1)"<<endl;
          cout<<"JOGAR      "<<setw(15)<<"CODIGO (2)"<<endl;
          cout<<"SAIR       "<<setw(15)<<"CODIGO (3)"<<endl;
          cout<<endl<<endl<<endl<<endl;
              cout<<"ESTA OPCAO NAO EXISTE : ";
              cout<<endl<<endl<<endl<<endl;
              cout<<"DIGITE NOVAMENTE SUA OPCAO DESEJADA : ";
              cin>>opcao;
           if(opcao==3)
          {
            system("cls");
            ifstream fin("SAIDA.TXT");
          while(fin)
           {
              fin.getline(buff,max);
            cout<<buff<<endl;
            }
            system("pause");
            }
          system("cls");
            break;

          switch(opcao)
          {

        case 1:
            system("cls");

            system("cls");
                break;
         case 2:
            system("cls");

            system("cls");
                break;

          }
      }

  }

}

