
#include <iostream>
using namespace std;

int main()
{
bool P;
bool Q;
int choices;

cout<<" Logic"<<endl<<"Type 1 for True and 0 for False"<<endl;
cin>>P;
if(P==1)
{
cout<<"P is True"<<endl;
}
if(P==0)
{
cout<<"P is False"<<endl;
}
cin>>Q;

if(Q==1)
{
cout<<"Q is True"<<endl;
}
if(Q==0)
{
cout<<"Q is False"<<endl;
}
choice:
cout<<"Type the number of your choice:  \n\n1.And\n2.Or\n3.Not"<<endl; cout<<"Choice: ";	
cin>>choices;
if (choices!=1&&choices!=2&&choices!=3)
{
cout<<"Undefined Choice\n\n\n";
goto choice;
}

if(choices==1)
{

if(Q==1&&P==1)
{
cout<<"True and True is True";
}
if(Q==0&&P==0)
{
cout<<"False and False is False";
}
if(Q==0&&P==1)
{
cout<<"There's a False therefore it is False";
}
if(Q==1&&P==0)
{
cout<<"There's a False therefore it is False";
}

}



if(choices==2)
{
if(Q==1&&P==1)
{
cout<<"True and True is True";
}
if(Q==0&&P==0)
{
cout<<"False and False is False";
}
if(Q==0&&P==1)
{
cout<<"There's a True therefore it is True";
}
if(Q==1&&P==0)
{
cout<<"There's a True therefore it is True";
}
}
if(choices==3)
{
if(Q==1)
{
cout<<"The Not logic of Q is False\n";
}
if(P==1)
{
cout<<"The Not logic of P is False\n";
}
if(Q==0)
{
cout<<"The Not logic of Q is True\n";
}
if(P==0)
{
cout<<"The Not logic of P is True\n";
}
}
}
