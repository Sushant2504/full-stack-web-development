#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

//#define st=250504;
using namespace std;

//Function Declaration
void menu();
void pascode();
void cpascode();

//Class one

class one{
      public:
      virtual void get()=0;
      virtual void show()=0;


};

//class information

class info:public one
{
    public :
    char name[50], time[55];
    int num, age;
    void get()
    {
        system("cls");
        cin.sync();
        cout<<endl<<"Enter The patient name =";
        cin.getline(name, 50);
        cout<<endl<<"Enter The Appointment Time =";
        cin.getline(time, 50);
        cout<<endl<<"Enter The Age =";
        cin>>age;
        cout<<endl<<"Enter Appointment No =";
        cin>>num;
    }
    void show()
    {
        cout<<endl<<"Name  =" <<name;
        cout<<endl<<"Age =" <<age;
        cout<<endl<<"No. =" <<num;
        cout<<endl<<"Time =" <<time;
    }
    

};
// class rana....

class rana:public info{


    public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("Rana.txt", ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your Entry Has been saved ";
        getch();
        menu();
    }


    void show(){
        ifstream in("rana.txt");
        //std::ifstream;
        if(in.fail())
        {
            cout<<endl<<"No Data In the File ";
            cout<<endl<<endl<<"\t\tPress Any key To Continue : ";
            getch();
            menu();


        }
        else{

            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();

            }
            in.close();
            getch();
            menu();
        }
    }
};



//class information
/*class information:{
    public:
    void drinfo()
    {
        system("cls");
        system("color F3");
 cout<<endl<<"=================================================================================="<<endl;
 cout<<endl<<endl<<"\t\t(Three Doctor Available) \n\n \t\t[Information And Timing Are Given Below]\n";
 cout<<"-----------------------------------------------------------------------------------------"<<endl;
 cout<<"\t\tDr Available:"<<endl;
 cout<<"\t\tDr. Rana (skin specialist)\n\n";
 cout<<"\t\t\t [[Timing]]:\n\n";
 cout<<"\tMonday To Friday\t\t9AM TO 5PM\n";
 cout<<"\tSaturday            \t\t9AM TO 1PM\n";
 cout<<"\tSunday              \t\toff\n";
 cout<<"\n--------------------------------------------------------------------------------------------\n";
 cout<<"\t\tDr Available:"<<endl;
 cout<<"\t\tDr. Sushant (eye specialist)\n\n";
 cout<<"\t\t\t [[Timing]]:\n\n";
 cout<<"\tMonday To Friday\t\t2PM TO 10PM\n";
 cout<<"\tSaturday            \t\t8AM TO 1PM\n";
 cout<<"\tSunday              \t\t12PM TO 9PM\n";
 cout<<"\n--------------------------------------------------------------------------------------------\n";
 cout<<"\t\tDr Available:"<<endl;
 cout<<"\t\tDr. Rohit (orthopidist)\n\n";
 cout<<"\t\t\t [[Timing]]:\n\n";
 cout<<"\tMonday To Friday\t\t8AM TO 5PM\n";
 cout<<"\tSaturday            \t\t10AM TO 1PM\n";
 cout<<"\tSunday              \t\toff\n";
 cout<<"\n--------------------------------------------------------------------------------------------\n";
 cout<<"\nPress Any Key For Continue: ";
 getch();
 menu();
 
    }

    void call_dr(){
        system("cls");
        int choice;
        cout<<"\n\n\n\t\tPress 1 for Dr Rana \n\n\n\t\t Press 2 for Dr.Sushant \n\n\t\t Press 3 for Dr.Rohit ";
        cin>>choice;

        one *ptr;
        rana s3;
        sushant s4;
        rohit s5;
        if(choice==1)
        {
            ptr=&s3;
            ptr->get();
        }
        if(choice ==2)
        {
            ptr=&s4;
            ptr->get();

        }
        if(choice==3)
        {
            ptr=&s5;
            ptr->get();
        }


        else{
            cout<<"Sorry invalid choice.";
            getch();
            menu();
        }

    }

    void menu(){
          system("cls");
          system("color FC");

          cout<<endl<<endl;

          cout<<"\t\t    |    **************    MAIN MENU   **************         |     \n";
          cout<<"\t\t    |              HOSPITAL MANAGEMENT SYSTEM                 |     \n";
          cout<<"\t\t    |                  GEETANSHU HOSPITAL                     |     \n";
          cout<<"\t\t    |=========================================================|       \n";

          cout<<"----------------------------------------------------------------------------------------\n";
          cout<<"\t\t                Please select Any Option                     \n      ";

          cout<<"\n\n\t1-\t\tPress 1 For Available Doctor Information\n\n";
          cout<<"t2-\t\tPress 2 For Doctor Appointment\n\n";
          cout<<"t3-\t\tPress 3 For Saving Staff information\n\n";
          cout<<"t4-\t\tPress 4 For Checking Patient Appointment Menu:\n\n";
          cout<<"t5-\t\tPress 5 For Checking Staff Information Menu:\n\n";
          cout<<"t6-\t\tPress 6 For Change Password or Create password\n\n";
          cout<<"t7-\t\tPress 7 For Logout\n\n";

          cout<<"\n==========================================================================================\n";
          cout<<"\n\n\t\tPlease Enter Your Choice : ";

          information a1;
          one *ptr;
          staff a2;
          int a;
          cin>>a;
          if(a==1)
          {
            a1.drinfo();
          }
          else if(a==2)
          {
            call_dr();
          }
          else if(a==3)
          {
            ptr=&a2;
            ptr->show();
          }
          else if(a==4)
          {
            info();
          }
          else if(a==5)
          {
            ptr=&a2;
            ptr->show();
          }
          else if(a==6)
          {
            cpascode();
          }
          else if(a==7)
          {
            pascode();
          }
          else{
            cout<<"Sorry invalid choice";
          }
    }

    void cpascode()
    {
        char n[50];
        system("cls");
        ofstream out("password.txt");
        {
            cin.sync();
            cout<<"\n\n\n\n\t\t\t Enter The New Password ";
            cin.getline(n,50);
            out<<n;
        }
        out.close();
        cout<<"\n\nYour Password has been saved : ";
        getch();
        menu();
    }
};*/

