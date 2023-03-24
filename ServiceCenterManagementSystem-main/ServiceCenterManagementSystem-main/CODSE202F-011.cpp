
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Service_Centre
{
    string service_centre_name;
    string username;
    string password;
    string forgot;
public:

    void setdetails(string service_centre_name)
{
    this->service_centre_name=service_centre_name;

}
void showdetails()
{
    cout<<"***********************************************************************************************"<<endl;
    cout<<"                         WELCOME TO "<<service_centre_name<<" SERVICE CENTRE!!!"<<endl;
    cout<<"***********************************************************************************************"<<endl;
}


void login()
{

    cout<<"\n ****************LOGIN*******************\n"<<endl;
    cout<<"\n";
    cout<<"PLEASE ENTER USERNAME: ";
    cin>>username;

    if (username=="auto")//user name is auto
 {
     cout<<"PLEASE ENTER PASSWORD: ";
     cin>>password;
     if(password=="54321")//password is 54321
     {
         cout<<"YOU SUCCESSFULLY LOGGED IN !!!\n\n"<<endl;
     }
     else
     {
         cout<<"YOUR PASSWORD IS WRONG"<<endl;
         cout<<"ENTER ID NUMBER IF FORGOT"<<endl;
         cin>>forgot;
         if(forgot=="00001111v")//default id number given is 00001111v
         {
             cout<<"YOU SUCCESSFULLY LOGGED IN !!!\n\n"<<endl;

         }
         else
         {
             exit(0);
         }
     }

 }
 else
 {
     cout<<"YOUR USERNAME IS WRONG PLEASE TRY AGAIN"<<endl;
     exit(0);
 }

}

};

class Customer
{
    string cus_name;
    string address;
    int telephone1;
    int telephone2;
    string registration_date;
    string vehicle_num;
public:


     void CustomerDetails()
{
    fstream c;
    c.open("C:CODSE202F-011.txt",ios::app);
     cout<<"***************************"<<endl;
     cout<<"   CUSTOMER REGISTRATION"<<endl;
     cout<<"***************************"<<endl;


    cout<<"ENTER CUSTOMER NAME: ";
    cin>>cus_name;
    cout<<"ENTER CUSTOMER ADDRESS: ";
    cin>>address;
    cout<<"ENTER CUSTOMER TELEPHONE 1: ";
    cin>>telephone1;
    cout<<"ENTER CUSTOMER TELEPHONE 2: ";
    cin>>telephone2;
    cout<<"ENTER CUSTOMER REGISTRATION DATE: ";
    cin>>registration_date;
    cout<<"ENTER CUSTOMER VEHICLE NUMBER: ";
    cin>>vehicle_num;
    cout<<"\n"<<"*******************************"<<endl;
c.seekp(0,ios::end);
    c<<"***CUSTOMER REGISTATTION FUNCTION RESULT***"<<endl;
    c<<"CUSTOMER NAME:"<<cus_name<<endl;
    c<<"CUSTOMER ADDRESS:"<<address<<endl;
    c<<"CUSTOMER TELEPHONE NUMBER 1:"<<telephone1<<endl;
    c<<"CUSTOMER TELEPHONE NUMBER 2:"<<telephone2<<endl;
    c<<"CUSTOMER REGISTRATION DATE:"<<registration_date<<endl;
    c<<"CUSTOMER VEHICLE NUMBER:"<<vehicle_num<<endl;
    c<<"\n"<<endl;

c.close();
}

};




class Stock
{
    string item_no;
    string item_name;
    string vehicle_type;
    float price;
    int quantity;
public:
      void set();
    Stock();
    Stock(string ,string,string,float,int);
    ~Stock();
    void show();
};
void Stock::set()
{
    cout<<"*************************"<<endl;
    cout<<"STOCK"<<endl;
    cout<<"*************************"<<endl;
}
Stock::~Stock()
{

}
Stock::Stock()
{
    item_no="b001";
    item_name="Battery";
    vehicle_type="Bike";
    price=3000;
    quantity=5;


}
Stock::Stock(string item_no,string item_name,string vehicle_type,float price,int quantity)
{
    this->item_no=item_no;
    this->item_name=item_name;
    this->vehicle_type=vehicle_type;
    this->price=price;
    this->quantity=quantity;


}

