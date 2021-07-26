#include<iostream>
#include <cmath>
#include<chrono>
#include<ctime>
using namespace std;

void times()
{
time_ttt;              //argument declaration for time()
struct tm*ti;           //varaible to store return value of time
time(&tt);              //applying time()
ti=localtime(&tt);      //using localtime()
cout<<asctime(ti);      //Displays 

}
/*------------------------------------------------------------------------------------------------time display*/
class stop
{

    public: void Exit()
    {
        cout<<" \t\t * Thankyou Visit Again * "<<endl;
    }
};

class variable
{
    public: double bal = 50000.00;
    double wd;
    double dpt;
    double trn;
    string acc;
    int choicelang;

};

class atm : public variable,public stop   //multiple inheritence
{
    public : atm()   //default constructor
    {
        cout<<"\t\t\t WELCOME!\n";
        cout<< "\t\t****\n" << endl
<< "\t\tTHE STUDENT'S BANK\n\n"<<"\t\t---* WELCOMES YOU *---\n" << endl
<< "\t\t****\n"<<endl;
    }

    public : void pin(int flag)
    {
        int pin, keypin=1234;

        cout<<"Select Language\n";
        cout<<" \t\t1) ENGLISH\n \t\t2) हिंदी\n \t\t3) मराठी\n"<<endl;
        cin>>choicelang;
        switch(choicelang)
        {
            case 1:
            cout<<"\t\tHello Welcome\n";
            break;

            case 2:
            cout<<"\t\tआपकास्वागतहै \n";
            break;

            case 3:
            cout<<"\t\tआपलंस्वागतआहे \n";
            break;

            default :
            cout<<"\t\tinvalid\n";

        }



        if(choicelang==1)
        {

            cout<< "\t\tUSER LOGIN\n" << endl;
            cout<<"Enter your pin : ";
        }
        else if(choicelang==2)
        {
            cout<< "\t\tउपयोगकर्तालॉगिन\n" << endl;
            cout<<"कृपयाअपनापिनदर्जकरें : ";
        }
        else if(choicelang==3)
        {
           cout<< "\t\tवापरकर्तालॉगिन\n" << endl;
        cout<<"आपलापिनटाका : ";
        }

        for(int i=1;i<=3;i++)
        {
            cin>>pin;
            if(pin==keypin)
            {
                switch(choicelang)
                {
                    case 1:cout<<"\t\tloginsuccesful"<<endl;
                        break;
                    case 2:cout<<"\t\tसफलतापूर्णप्रवेश"<<endl;
                        break;
                    case 3:cout<<"\t\tलॉगिनयशस्वी"<<endl;
                        break;
                }

                flag=1;
                transaction();
            }
            else 
            {
                switch(choicelang)
                {
                    case 1:
                    cout<<"\t\tIncorrect pin"<<endl;
                    cout<<"Enter your pin again :";
                        break;

                    case 2:
                    cout<<"\t\tगलतपिनहै"<<endl;
                    cout<<"फिरसेअपनापिनडालें :";
                        break;
                    case 3:
                    cout<<"\t\tचुकीचापिनआहे"<<endl;
                    cout<<"पुन्हाआपलापिनटाका:";
                        break;
                }



                if(i==3)
                {
                switch(choicelang)
                {
                    case 1:
cout<<"\t\t 3 times incorrect password. System blocked. Try contacting our bank"<<endl;
                    break;

                    case 2:
                    cout<<"\t\t सिस्टमब्लॉकहोगया।बैंकसेसंपर्ककरनेकाप्रयासकरें"<<endl;
                    break;

                    case 3:
                    cout<<"\t\t सिस्टमअवरोधित. बँकेशीसंपर्कसाधण्याचाप्रयत्नकरा" <<endl;
                    break;
                }

                }
                flag = 0;


            }
        }
    }