//class Dr. Sushant....

class sushant:public info{
    public:
      void show(){
        info a1;
        ifstream in("rana.txt");
        if(in.fail())
        {
            cout<<endl<<"No Data In the File ";
            cout<<endl<<endl<<"\t\tPress Any key To Continue : ";
            getch();
            menu();


        }
        else{

            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();

            }
            in.close();
            getch();
            menu();
        }


      }


};

//class Dr.Rohit...
class rohit: public info{
    public:
    info a1;

    void show(){
        ifstream in("rana.txt");
        if(in.fail())
        {
            cout<<endl<<"No Data In the File ";
            cout<<endl<<endl<<"\t\tPress Any key To Continue : ";
            getch();
            menu();


        }
        else{

            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();

            }
            in.close();
            getch();
            menu();
        }

    }

};


//class staff..........

class staff:public one{
    public:

    char all[999];
    char name[50],age[20],sal[30],pos[20];

    void get()
    {
        ofstream out("staff.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\nEnter Name: ";
            cin.getline(name,50);
            cout<<"\nEnter Age: ";
            cin.getline(age,20);
            cout<<"\nEnter Sallary: ";
            cin.getline(sal,30);
            cout<<"\nEnter Working position = ";
            cin.getline(pos,20);

        }
        out<<"\nName = "<<name<<endl<<"Age"<<endl<<"Sallary"<<endl<<"Working Position"<<pos<<endl;
        out.close();
        cout<<endl<<"Your information has been saved."<<endl;
        getch();
    }

    void show(){

        ifstream in("staff.txt");
        if(!in){
            cout<<"File open error";
        }
        while(!(in.eof()))
        {
            in.getline(all,999);
            cout<<all<<endl;

        }
        in.close();
        cout<<endl<<endl<<endl<<"\t\t\tPress Any Key to Continue : ";
        getch();
        menu();
    }
};    

 void pascode(){
         system("cls");

         char p1[50],p2[50],p3[50];

         system("color FC");

         ifstream in("password.txt");
         {
    
          int st;
          cin.sync();
          cout<<"\n\n\n\n\n\n\t\t\t\tEnter the password:";
          cin.getline(p1,50);
          in.getline(p2,50);
          if(strcmp(p2,p1)==0){
              menu();
          }

          else
          {
              cout<<"\n\n\n\t\tIncorrect password entered";
             Sleep(999);
             pascode();
          }
         }
         in.close();

 }


class information: public staff{
    public:

    void drinfo()
    {
        system("cls");
        system("color F3");
 cout<<endl<<"=================================================================================="<<endl;
 cout<<endl<<endl<<"\t\t(Three Doctor Available) \n\n \t\t[Information And Timing Are Given Below]\n";
 cout<<"-----------------------------------------------------------------------------------------"<<endl;
 cout<<"\t\tDr Available:"<<endl;
 cout<<"\t\tDr. Rana (skin specialist)\n\n";
 cout<<"\t\t\t [[Timing]]:\n\n";
 cout<<"\tMonday To Friday\t\t9AM TO 5PM\n";
 cout<<"\tSaturday            \t\t9AM TO 1PM\n";
 cout<<"\tSunday              \t\toff\n";
 cout<<"\n--------------------------------------------------------------------------------------------\n";
 cout<<"\t\tDr Available:"<<endl;
 cout<<"\t\tDr. Sushant (eye specialist)\n\n";
 cout<<"\t\t\t [[Timing]]:\n\n";
 cout<<"\tMonday To Friday\t\t2PM TO 10PM\n";
 cout<<"\tSaturday            \t\t8AM TO 1PM\n";
 cout<<"\tSunday              \t\t12PM TO 9PM\n";
 cout<<"\n--------------------------------------------------------------------------------------------\n";
 cout<<"\t\tDr Available:"<<endl;
 cout<<"\t\tDr. Rohit (orthopidist)\n\n";
 cout<<"\t\t\t [[Timing]]:\n\n";
 cout<<"\tMonday To Friday\t\t8AM TO 5PM\n";
 cout<<"\tSaturday            \t\t10AM TO 1PM\n";
 cout<<"\tSunday              \t\toff\n";
 cout<<"\n--------------------------------------------------------------------------------------------\n";
 cout<<"\nPress Any Key For Continue: ";
 getch();
 menu();
 
    }

    void call_dr(){
        system("cls");
        int choice;
        cout<<"\n\n\n\t\tPress 1 for Dr Rana \n\n\n\t\t Press 2 for Dr.Sushant \n\n\t\t Press 3 for Dr.Rohit ";
        cin>>choice;

        one *ptr;
        rana s3;
        sushant s4;
        rohit s5;
        if(choice==1)
        {
            ptr=&s3;
            ptr->get();
        }
        if(choice ==2)
        {
            ptr=&s4;
            ptr->get();

        }
        if(choice==3)
        {
            ptr=&s5;
            ptr->get();
        }


        else{
            cout<<"Sorry invalid choice.";
            getch();
            menu();
        }

    }

 void cpascode()
    {
        information s2;

        char n[50];
        system("cls");
        ofstream out("password.txt");
        {
            cin.sync();
            cout<<"\n\n\n\n\t\t\t Enter The New Password ";
            cin.getline(n,50);
            out<<n;
        }
        out.close();
        cout<<"\n\nYour Password has been saved : ";
        getch();
        s2.menu();
    }
     
//  void pascode(){
//         system("cls");

//         char p1[50],p2[50],p3[50];

//         system("color FC");

//         ifstream in("password.txt");
//         {
    
//          int st;
//          cin.sync();
//          cout<<"\n\n\n\n\n\n\t\t\t\tEnter the password:";
//          cin.getline(p1,50);
//          in.getline(p2,50);
//          if(strcmp(p2,p1)==0){
//              menu();
//          }

//          else
//          {
//              cout<<"\n\n\n\t\tIncorrect password entered";
//             Sleep(999);
//              pascode();
//          }
//         }
//         in.close();
//  }

    // void menu(){
    //       system("cls");
    //       system("color FC");

    //       cout<<endl<<endl;

    //       cout<<"\t\t    |    **************    MAIN MENU   **************         |     \n";
    //       cout<<"\t\t    |              HOSPITAL MANAGEMENT SYSTEM                 |     \n";
    //       cout<<"\t\t    |                  GEETANSHU HOSPITAL                     |     \n";
    //       cout<<"\t\t    |=========================================================|       \n";

    //       cout<<"----------------------------------------------------------------------------------------\n";
    //       cout<<"\t\t                Please select Any Option                     \n      ";

    //       cout<<"\n\n\t1-\t\tPress 1 For Available Doctor Information\n\n";
    //       cout<<"t2-\t\tPress 2 For Doctor Appointment\n\n";
    //       cout<<"t3-\t\tPress 3 For Saving Staff information\n\n";
    //       cout<<"t4-\t\tPress 4 For Checking Patient Appointment Menu:\n\n";
    //       cout<<"t5-\t\tPress 5 For Checking Staff Information Menu:\n\n";
    //       cout<<"t6-\t\tPress 6 For Change Password or Create password\n\n";
    //       cout<<"t7-\t\tPress 7 For Logout\n\n";