void Stock::show()
{

    cout<<"ITEM NO: "<<item_no<<endl;
    cout<<"ITEM NAME: "<<item_name<<endl;
    cout<<"VEHICLE TYPE: "<<vehicle_type<<endl;
    cout<<"PRICE: "<<price<<endl;
    cout<<"QUANTITY: "<<quantity<<"\n\n\n"<<endl;
}
class vehicle
{
    protected:
   string vehicle_no;
    string owner;
    string engine_no;
    string chassis_no;

    int type;
    float wash_price,repair_charge,service_charge,extra_amount,discount,total;


public:

    void vehicleregister()
     {
fstream v;
v.open("C:CODSE202F-011.txt",ios::app);
         cout<<"******************************************"<<endl;
         cout<<"     VEHICLE REGISTRATION        "<<endl;
         cout<<"******************************************"<<endl;
         cout<<"ENTER THE VEHICLE NO: ";
         cin>>vehicle_no;
         cout<<"OWNER NAME: ";
         cin>>owner;
         cout<<"ENTER THE ENGINE NUMBER: ";
         cin>>engine_no;
         cout<<"ENTER THE CHASSIS NUMBER: ";
         cin>>chassis_no;
         cout<<"\n\n"<<endl;
         v.seekp(0,ios::end);
         v<<"***VEHICLE REGISTRATION RESULTS***"<<endl;
         v<<"VEHICLE NUMBER:"<<vehicle_no<<endl;
         v<<"VEHICLE OWNER:"<<owner<<endl;
         v<<"VEHCILE ENGINE NUMBER:"<<engine_no<<endl;
         v<<"VEHICLE CHASSIS NUMBERA:"<<chassis_no<<endl;
         v<<"\n"<<endl;

         v.close();
     }

        vehicle(float wash_price,float discount,float repair_charge,float service_charge)
     {
         this->wash_price=wash_price;
         this->repair_charge=repair_charge;
         this->service_charge=service_charge;
         this->discount=discount;
     }
   virtual void washing()=0;

   virtual void repairing()=0;

   virtual void servicing()=0;

    virtual void select()
    {
cout<<"*****************************"<<endl;
cout<<"SELECT THE SERVICE"<<endl;
cout<<"*****************************"<<endl;
    cout<<"ENTER 1 TO WASH"<<endl;
    cout<<"ENTER 2 TO REPAIR"<<endl;
    cout<<"ENTER 3 TO SERVICE\n\n"<<endl;

    cout<<"ENTER THE CHOICE: ";
    cin>>type;

    cout<<"\n\n**********BILL***********"<<endl;

    if (type==1)
    {
       washing();
    }
else if(type==2)
{
   repairing();

}
else if(type==3)
{
    servicing();
}
}

    };

