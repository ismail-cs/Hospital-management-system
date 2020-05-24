#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<fstream>

using namespace std;

void intro();
void enter();
void login();
void menu();
void Register();
void loginD();
void loginP();
void doctor1();



void patient_entry();
void patient_information();
void doctor_information();
void hospital_information();
void schedule();



void appointment();
void information();
void doctorLogin();
void patientLogin();
void hospital();
void doctor();

void shanaj();
void waliullah();
void mubasher();
void anayet();
void washikurzaman();
void nuruzaman();
void nusrat();
void kamruzaman();
void nakib();


class entry
{
protected:
    string name;
    int age;
    string bloodGroup;
    string address;

public:

};

int main()

{
    intro();

    getch();
}




void patient_entry()
{
    string name,bath,blood,gen,date,pas;
    int age,phone;
    system("cls");

    ofstream file;
     file.open("patient_information.txt",ios::out|ios::app);


    cout<<"\n\n\n\n\t\t\t\t\t       patient entry ";
    cout<<"\n\t\t\t\t\t   ===================== ";
     cout<<"\n\n\n\n\t\t\t\t patient name : ";
     cin>>name;
     cout<<"\n\t\t\t\t set a password : ";
     cin>>pas;
     cout<<"\n\t\t\t\t patient gender : ";
     cin>>gen;
     cout<<"\n\t\t\t\t patient age : ";
     cin>>age;
     cout<<"\n\t\t\t\t date of bath : ";
     cin>>bath;
     cout<<"\n\t\t\t\t blood group : ";
     cin>>blood;
     cout<<"\n\t\t\t\t phone number : ";
     cin>>phone;
     cout<<"\n\t\t\t\t entry date : ";
     cin>>date;
     cout<<"\n\n\n\t\t\t\t\t  all data is store ";
     //file<<"\n\n       name        password        gender       age         birth date         blood group          phone number            entry date"<<endl;
     //file<<"\n --------        -------------        --------            ------           ----------             ----------          ----------            -----------   "<<endl;
     file<<"\t"<<name<<"\t\t"<<pas<<"\t\t"<<gen<<"\t\t"<<age<<"\t\t"<<bath<<"\t\t"<<blood<<"\t\t"<<"0"<<phone<<"\t\t"<<date<<endl;

     file.close();

     char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }

}





void  patient_information()
{
    string line;
    system("cls");
     ifstream file1("patient_information.txt");

     while(getline(file1,line))
     {
         cout<<line<<endl;
     }
     char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t ";
     cout<<"press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }

}








void  doctor_information()
{

      system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\t\             doctor information  ";
    cout<<"\n\t\t\t\t\t\t  ======================  ";
    cout<<"\n\n";
    cout<<"\n                                  id                name                       sector ";
    cout<<"\n                                ------           -----------               ---------------              ";
    cout<<"\n\n\t\t\t\t 3476.        Dr shanaj parvin       cardiologist specialist          "<<endl<<endl;
    cout<<"\t\t\t\t 8436.        Dr waliullah           bone specialist                    "<<endl<<endl;
    cout<<"\t\t\t\t 8956.        Dr mubasher            Anesthesiologists specialist      "<<endl<<endl;
    cout<<"\t\t\t\t 3487 .       Dr anayet hussan       Surgeons specialist                 "<<endl<<endl;                     // Colon and Rectal
    cout<<"\t\t\t\t 2398.        Dr washikurzaman       Critical Medicine specialist       "<<endl<<endl;                    //Care
    cout<<"\t\t\t\t 1875.        Dr nuruzaman           Dermatologists specialist        "<<endl<<endl;
    cout<<"\t\t\t\t 7397.        Dr nusrat zahan        Endocrinologists specialist    "<<endl<<endl;
    cout<<"\t\t\t\t 7295.        Dr kamruzaman          Medicine Specialist specialist  "<<endl<<endl;             //Emergency
    cout<<"\t\t\t\t 2863.        Dr nakib               Gastroenterologists specialist   "<<endl<<endl;
     //char ch;
     int in;
     cout<<"\n\n\n\t\t\t\t enter id : ";
     cin>>in;

     switch(in)
     {
     case 3476:
         {
              int count=1;
              system("cls");
              shanaj();
                break;
         }
     case 8436:
         {
              system("cls");
             waliullah();
              break;
         }
      case 8956:
         {
              system("cls");
              mubasher();
               break;
         }

      case 3487:
         {
              system("cls");
             anayet();
              break;
         }

      case 2398:
         {
              system("cls");
              washikurzaman();
               break;
         }

      case 1875:
         {
              system("cls");
              nuruzaman();
               break;
         }
      case 7397:
         {
              system("cls");
              nusrat();
               break;
         }
      case 7295:
         {
              system("cls");
              kamruzaman();
               break;
         }
      case 2863:
         {
              system("cls");
              nakib();
               break;
         }
      default:
        cout<<"wrong choice";
     }
     getch();



}


