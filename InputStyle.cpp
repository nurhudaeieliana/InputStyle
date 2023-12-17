#include <iostream>
using namespace std;

int main()
{
    string fullName, hobby;
    int age, rate;
    
    do
    {
        //int length = fullName.length();
        string response;
         
        cout<<"Enter your name please: ";
        getline(cin,fullName);
        
        if(fullName.empty())
        {
            cout<< "you didn't enter your name: "<<endl;
            cout << "Do you want to try again? (yes/no): ";
            getline(cin, response);
            
            if(response != "yes")
            {
                break;
            }
            else 
            {
                continue; //Go back to the beginning of the loop 
            }

        }
        
         int length = fullName.length();
        
        if(length >= 15)
        {
            cout << "Your name cannot be over 15 character, sorry."<<endl;
        }
        else
        {
            cout << "Welcome "<<fullName << endl;
            break;
        }
        
        cout << "Do you want to try again? (yes/no): ";
        getline(cin, response);
        
        if(response != "yes")
        {
            break;
        }
        
    }while(true);
    
    cout << "Enter your age: " << endl;
    cin >> age;
    cin.ignore();
    
    cout << "Enter your hobby: "<<endl;
    getline(cin,hobby);
    
    cout<< "Please rate your satisfaction for this system(1-3): ";
    cin >> rate;
    cin.ignore();
    
    if(rate == 1)
    {
        cout<< "NOT GOOD/ SO SAD"<<endl;
    }    
    else if(rate == 2)
    {
        cout<<"MAYBE GOOD....YEAH....MAYBE...NOT THAT GOOD"<<endl;
    }
    else
    {
        cout << "I THINK IT'S QUITE GODD FOR REFERENCE....HAHAHAHHAHA."<<endl;
    }
    cout<<endl;
    
    cout<<"====THANK YOU===="<<endl;
    
    cout<<endl;
    return 0;
}