class Bike:public vehicle
{

float extra_charges;
float discount_amount;
string item_no[2];
string item_name[2];
double price[2];
double quantity[2];
float total;
string vehicle_num;
int num1;
int num2;

public:
    Bike(float wash_price,float discount,string item_no1,string item_no2,string item_name1,string item_name2,float price1,float price2,int quantity1,int quantity2,float service_charge):vehicle(wash_price,discount,repair_charge,service_charge)
    {
        this->discount=discount;
        this->item_no[0]=item_no1;
        this->item_no[1]=item_no2;
        this->item_name[0]=item_name1;
        this->item_name[1]=item_name2;
        this->price[0]=price1;
        this->price[1]=price2;
        this->quantity[0]=quantity1;
        this->quantity[1]=quantity2;

            }
   void washing()
    { fstream v;
    v.open("C:CODSE202F-011.txt",ios::app);

    cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;

        cout<<"AMOUNT FOR WASHING :"<<wash_price<<endl;
        cout<<"ENTER EXTRA CHARGES IF ANY: ";
        cin>>extra_charges;

                    discount_amount=(wash_price+extra_charges)*(discount/100);
                    cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
                    total=(wash_price+extra_charges)-discount_amount;
        cout<<"\nBILL AMOUNT IS(RS): "<<total<<endl;
        v.seekp(0,ios::beg);
        v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
        }
    void repairing()
    {
        fstream v;
        v.open("C:CODSE202F-011.txt",ios::app);
        cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;
        cout<<"ITEM 1: "<<item_no[0]<<"\nITEM NAME: "<<item_name[0]<<"\nPRICE: "<<price[0]<<"\nQUANTITY: "<<quantity[0]<<endl;
        cout<<"ENTER NUMBER OF ITEMS BOUGHT: ";
        cin>>num1;

        cout<<"\n"<<endl;
        cout<<"ITEM 2: "<<item_no[1]<<"\nITEM NAME: "<<item_name[1]<<"\nPRICE: "<<price[1]<<"\nQUANTITY: "<<quantity[1]<<endl;
        cout<<"ENTER NUMBER OF ITEMS BOUGHT: ";
        cin>>num2;
        cout<<"\n"<<endl;
        cout<<"ENTER LABOUR CHARGE: ";
        cin>>extra_charges;
        repair_charge=(price[0]*num1)+(price[1]*num2)+extra_charges;
        discount_amount=repair_charge*(discount/100);
        total=repair_charge-discount_amount;
        cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
        cout<<"\nBILL AMOUNT IS(RS): "<<total<<endl;

v.seekp(0,ios::beg);
        v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
v.close();

    }
    void servicing()
    {
        fstream v;
        v.open("C:CODSE202F-011.txt",ios::app);
        cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;

        cout<<"AMOUNT FOR SERVICING :"<<service_charge<<endl;
        cout<<"ENTER EXTRA CHARGES IF ANY: ";
        cin>>extra_charges;

                    discount_amount=(service_charge+extra_charges)*(discount/100);
                    cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
        cout<<"\nBILL AMOUNT IS(RS): "<<(service_charge+extra_charges)-discount_amount<<endl;
        v.seekp(0,ios::beg);
        v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
        v.close();
    }

};