    public : void transaction()
    {
        int choice;

        switch(choicelang)
        {
            case 1:
                 cout<<"\n\t\t**welcome"<<endl;
                 cout<<"\n\t\tEnter your choice"<<endl;
                 cout<<"\t\t 1) Check Balance "<<endl;
                 cout<<"\t\t 2) Money Withdrawl "<<endl;
                 cout<<"\t\t 3) Deposit"<<endl;
                 cout<<"\t\t 4) Transfer "<<endl;
                 cout<<"\t\t 5) Exit "<<endl;
                break;

            case 2:
                 cout<<"\n\t\t*स्वागतहे  *"<<endl;
                 cout<<"\n\t\t अपनीपसंदकानंबरडालें "<<endl;
                 cout<<"\t\t 1) संतुलनकीजाँच "<<endl;
                 cout<<"\t\t 2)पैसेकीवापसी "<<endl;
                 cout<<"\t\t 3)जमा "<<endl;
                 cout<<"\t\t 4)स्थानांतरण "<<endl;
                 cout<<"\t\t 5)बाहर "<<endl;
                break;

            case 3:
                 cout<<"\n\t\t*स्वागतआहे*"<<endl;
                 cout<<"\n\t\tआपलीनिवडप्रविष्टकरा"<<endl;
                 cout<<"\t\t 1) शिल्लकतपासणी"<<endl;
                 cout<<"\t\t 2) पैसेकाढणे "<<endl;
                 cout<<"\t\t 3) जमा "<<endl;
                 cout<<"\t\t 4)हस्तांतरण "<<endl;
                 cout<<"\t\t 5)बाहेर "<<endl;
                break;
        }

        cin>>choice;
        switch(choice)
        {
            case 1:
            times();
            cout<<"\n";

            switch(choicelang)
            {
            case 1: cout<<" \t\t * Balance Enquiry *"<<endl;
                break;

            case 2: cout<<" \t\t * संतुलनकीजाँच *"<<endl;
                break;

            case 3: cout<<" \t\t * शिल्लकतपासणी *"<<endl;
                break;
            }
            balance();
            break;

            case 2:
            times();
            cout<<"\n";
            switch(choicelang)
            {
            case 1: cout<<" \t\t * Money Withdrawl *"<<endl;
                break;

            case 2: cout<<" \t\t * पैसेकीवापसी *"<<endl;
                break;

            case 3: cout<<" \t\t * पैसेकाढणे *"<<endl;
                break;
            }

Withdrawl();
            break;

            case 3:
            times();
            cout<<"\n";
            switch(choicelang)
            {
            case 1: cout<<" \t\t * Deposit your money *"<<endl;
                break;

            case 2: cout<<" \t\t *अपनापैसाजमाकरीये *"<<endl;
                break;

            case 3: cout<<" \t\t *तुमचेपैसेजमाकरा *"<<endl;
                break;
            }
            Deposit();
            break;

            case 4:
            times();
            cout<<"\n";
            switch(choicelang)
            {
            case 1: cout<<" \t\t * Transfer money *"<<endl;
                break;

            case 2: cout<<" \t\t * पैसेट्रांसफरकरनेकेलिए *"<<endl;
                break;

            case 3: cout<<" \t\t * पैसेपाठवाण्यासाठी *"<<endl;
                break;
            }
            Transfer();
            break;

            case 5:
            times();
            cout<<"\n";

            switch(choicelang)
            {
            case 1: cout<<"\t\t * Thankyou for your response *"<<endl;
                break;

            case 2: cout<<"\t\t * आपकीप्रतिक्रियाकेलिएधन्यवाद *"<<endl;
                break;

            case 3: cout<<"\t\t * आपल्याप्रतिसादाबद्दलधन्यवाद *"<<endl;
                break;
            }

            Exit();
            break;

            default:
            times();
            cout<<"\n";
            cout<<" \t\t * Invalid Choice *"<<endl;
        }

    }


    public: void balance()
    {
        switch(choicelang)
        {
            case 1: cout<<" \t\t Your current balance is Rs "<<bal<<"\n\n"<<endl;
                break;

            case 2: cout<<" \t\tआपकावर्तमानशेषरुपयाहै"<<bal<<"\n\n"<<endl;
                break;

            case 3: cout<<" \t\tतुमचीसध्याचीशिल्लकरुपयेआहे"<<bal<<"\n\n"<<endl;
                break;
        }

        transaction();
    }

