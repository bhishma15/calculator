#include<iostream>
#include "add.h"
using namespace std;

int main(){
	cout<<"Welcome to Calculator App"<<endl;
        cout<<"Select below Options"<<endl;
        cout<<"1) Addition"<<endl<<"2) Substraction"<<endl;
        cout<<"3)  Multiplication"<<endl<<"4) Division"<<endl;
        cout<<"5) Quit"<<endl;
        int a;
        cin>>a;
        switch(a){
		case 1: 
			cout<<"Give two Numbers to add"<<endl;
			int a,b;
			cin>>a>>b;
			int c=add(a,b);
			cout<<a<<" + "<<b<<" = "<<c<<endl;
	}
	return 0;
}