class car:public vehicle
{

float extra_charges;
float discount_amount;
string item_no[2];
string item_name[2];
double price[2];
double quantity[2];
float total;
string vehicle_num;
int num1;
int num2;
public:
     car(float wash_price,float discount,string item_no1,string item_no2,string item_name1,string item_name2,float price1,float price2,int quantity1,int quantity2,float service_charge):vehicle(wash_price,discount,repair_charge,service_charge)
    {
       this->discount=discount;
       this->item_no[0]=item_no1;
        this->item_no[1]=item_no2;
        this->item_name[0]=item_name1;
        this->item_name[1]=item_name2;
        this->price[0]=price1;
        this->price[1]=price2;
        this->quantity[0]=quantity1;
        this->quantity[1]=quantity2;
    }
   void washing()
    {
        fstream v;
        v.open("C:CODSE202F-011.txt",ios::app);
        cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;

        cout<<"AMOUNT FOR WASHING :"<<wash_price<<endl;
        cout<<"ENTER EXTRA CHARGES IF ANY: ";
        cin>>extra_charges;
        discount_amount=(wash_price+extra_charges)*(discount/100);
        cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
        total=(wash_price+extra_charges)-discount_amount;
        cout<<"\nBILL AMOUNT IS(RS): "<<total<<endl;
         v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
        v.close();

    }
    void repairing()
    {
        fstream v;
        v.open("C:CODSE202F-011.txt",ios::app);
        cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;

        cout<<"ITEM 1: "<<item_no[0]<<"\nITEM NAME: "<<item_name[0]<<"\nPRICE: "<<price[0]<<"\nQUANTITY: "<<quantity[0]<<endl;
        cout<<"ENTER NUMBER OF ITEMS BOUGHT: ";
        cin>>num1;
        cout<<"\n"<<endl;
        cout<<"ITEM 2: "<<item_no[1]<<"\nITEM NAME: "<<item_name[1]<<"\nPRICE: "<<price[1]<<"\nQUANTITY: "<<quantity[1]<<endl;
        cout<<"ENTER NUMBER OF ITEMS BOUGHT: ";
        cin>>num2;
        cout<<"\n"<<endl;
        cout<<"ENTER LABOUR CHARGE: ";
        cin>>extra_charges;
        repair_charge=(price[0]*num1)+(price[1]*num2)+extra_charges;
        discount_amount=repair_charge*(discount/100);
        total=repair_charge-discount_amount;
        cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
        cout<<"\nBILL AMOUNT IS(RS): "<<total<<endl;
         v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
        v.close();
    }
    void servicing()
    {
        fstream v;
        v.open("C:CODSE202F-011.txt",ios::app);
        cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;
        cout<<"AMOUNT FOR SERVICING :"<<service_charge<<endl;
        cout<<"ENTER EXTRA CHARGES IF ANY: ";
        cin>>extra_charges;

                    discount_amount=(service_charge+extra_charges)*(discount/100);
                    cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
                    total=(service_charge+extra_charges)-discount_amount;
        cout<<"\nBILL AMOUNT IS(RS): "<<total<<endl;
         v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
        v.close();
    }





};
class threewheel:public vehicle
{
float extra_charges;
    float discount_amount;
    string item_no[2];
string item_name[2];
double price[2];
double quantity[2];
string vehicle_num;
float total;
int num1;
int num2;
public:
    threewheel(float wash_price,float discount,string item_no1,string item_no2,string item_name1,string item_name2,float price1,float price2,int quantity1,int quantity2,float service_charge):vehicle(wash_price,discount,repair_charge,service_charge)
    {
        this->discount=discount;
         this->item_no[0]=item_no1;
        this->item_no[1]=item_no2;
        this->item_name[0]=item_name1;
        this->item_name[1]=item_name2;
        this->price[0]=price1;
        this->price[1]=price2;
        this->quantity[0]=quantity1;
        this->quantity[1]=quantity2;
    }
   void washing()
    {fstream v;
    v.open("C:CODSE202F-011.txt",ios::app);
    cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;
          cout<<"AMOUNT FOR WASHING :"<<wash_price<<endl;
        cout<<"ENTER EXTRA CHARGES IF ANY: ";
        cin>>extra_charges;
        discount_amount=(wash_price+extra_charges)*(discount/100);
        cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
        total=(wash_price+extra_charges)-discount_amount;
        cout<<"\nBILL AMOUNT IS(RS): "<<total<<endl;
          v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
        v.close();
    }
    void repairing()
    {
        fstream v;
        v.open("C:CODSE202F-011.txt",ios::app);
        cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;

        cout<<"ITEM 1: "<<item_no[0]<<"\nITEM NAME: "<<item_name[0]<<"\nPRICE: "<<price[0]<<"\nQUANTITY: "<<quantity[0]<<endl;
        cout<<"ENTER NUMBER OF ITEMS BOUGHT: ";
        cin>>num1;
        cout<<"\n"<<endl;
        cout<<"ITEM 2: "<<item_no[1]<<"\nITEM NAME: "<<item_name[1]<<"\nPRICE: "<<price[1]<<"\nQUANTITY: "<<quantity[1]<<endl;
        cout<<"ENTER NUMBER OF ITEMS BOUGHT: ";
        cin>>num2;
        cout<<"\n"<<endl;
        cout<<"ENTER LABOUR CHARGE: ";
        cin>>extra_charges;
        repair_charge=(price[0]*num1)+(price[1]*num2)+extra_charges;
        discount_amount=repair_charge*(discount/100);
        total=repair_charge-discount_amount;
        cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
        cout<<"\nBILL AMOUNT IS(RS): "<<total<<endl;
          v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
        v.close();
    }
    void servicing()
    { fstream v;
    v.open("C:CODSE202F-011.txt",ios::app);
    cout<<"ENTER VEHICLE NUMBER: ";
    cin>>vehicle_num;
       cout<<"AMOUNT FOR SERVICING :"<<service_charge<<endl;
        cout<<"ENTER EXTRA CHARGES IF ANY: ";
        cin>>extra_charges;

                    discount_amount=(service_charge+extra_charges)*(discount/100);
                    cout<<"DISCOUNT AMOUNT IS: "<<discount_amount<<endl;
                    total=(service_charge+extra_charges)-discount_amount;
        cout<<"\nBILL AMOUNT IS(RS): "<<total<<endl;
          v<<"***BILL***"<<endl;
        v<<"VEHICLE NUMBER: "<<vehicle_num<<endl;
        v<<"AMOUNT FOR WASHING: "<<wash_price<<endl;
        v<<"EXTRA CHARGES: "<<extra_charges<<endl;
        v<<"DISCOUNT AMOUNT: "<<discount_amount<<endl;
        v<<" TOTAL BILL AMOUNT: "<<total<<endl;
        v<<"\n"<<endl;
        v.close();

    }




};
class Employee
{
    string employee_number;
    float hourly_fee;
    string employee_position;
    string employee_name;
    float income;
public:
    void display()
    {
    cout<<"************************************"<<endl;
    cout<<"EMPLOYEE DETAILS"<<endl;
    cout<<"************************************"<<endl;
    }
    void setEmployeeData(string employee_number,float hourly_fee,string employee_name,string employee_position);