    //       cout<<"\n==========================================================================================\n";
    //       cout<<"\n\n\t\tPlease Enter Your Choice : ";

    //       information a1;
    //       one *ptr;
    //       staff a2;
    //       int a;
    //       cin>>a;
    //       if(a==1)
    //       {
    //         a1.drinfo();
    //       }
    //       else if(a==2)
    //       {
    //         call_dr();
    //       }
    //       else if(a==3)
    //       {
    //         ptr=&a2;
    //         ptr->get();
    //       }
    //       else if(a==4)
    //       {
    //         info();
    //       }
    //       else if(a==5)
    //       {
    //         ptr=&a2;
    //         ptr->show();
    //       }
    //       else if(a==6)
    //       {
    //         cpascode();
    //       }
    //       else if(a==7)
    //       {
    //         pascode();
    //       }
    //       else{
    //         cout<<"Sorry invalid choice";
    //       }
    // }

    // void cpascode()
    // {
    //     char n[50];
    //     system("cls");
    //     ofstream out("password.txt");
    //     {
    //         cin.sync();
    //         cout<<"\n\n\n\n\t\t\t Enter The New Password ";
    //         cin.getline(n,50);
    //         out<<n;
    //     }
    //     out.close();
    //     cout<<"\n\nYour Password has been saved : ";
    //     getch();
    //     menu();
    // }
    void menu();

    

    // void information :: cpascode()
    // {
    //     char n[50];
    //     system("cls");
    //     ofstream out("password.txt");
    //     {
    //         cin.sync();
    //         cout<<"\n\n\n\n\t\t\t Enter The New Password ";
    //         cin.getline(n,50);
    //         out<<n;
    //     }
    //     out.close();
    //     cout<<"\n\nYour Password has been saved : ";
    //     getch();
    //     menu();
    // }
    // void pascode();
};

// void pascode(){
//        system("cls");

//        char p1[50],p2[50],p3[50];

//        system("color FC");

//        ifstream in("password.txt");
//        {
//         information s1;
//         start:
//         int st;
//         cin.sync();
//         cout<<"\n\n\n\n\n\n\t\t\t\tEnter the password:";
//         cin.getline(p1,50);
//         in.getline(p2,50);
//         if(strcmp(p2,p1)==0){
//             menu();
//         }

//         else
//         {
//             cout<<"\n\n\n\t\tIncorrect password entered";
//             Sleep(999);
//             pascode();
//         }
//        }
//        in.close();
// }

void information:: menu(){
          system("cls");
          system("color FC");

          cout<<endl<<endl;

          cout<<"\t\t    |    **************    MAIN MENU   **************         |     \n";
          cout<<"\t\t    |              HOSPITAL MANAGEMENT SYSTEM                 |     \n";
          cout<<"\t\t    |                  GEETANSHU HOSPITAL                     |     \n";
          cout<<"\t\t    |=========================================================|       \n";

          cout<<"----------------------------------------------------------------------------------------\n";
          cout<<"\t\t                Please select Any Option                     \n      ";

          cout<<"\n\n\t1-\t\tPress 1 For Available Doctor Information\n\n";
          cout<<"t2-\t\tPress 2 For Doctor Appointment\n\n";
          cout<<"t3-\t\tPress 3 For Saving Staff information\n\n";
          cout<<"t4-\t\tPress 4 For Checking Patient Appointment Menu:\n\n";
          cout<<"t5-\t\tPress 5 For Checking Staff Information Menu:\n\n";
          cout<<"t6-\t\tPress 6 For Change Password or Create password\n\n";
          cout<<"t7-\t\tPress 7 For Logout\n\n";

          cout<<"\n==========================================================================================\n";
          cout<<"\n\n\t\tPlease Enter Your Choice : ";

          information a1;
          one *ptr;
          staff a2;
          int a;
          cin>>a;
          if(a==1)
          {
            a1.drinfo();
          }
          else if(a==2)
          {
            call_dr();
          }
          else if(a==3)
          {
            ptr=&a2;
            ptr->get();
          }
          else if(a==4)
          {
            info();
          }
          else if(a==5)
          {
            ptr=&a2;
            ptr->show();
          }
          else if(a==6)
          {
            cpascode();
          }
          else if(a==7)
          {
            pascode();
          }
          else{
            cout<<"Sorry invalid choice";
          }
    }


int main()
{ 
    
       
        pascode();
        system("pause");



    end:
    return 0;
}