void hospital_information()
{
       system("cls");
    cout<<"\n\n\n\t\t\t\t\t                    DHAKA MEDICALE HOSPITAL  ";
    cout<<"\n\t\t\t\                       _______________________________________________ ";

         cout<<"\n\n\n\n\n\t\t\t Type          : Public medical hospital ";
         cout<<"\n\n\t\t\t Established   : 1946 ";
         cout<<"\n\n\t\t\t Principal     : Khan Abul Kalam Azad ";
         cout<<"\n\n\t\t\t Director      : Brig. Gen. Mohammad Nasir Uddin[1] ";
         cout<<"\n\n\t\t\t Location      : Ramna, Dhaka, Bangladesh ";
         cout<<"\n\n\t\t\t Campus	       : 25 acres (10 ha) ";
         cout<<"\n\n\t\t\t Language      : English ";
         cout<<"\n\n\t\t\t Website       : www.dmc.gov.bd ";
         cout<<"\n\n\n\t\t\t phone number  : 01768793284 ";
         cout<<"\n\n\t\t\t               : 01674952841 ";
         cout<<"\n\n\t\t\t               : 01873096257 ";



         char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t ";
     cout<<"press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            patientLogin();
        }
     }



}


 void intro()                 //page 1
{

    char ch;
    cout<<endl<<endl<<endl;
    cout<<"                                         ===================================== ";
    cout<<"\n                                         |                                   | ";
    cout<<"\n                                         |  # HOSPITAL MANAGEMENT SYSTEM #   |";
    cout<<"\n                                         |                                   |";
    cout<<"\n                                         ===================================== ";

    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"                      In this present world,any infectious disease can spread very quickly. If we want    ";
     cout<<"\n                            to prevent an infectious disease, then a temporary hospital has to    ";
     cout<<" \n                              be built quickly. If we built a temporary hospital then first         ";
            cout<<" \n                           thing we need a hospital management software. So that we can manage  \n\t\t\t\t";
                   cout<<" \n                                     the whole hospital activities. besides, a hospital ";
                        cout<<"\n                                     can be managed by a developed management software.";


    cout<<"\n\n\n\n\n\n\n\n           # The people who worked to create this software  "<<endl;
    cout<<"\n          _____________________________________________  ";
    cout<<"\n         |           name                       id     |   ";
    cout<<"\n         |          ------                    ------   | ";
    cout<<"\n         |  1.   MD. ISMAIL KHALIL          20-42583-1 | ";
    cout<<"\n         |  2.   MD. ABDUL HAMID TANIM      20-42602-1 |";
    cout<<"\n         |  3.   SHASWATA ROY               20-42618-1 |";
    cout<<"\n         |  4.   JAMILUR REZA SAYED         20-42579-1 |";
    cout<<"\n         |_____________________________________________|  ";

    cout<<"\n\n\n\n\t\t\t\t\t\t\t\t     press 'e'  to enter : ";
    cin>>ch;

    switch(ch)
    {
    case 'e':
        {
           enter();

        }
        break;

    default:
        cout<<"\n\n\t\t\t\t\t\t Invalid choice \n";
    }


}


void enter()                                // page 2
{
    int i;
    system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t  *******   WELCOME TO DHAKE MEDICAL COLLEGE HOSPITAL  *******  ";
    cout<<"\n\t\t\t    _________________________________________________________________________ ";

    cout<<"\n\n\n\t\t\t\t\t\t          1. login ";
    cout<<"\n\n\n\n\n\n\n\t\t\t         press '1' and enter to go login page ";
    cout<<"\n\n\n\n\n\t                         enter : ";
    cin>>i;

    switch(i)
    {
    case 1:
        {
            login();
            break;
        }



    default:
        cout<<" wrong press ";
    }


}

