//Author: Michelle Gomez
#include<iostream>
#include<string>

using namespace std;

const int LIST_SIZE = 5;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item; 
do{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
if( input =='a' || input =='A')
{
    cout<<"What is the item?"<<endl;
    cin>>item;
    int len = item.length(); 
  if(numItems < 5)
  {
    list[numItems] = item;
    numItems++; 
  }
    else 
    {
       cout<<"You'll need a bigger list!"<<endl; 
    }
   
}    
  }
while (input != 'q' && input != 'Q');

     
    if( input == 'q' || input =='Q')
    {
        cout<<"==ITEMS TO BUY=="<<endl;
        cout<<"1 "<<list[0]<<endl; 
        cout<<"2 "<<list[1]<<endl; 
        cout<<"3 "<<list[2]<<endl;
        cout<<"4 "<<list[3]<<endl; 
        cout<<"5 "<<list[4]<<endl; 

    }
 
    return 0;
}