    void Withdrawl()
    {
        switch(choicelang)
        {
            case 1: cout<<" \t\t Enter amount to be withdrawn :"<<"Rs- ";
                break;

            case 2: cout<<" \t\tनिकालीजानेवालीराशिदर्जकरें:"<<"Rs- ";
                break;

            case 3: cout<<" \t\t पैसेकाढण्याचीरक्कमटाका :"<<"Rs- ";
                break;
        }

        cin>>wd;
        if(wd<bal)
        {
        switch(choicelang)
        {
            case 1: cout<<"\n\t\t * Please wait while amount is been withdrawn *"<<endl;
                break;

            case 2: cout<<"\n\t\t * कृपयाप्रतीक्षाकरेंजबकिराशिवापसलेलीगईहै*"<<endl;
                break;

            case 3: cout<<"\n\t\t *कृपयारक्कमकाढलीजाईपर्यंतप्रतीक्षाकरा*"<<endl;
                break;
        }

bal = bal-wd;
            switch(choicelang)
        {
            case 1: cout<<" \t\t Your current balance is Rs "<<bal<<"\n\n"<<endl;
                break;

            case 2: cout<<" \t\tआपकावर्तमानशेषरुपयाहै"<<bal<<"\n\n"<<endl;
                break;

            case 3: cout<<" \t\tतुमचासध्याचीशिल्लकरुपयेआहे"<<bal<<"\n\n"<<endl;
                break;
        }

            transaction();
        }
        else
        {
            switch(choicelang)
        {
            case 1: cout<<"\n\t\t * Entered amount is greater than Bank balance, Please enter valid amount *"<<endl;
                break;

            case 2: cout<<"\n\t\t * दर्जराशिबैंकशेषराशिसेअधिकहै, कृपयामान्यराशिदर्जकरें *"<<endl;
                break;

            case 3: cout<<"\n\t\t *प्रविष्टकेलेलीरक्कमबँकशिल्लकपेक्षाजास्तआहे, कृपयावैधरक्कमप्रविष्टकरा*"<<endl;
                break;
        }

            transaction();
        }
    }
    public: void Deposit()
    {
        switch(choicelang)
        {
            case 1: cout<<" \t\t Enter amount to be Deposited : "<<"Rs - ";
                break;

            case 2: cout<<" \t\t जमाकीजानेवालीराशिदर्जकरें : "<<"Rs - ";
                break;

            case 3: cout<<" \t\tजमाकरण्याचीरक्कमप्रविष्टकरा : "<<"Rs - ";
                break;
        }

        cin>>dpt;
        switch(choicelang)
        {
            case 1:cout<<"\n\t\t** Please wait while amount is been deposited ** "<<endl; 
                break;

            case 2:cout<<"\n\t\t** कृपयाप्रतीक्षाकरेंजबकिराशिजमाहोरहीहै ** "<<endl;
                break;

            case 3:cout<<"\n\t\t** कृपयारक्कमजमाहोईपर्यंतप्रतीक्षाकरा ** "<<endl;
                break;
        }

bal = bal + dpt;
        switch(choicelang)
        {
             case 1: cout<<" \t\t Your current balance is Rs "<<bal<<"\n\n"<<endl;
                break;

            case 2: cout<<" \t\tआपकावर्तमानसंतुलनहै "<<bal<<"\n\n"<<endl;
                break;

            case 3: cout<<" \t\tतुझावर्तमानशिल्लकआहे"<<bal<<"\n\n"<<endl;
                break;
        }

        transaction();
    }
    public: void Transfer()
    {
        switch(choicelang)
        {
case 1:  cout<<" Enter 10 digit account no to whom u want to transfer. "<<endl;
                break;

            case 2:  cout<<"10 अंकोंकाखातादर्जकरेंजिसेआपस्थानांतरितकरनाचाहतेहैं। "<<endl;
                break;

case 3:  cout<<"   आपणकोणासहस्तांतरितकरूइच्छितआहातते 10 अंकीखातेप्रविष्टकरा. "<<endl;
                break;
        }

        for(int j =1;j<4;j++)
        {
            cin>>acc;
            if(acc.length() ==10 )
            {
                switch(choicelang)
        {
            case 1: cout<<"\t\t Enter Transfer amount : "<<"Rs -";
                break;

case 2: cout<<"\t\tअंतरणराशिदर्जकरें: "<<"Rs -";
break;

            case 3: cout<<"\t\tहस्तांतरणरक्कमप्रविष्टकरा: "<<"Rs -";
                break;
        }

cin>>trn;
                switch(choicelang)
        {
            case 1: 
                cout<<" \t\t * Transfer processing *"<<endl;
                cout<<" \t\t * Transfer to account no "<<acc<<" is succesful *"<<endl;
                break;

            case 2:
                cout<<" \t\t *स्थानांतरणचालुहै ***"<<endl;
                cout<<" \t\t * account no "<<acc<<"ट्रांसफरपूराहुआहै *"<<endl;
                break;

            case 3:
                cout<<" \t\t * हस्तांतरणचालूआहे *"<<endl;
                cout<<" \t\t * account no "<<acc<<"ट्रांसफरपूरनझालं *"<<endl;
                break;
        }

bal=bal-trn;
                switch(choicelang)
        {
            case 1: cout<<" \t\t Your current balance is Rs "<<bal<<"\n\n"<<endl;
                break;

            case 2: cout<<" \t\t आपकावर्तमानसंतुलनहै "<<bal<<"\n\n"<<endl;
                break;

            case 3: cout<<" \t\t तुझावर्तमानशिल्लकआहे"<<bal<<"\n\n"<<endl;
                break;
        }

                transaction();

            }
            else
            {
                if(j==3)
                {
                switch(choicelang)
        {
case 1: cout<<" \t\t * System blocked . Incorrect Thrice. Contact our Bank * "<<endl;
            break;

            case 2: cout<<" \t\t *सिस्टमअवरुद्धहै।तीनबारगलत।कृपयाअपनेबैंकसेसंपर्ककरें * "<<endl;
            break;

            case 3: cout<<" \t\t सिस्टमअवरोधिततीनवेळाचुकीचाकृपयाआपल्याबँकेशीसंपर्कसाधा "<<endl;
            break;
        }

                }
                else
                {
                switch(choicelang)
        {
case 1: cout<<" \t\t invalid. Try again"<<endl;
                break;

            case 2: cout<<" \t\tअवैध।पुनःप्रयासकरें"<<endl;
                break;

            case 3: cout<<" \t\tअवैध. पुन्हाप्रयत्नकरा "<<endl;
                break;
        }
                }
            }
        }
    }
};

int main()
{
    int flag=0;
    times();
atmobj;
obj.pin(flag);
return 0;
}