void login()                                                        // page 3
{
    int a;
    system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\t\t  login page ";
    cout<<"\n\t\t\t\t\t        ==============";

    cout<<"\n\n\n\n\t\t\t\t\t  1. patient ";
    cout<<"\n\n\t\t\t\t\t  2. doctor ";
    cout<<"\n\n\t\t\t\t\t  3. register ";
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                  press any option and enter to go login ";
    cout<<"\n\n\n\t\t\t\t\t  enter : ";
    cin>>a;
    switch(a)
    {
    case 1:
        {
            loginP();
           break;
        }
    case 2:
        {
            loginD();
           break;
        }
    case 3:
        {
            Register();
           break;
        }
    default:
        cout<<"\n\n\n\t\t\t\t\t  probably you press wrong "<<endl;
        char ch;
        cout<<"\n\t\t\t\t\t  press 'r' to refresh : ";
        cin>>ch;

        switch(ch)
        {
            case 'r':
            system("cls");
            login();
        }


    }


}

void loginD()                                                                      //page 4
{
    int count=0;
     string user,pas,u,p;
     system("cls");
     cout<<"\n\n\n\t\t\t\t\t  please enter the username and password  ";
     cout<<"\n\t\t\t              ______________________________________________ ";
     cout<<" \n\n\n\t\t\t USERNAME : ";
     cin>>user;
     cout<<" \n\n\t\t\t PASSWORD : ";
     cin>>pas;

    ifstream input("doctor.txt");
        while(input>>u>>p)
        {
                if(user==u && pas==p)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                system("cls");
                 doctorLogin();

        }


    else
        cout<<"\n\n\n\n\n\n\t\t\t your username or password is wrong ";
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t       press 'r' to refresh : ";
        char gh;
        cin>>gh;

        switch(gh)
        {
        case 'r':

            {
                system("cls");
                loginD();
            }
        }

}


void loginP()           // page 4
{
    int count=0;
        string user,pass,u,p;
        system("cls");
        cout<<"\n\n\n\t\t\t\t please enter the username and password"<<endl;
        cout<<"\t\t\t     ______________________________________________ ";
        cout<<"\n\n\n\n\t\t\t\t USERNAME : ";
        cin>>user;
        cout<<"\n\n\t\t\t\t PASSWORD : ";
        cin>>pass;


        ifstream input("patient_information.txt");
        while(input>>u>>p)
        {
                if(user==u && pass==p)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                system("cls");
                patientLogin();

        }
        else
        {
               cout<<"\n\n\n\n\n\n\t\t\t\t your username or password is wrong ";
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t       press 'r' to refresh : ";
        char gh;
        cin>>gh;

        switch(gh)
        {
        case 'r':

            {
                system("cls");
                loginP();
            }
        }
        }

}


