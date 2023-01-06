#include <iostream>

using namespace std;

// Here given the forward declaration of class RK, so that compiler gets it when it reaches check_air_power function.
class RK;

class AK
{
    char code;
    public:
        void set_code()
        {
            cout<<"Enter the specified secret code : ";
            cin>>code;
        }

        void check_air_power(RK obj);
        // Now here we can't give the defination of the func, bez we have only given the forward declaration of class RK to the compiler, not the entire defination. So we can't really access the data members of RK from this location.
        
};


class RK
{
    int air, land;
    // The member func of another class is friend to this class.
    friend void AK :: check_air_power(RK obj);
    public:
        void func1()
        {
            cout<<"Just a func in RK class"<<endl;
        }

        void set_value()
        {
            cout<<"Input the value of air power : ";
            cin>>air;
            cout<<"Input the value of land power : ";
            cin>>land;
        }

        int print_data()
        {
            cout<<endl<<"The value of air power is "<<air<<endl;
            cout<<"The value of land power is "<<land<<endl;
        }
};

// Now given the defination of the func, so now compiler knows both the classes. And also knows the presence of this funcs (as we have forward declared it inside the class AK)
void AK :: check_air_power(RK obj)
{
    if (obj.air > 8)
    {
        cout<<"Finest air power right there!!"<<endl;
    }
    else if (obj.air > 5)
    {
        cout<<"Doing great in air. But need improvement"<<endl;
    }
    else if (obj.air > 2)
    {
        cout<<"Air power is not satisfactory"<<endl;
    }
    else
    {
        cout<<"Get the hell out of this competition"<<endl;
    }
}



int main()
{
    RK rahul;
    rahul.set_value();
    rahul.print_data();
    AK aa;
    aa.check_air_power(rahul);
    

    return 0;
}