    void findincome();

};
class Activity
{
    int hours_taken;
public:
    void setHoursTaken(int hours_taken);
    int getHoursTaken();
};
void Employee::setEmployeeData(string employee_number,float hourly_fee,string employee_name,string employee_position)
{
    this->employee_number=employee_number;
    this->hourly_fee=hourly_fee;
    this->employee_name=employee_name;
    this->employee_position=employee_position;

}
void Employee::findincome()
{
    Activity wash,repair,service;
    wash.setHoursTaken(2);
    repair.setHoursTaken(3);
    service.setHoursTaken(5);
    income=hourly_fee*wash.getHoursTaken()*repair.getHoursTaken()*service.getHoursTaken();


    cout<<"EMPLOYEE ID: "<<employee_number<<endl;
    cout<<"EMPLOYEE NAME: "<<employee_name<<endl;
    cout<<"EMPLOYEE POSITION: "<<employee_position<<endl;
    cout<<"DAILY INCOME IS: "<<income<<"\n\n"<<endl;
}
void Activity::setHoursTaken(int hours_taken)
{
    this->hours_taken=hours_taken;

}
int Activity::getHoursTaken()
{
    return hours_taken;
}



int main()
{
    Service_Centre s;
    s.login();
    s.setdetails("AUTO MART");
   s.showdetails();

   Customer c;


     Stock x;


    Stock a("b002","cable","bike",1000,10);


    Stock b("t001","battery","three wheel",5000,4);


    Stock d("t002","cable","three wheel",1500,5);


    Stock e("c001","battery","car",10000,2);


    Stock f("c002","cable","car",4000,6);
vehicle*v;
Bike m(1000,2,"b001","boo2","Battery","cable",3000,1000,5,10,2500);
v=&m;
car r(5000,2,"c001","c002","Battery","cable",10000,4000,2,6,6000);


threewheel z(2000,3,"t001","t002","Battery","cable",5000,1500,4,5,3000);

 Employee k,l,n;

    k.setEmployeeData("E001",200,"Kamal Siriwardhana","Mechanic");
    l.setEmployeeData("E002",300,"Nimal Silva","Head Mechanic");
    n.setEmployeeData("E003",100,"Samith Perera","Trainee");


int menu;
   do
   {
       cout<<"\n\n"<<endl;
       cout<<"**************************************"<<endl;
       cout<<"          MAIN MENU                   "<<endl;
       cout<<"**************************************"<<endl;
       cout<<"ENTER 1 TO REGISTER NEW CUSTOMER"<<endl;
       cout<<"ENTER 2 TO VIEW THE SPARE PART STOCK"<<endl;
       cout<<"ENTER 3 TO REGISTER NEW VEHICLE"<<endl;
       cout<<"ENTER 4 FOR BIKE SERVICES"<<endl;
       cout<<"ENTER 5 FOR THREE WHEEL SERVICES"<<endl;
       cout<<"ENTER 6 FOR CAR SERVICES"<<endl;
       cout<<"ENTER 7 FOR EMPLOYEE DETAILS"<<endl;
       cout<<"ENTER 8 TO EXIT"<<endl;
       cout<<"***************************************"<<endl;
       cout<<"\n\n"<<endl;

   cout<<"ENTER THE CHOICE: ";
   cin>>menu;
   cout<<"\n"<<endl;

   switch(menu)
   {
    case 1:
    c.CustomerDetails();
    break;

    case 2:
    x.set();
     x.show();
     a.show();
     b.show();
     d.show();
     e.show();
     f.show();
     break;

       case 3:
         v->vehicleregister();
       break;

       case 4:

      v->select();
       break;

       case 5:
v=&z;
        v->select();
       break;

       case 6:
v=&r;
       v->select();
       break;

       case 7:
           k.display();

    k.findincome();
    l.findincome();
    n.findincome();
    break;
       case 8:
        exit(0);
   }

   }while(menu!=8);


    return 0;
}