void Register()              // page 4
 {
     int count=0;
     string user,pas,u,p;
     system("cls");
     cout<<"\n\n\n\t\t\t\t\t  register  ";
     cout<<"\n\t\t\t          ===================== ";
     cout<<" \n\n\n\t\t\t enter USERNAME : ";
     cin>>user;
     cout<<" \n\n\t\t\t enter PASSWORD : ";
     cin>>pas;

    ifstream input("admin.txt");
        while(input>>u>>p)
        {
                if(user==u && pas==p)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                system("cls");
                 menu();

        }


    else
        cout<<"\n\n\n\n\n\n\t\t\t your username or password is wrong ";
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t       press 'r' to refresh : ";
        char gh;
        cin>>gh;

        switch(gh)
        {
        case 'r':

            {
                system("cls");
                Register();
            }
        }

}
void menu()                                                                                              //   register page
{

   int n;
   system("cls");
      cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t\ ==========================================";
    cout<<"\t\t\t\t\t\t\t\t\t                                                            ||                                        ||";
    cout<<"\n\t\t\t\t        ||         DHAKA MEDICALE HOSPITAL        ||";
    cout<<"\n                                        ||                                        ||";
    cout<<"\t\t\t\t\t\                                                                                             ==========================================";
    cout<<"\n\n\n\n\t\t\t\t\t\t01. patient entry "<<endl;

    cout<<"\n\t\t\t\t\t\t02. patient information "<<endl;
    cout<<"\n\t\t\t\t\t\t03. doctor information "<<endl;


    cout<<"\n\t\t\t\t\t\t04. hospital information "<<endl;

    cout<<"\n\t\t\t\t\t\t05. back to login page "<<endl;
    cout<<"\n\n\t\t\t\t\t\tchoose any option ...";
    cin>>n;

    switch (n)
    {
    case 1:
        {
            patient_entry();
            break;
        }



    case 2:
        {
            patient_information();
               break;
        }
    case 3:
        {
           doctor1();
               break;
        }




    case 4:
        {
            information();
               break;
        }

    case 5:
        {
               enter();
               break;
        }
    default:
        {
            cout<<"\n\n\t\t\t\t\      wrong choce ";
            char ch;

            cout<<"\n\n\n\n\t\t\t\t\t  press 'r' to refresh : ";
            cin>>ch;

            switch(ch)
            {
            case 'r':
                {
                    system("cls");
                    menu();
                }
            }

        }
    }

    getch();
}



void  schedule()
{

    cout<<"\n  ___________________________________________________________________________________________________________________________________________________________________ ";
    cout<<"\n |  TIME    |           sunday     |         monday    |         tuesday     |        wednesday      |       thursday       |       friday      |      saturday      |  ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n |          |  Dr anayet hussan    |   Dr nuruzaman    |  Dr anayet hussan   | Dr nusrat zahan       |  Dr anayet hussan    |   Dr nusrat zahan |  Dr shanaj parvin  | ";
    cout<<"\n |9 AM-11 Am|  Dr washikurzaman    |   Dr nusrat zahan |   Dr washikurzaman  |  Dr nuruzaman         |   Dr washikurzaman   |                   |                    | ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n |          |      Dr nuruzama     | Dr anayet hussan  |     Dr nuruzama     |  Dr anayet hussan     |    Dr nusrat zahan   |   Dr.nakib        |  Dr anayet hussan  | ";
    cout<<"\n |11AM-1 pm |   Dr nusrat zahan    |  Dr washikurzaman |    Dr nusrat zahan  |     Dr washikurzaman  |     Dr nuruzaman     |                   |                    | ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n |          |  Dr anayet hussan    |  Dr nusrat zahan  |  Dr anayet hussan   |   Dr nusrat zahan     |   Dr anayet hussan   |   Dr nuruzaman    |     Dr nakib       | ";
    cout<<"\n |1 PM-3 PM |   Dr washikurzaman   |  Dr nuruzaman     |  Dr washikurzaman   |  Dr nuruzaman         |   Dr washikurzaman   |                   |                    | ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n |          |    Dr nuruzaman      |  Dr anayet hussan |     Dr nuruzaman    |   Dr anayet hussan    |     Dr nusrat zahan  |   Dr  nakib       |  Dr shanaj parvin  | ";
    cout<<"\n |3 PM-5 PM |    Dr nusrat zahan   |  Dr washikurzaman |    Dr nusrat zahan  |   Dr washikurzaman    |      Dr nuruzaman    |                   |                    | ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________|  ";



    char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
              patientLogin();
        }
     }

}

void appointment()

{

}


