//this application is for a stop watch
#include<iostream>
#include<windows.h>

using namespace std;

void display(int&,int&,int&);
void counter(int&,int&,int&);

int main(){
	int h=0,m=0,s=0;
	
cout <<"\t\t\t\t STOP WATCH \n";

while(true){
		Sleep(1);
		s++;
		
		if(s>59)
		{
			m++;
			s=0;
			
		}
		if(m>59)
		{
			h++;
			m=0;
			s=0;
		}
		display(h,m,s);//final display
	}
	

	
	
	return 0;
}

void display(int& hours,int& min,int& sec)
{
	system("CLS");//clear the screen

	cout<<"\t\t\t\t"<<hours<<":"<<min<<":"<<sec<<endl;
}


