//Author: Joseluis Zamora
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector <string> list; //creates vecoter for the grocery list. 
    int numItems = 0; 
    char input;
    string item;
    list.clear(); 
    do 
        {
            cout<<"\n==GROCERY LIST MANAGER==";
            cout<<"\nEnter your choice: ";
            cout<<"\n (A)dd an item";
            cout<<"\n (Q)uit";
            cout<<"\nYour choice (A/Q): ";
            cin>>input;
            if ( input == 'a' || input == 'A' )
                {  
                    cout<<"What is the item?\n"; 
                    cin >> item;
                    list.push_back(item); 
                }   
    } while ( input != 'Q' && input != 'q' );
        if ( !list.empty())
            {
                cout<<"==ITEMS TO BUY==\n";
                for (int i = 0; i < list.size() ; i++) 
                    {
                        cout<<i+1; 
                        cout<<" "<<list[i]<<endl;
                    }
            }       
        else 
            {
                cout<< "No items to buy!";
            }
  return 0;
}