void doctorLogin()                                                               // doctor page
{

   int n;
   system("cls");
      cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t\ ==========================================";
    cout<<"\t\t\t\t\t\t\t\t\t                                                            ||                                        ||";
    cout<<"\n\t\t\t\t        ||           doctor portal                ||";
    cout<<"\n                                        ||                                        ||";
    cout<<"\t\t\t\t\t\                                                                                             ==========================================";
    cout<<"\n\n\n\n\t\t\t\t\t\t01. hospital information "<<endl;
    cout<<"\n\t\t\t\t\t\t02. patient information "<<endl;
    cout<<"\n\t\t\t\t\t\t03. doctor information "<<endl;
    cout<<"\n\t\t\t\t\t\t04. back to login page "<<endl;

    cout<<"\n\n\t\t\t\t\t\tchoose any option ...";
    cin>>n;

    switch (n)
    {

    case 2:
        {
            string line;
    system("cls");
     ifstream file1("patient_information.txt");

     while(getline(file1,line))
     {
         cout<<line<<endl;
     }
     char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t ";
     cout<<"press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
          doctorLogin();
        }
     }



        }

    case 3:
        {
            doctor();
                break;
        }

    case 1:
        {
            hospital();
            break;
        }

    case 4:
        {
            enter();
            break;
        }

    default:
        {
            cout<<"\n\n\t\t\t\t\      wrong choce ";
            char ch;

            cout<<"\n\n\n\n\t\t\t\t\t  press 'r' to refresh : ";
            cin>>ch;

            switch(ch)
            {
            case 'r':
                {
                    system("cls");
                doctorLogin();
                }
            }

        }
    }

    getch();
}




void patientLogin()                                                         // patient page
{

   int n;
   system("cls");
      cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t\ ==========================================";
    cout<<"\t\t\t\t\t\t\t\t\t                                                            ||                                        ||";
    cout<<"\n\t\t\t\t        ||           patient portal               ||";
    cout<<"\n                                        ||                                        ||";
    cout<<"\t\t\t\t\t\                                                                                             ==========================================";
    cout<<"\n\n\n\n\ ";

    cout<<"\n\t\t\t\t\t\t01. doctor schedule "<<endl;
    cout<<"\n\t\t\t\t\t\t02. doctor information "<<endl;

    cout<<"\n\t\t\t\t\t\t03. hospital information "<<endl;

    cout<<"\n\t\t\t\t\t\t04. back to login page "<<endl;
    cout<<"\n\n\t\t\t\t\t\tchoose any option ...";
    cin>>n;

    switch (n)
    {




  /*  case 1:
    {
               int count=0;
        string name,a,b,c,d,e,f,g,h;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"NAME :";
        cin>>name;


        ifstream input("patient_information.txt");
        while(input>>a>>b>>c>>d>>e>>f>>g>>h)
        {
                if(name==a)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                system("cls");
                cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e<<"  "<<f<<"  "<<g<<"  "<<h ;

        }
        else
            {
                cout<<"\nLOGIN ERROR\nPlease check your name ";
                system("cls");
                patientLogin();

               break;
            }




   }  */


    case 1:
        {
             system("cls");

             schedule();

                break;
        }



    case 2:
        {
            doctor_information();
                break;
        }




    case 3:
        {
            hospital_information();
            break;
        }


    case 4:
        {
            enter();
            break;
        }

    default:
        {
            cout<<"\n\n\t\t\t\t\      wrong choce ";
            char ch;

            cout<<"\n\n\n\n\t\t\t\t\t  press 'r' to refresh : ";
            cin>>ch;

            switch(ch)
            {
            case 'r':
                {
                    system("cls");
                    patientLogin();
                }
            }

        }
    }

    getch();
}


void shanaj()
{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr shanaj parvin ";
    cout<<"\n\t\t\t cardiologist specialist  ";
    cout<<"\n\t\t\t 3rd floor ";
    cout<<"\n\t\t\t room-306 ";
    cout<<"\n\t\t\t email: waliuallah897@gmail.com";
    cout<<"\n\t\t\t contact no:01796355539";


    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }





}

void waliullah()
{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr waliullah  ";
    cout<<"\n\t\t\t bone specialist ";
    cout<<"\n\t\t\t 4th floor ";
    cout<<"\n\t\t\t room-406 ";
    cout<<"\n\t\t\t email: waliuallah897@gmail.com";
    cout<<"\n\t\t\t contact no:01796355539";

    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }



}

void mubasher()
{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr mubasher ";
    cout<<"\n\t\t\t Anesthesiologists specialist ";
    cout<<"\n\t\t\t 5th floor ";
    cout<<"\n\t\t\t room-504 ";
    cout<<"\n\t\t\t email: mubasher699@gmail.com";
    cout<<"\n\t\t\t contact no:01796895457";

    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }
}


void anayet()
{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr anayet hussan";
    cout<<"\n\t\t\t Surgeons specialist ";
    cout<<"\n\t\t\t 6th floor ";
    cout<<"\n\t\t\t room-606 ";
     cout<<"\n\t\t\t email: anayetdmc@gmail.com";
    cout<<"\n\t\t\t contact no:0196545514";

    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }

}

void washikurzaman()
{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr washikurzaman ";
    cout<<"\n\t\t\t Critical Medicine specialist ";
    cout<<"\n\t\t\t 5th floor ";
    cout<<"\n\t\t\t room-502 ";
     cout<<"\n\t\t\t email: washikurzaman78@gmail.com";
    cout<<"\n\t\t\t contact no:01798899787";

    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }
 }


void nuruzaman()
{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr nuruzaman ";
    cout<<"\n\t\t\t Dermatologists specialist  ";
    cout<<"\n\t\t\t 6th floor ";
    cout<<"\n\t\t\t room-306 ";
    cout<<"\n\t\t\t email: nuruzaman589@gmail.com";
    cout<<"\n\t\t\t contact no:01796875752";

    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }


}

void nusrat()
{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr nusrat zahan ";
    cout<<"\n\t\t\t Endocrinologists specialist ";
    cout<<"\n\t\t\t 6th floor ";
    cout<<"\n\t\t\t room-303 ";
    cout<<"\n\t\t\t email: nusrat57dc@gmail.com";
    cout<<"\n\t\t\t contact no:01797454577";

    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }
}


void kamruzaman()

{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr kamruzaman ";
    cout<<"\n\t\t\t Medicine Specialist specialist  ";
    cout<<"\n\t\t\t           ";
    cout<<"\n\t\t\t 6th floor ";
    cout<<"\n\t\t\t room-407 ";
    cout<<"\n\t\t\t email: kamruzamandmc79@gmail.com";
    cout<<"\n\t\t\t contact no:01996892757";

    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }

}

void nakib()
{
    cout<<"\n\n\n\t\t\t\t\t doctor information   ";
    cout<<"\n                                    ___________________________ ";
    cout<<"\n\n\n\n\t\t\t Dr nakib ";
    cout<<"\n\t\t\t Gastroenterologists specialist";
    cout<<"\n\t\t\t 6th floor ";
    cout<<"\n\t\t\t room-206 ";
    cout<<"\n\t\t\t email : nakib36@gmail.com ";
    cout<<"\n\t\t\t contact no:01977994777";

    char ch;
    cout<<"\n\n\n\t\t\t enter 'b' to go back : ";
    cin>>ch;

    switch(ch)
    {
    case 'b':
        {
            system("cls");

             patientLogin() ;

        }
    }


}


void notice()
{
    char name[200];
     ofstream file;
     file.open("notice page.txt",ios::out|ios::app);

      cin>>name;

      file<<" "<<name;

       file.close();

       char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }

}


void hospital()

{
     system("cls");
    cout<<"\n\n\n\t\t\t\t\t                    DHAKA MEDICALE HOSPITAL  ";
    cout<<"\n\t\t\t\                       _______________________________________________ ";

         cout<<"\n\n\n\n\n\t\t\t Type          : Public medical hospital ";
         cout<<"\n\n\t\t\t Established   : 1946 ";
         cout<<"\n\n\t\t\t Principal     : Khan Abul Kalam Azad ";
         cout<<"\n\n\t\t\t Director      : Brig. Gen. Mohammad Nasir Uddin[1] ";
         cout<<"\n\n\t\t\t Location      : Ramna, Dhaka, Bangladesh ";
         cout<<"\n\n\t\t\t Campus	       : 25 acres (10 ha) ";
         cout<<"\n\n\t\t\t Language      : English ";
         cout<<"\n\n\t\t\t Website       : www.dmc.gov.bd ";
         cout<<"\n\n\n\t\t\t phone number  : 01768793284 ";
         cout<<"\n\n\t\t\t               : 01674952841 ";
         cout<<"\n\n\t\t\t               : 01873096257 ";



         char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t ";
     cout<<"press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
             doctorLogin();
        }
     }
}

void doctor()
{


        system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\t\             doctor information  ";
    cout<<"\n\t\t\t\t\t\t  ======================  ";
    cout<<"\n\n";
    cout<<"\n                                  id                name                       sector ";
    cout<<"\n                                ------           -----------               ---------------              ";
    cout<<"\n\n\t\t\t\t 3476.        Dr shanaj parvin       cardiologist specialist          "<<endl<<endl;
    cout<<"\t\t\t\t 8436.        Dr waliullah           bone specialist                    "<<endl<<endl;
    cout<<"\t\t\t\t 8956.        Dr mubasher            Anesthesiologists specialist      "<<endl<<endl;
    cout<<"\t\t\t\t 3487 .       Dr anayet hussan       Surgeons specialist                 "<<endl<<endl;                     // Colon and Rectal
    cout<<"\t\t\t\t 2398.        Dr washikurzaman       Critical Medicine specialist       "<<endl<<endl;                    //Care
    cout<<"\t\t\t\t 1875.        Dr nuruzaman           Dermatologists specialist        "<<endl<<endl;
    cout<<"\t\t\t\t 7397.        Dr nusrat zahan        Endocrinologists specialist    "<<endl<<endl;
    cout<<"\t\t\t\t 7295.        Dr kamruzaman          Medicine Specialist specialist  "<<endl<<endl;             //Emergency
    cout<<"\t\t\t\t 2863.        Dr nakib               Gastroenterologists specialist   "<<endl<<endl;
     char ch;

     cout<<"\n\n\n\n\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g' :
        system("cls");
         doctorLogin();
     }


}



void doctor1()
{


        system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\t\             doctor information  ";
    cout<<"\n\t\t\t\t\t\t  ======================  ";
    cout<<"\n\n";
    cout<<"\n                                  id                name                       sector ";
    cout<<"\n                                ------           -----------               ---------------              ";
    cout<<"\n\n\t\t\t\t 3476.        Dr shanaj parvin       cardiologist specialist          "<<endl<<endl;
    cout<<"\t\t\t\t 8436.        Dr waliullah           bone specialist                    "<<endl<<endl;
    cout<<"\t\t\t\t 8956.        Dr mubasher            Anesthesiologists specialist      "<<endl<<endl;
    cout<<"\t\t\t\t 3487 .       Dr anayet hussan       Surgeons specialist                 "<<endl<<endl;                     // Colon and Rectal
    cout<<"\t\t\t\t 2398.        Dr washikurzaman       Critical Medicine specialist       "<<endl<<endl;                    //Care
    cout<<"\t\t\t\t 1875.        Dr nuruzaman           Dermatologists specialist        "<<endl<<endl;
    cout<<"\t\t\t\t 7397.        Dr nusrat zahan        Endocrinologists specialist    "<<endl<<endl;
    cout<<"\t\t\t\t 7295.        Dr kamruzaman          Medicine Specialist specialist  "<<endl<<endl;             //Emergency
    cout<<"\t\t\t\t 2863.        Dr nakib               Gastroenterologists specialist   "<<endl<<endl;
     char ch;

     cout<<"\n\n\n\n\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g' :
        system("cls");
         menu();
     }


}



void information()
{

     system("cls");
    cout<<"\n\n\n\t\t\t\t\t                    DHAKA MEDICALE HOSPITAL  ";
    cout<<"\n\t\t\t\                       _______________________________________________ ";

         cout<<"\n\n\n\n\n\t\t\t Type          : Public medical hospital ";
         cout<<"\n\n\t\t\t Established   : 1946 ";
         cout<<"\n\n\t\t\t Principal     : Khan Abul Kalam Azad ";
         cout<<"\n\n\t\t\t Director      : Brig. Gen. Mohammad Nasir Uddin[1] ";
         cout<<"\n\n\t\t\t Location      : Ramna, Dhaka, Bangladesh ";
         cout<<"\n\n\t\t\t Campus	       : 25 acres (10 ha) ";
         cout<<"\n\n\t\t\t Language      : English ";
         cout<<"\n\n\t\t\t Website       : www.dmc.gov.bd ";
         cout<<"\n\n\n\t\t\t phone number  : 01768793284 ";
         cout<<"\n\n\t\t\t               : 01674952841 ";
         cout<<"\n\n\t\t\t               : 01873096257 ";



         char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t ";
     cout<<"press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
             menu();
        }
     }


}
