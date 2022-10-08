//this application is for a stop watch
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<windows.h>

using namespace std;

void display(int&,int&,int&);


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
		display(h,m,s);// display
	}
	

	
	
	return 0;
}

void display(int& hours,int& min,int& sec)
{
	system("CLS");//clear the screen

 cout << setfill(' ') << setw(45) << "STOPWATCH\n";
    cout << setfill(' ') << setw(55) << " --------------------------\n";
    cout << setfill(' ') << setw(29);
    cout << "( " << setfill('0') << setw(2) << hours << " hours | ";
    cout << setfill('0') << setw(2) << min << " min | ";
    cout << setfill('0') << setw(2) << sec << " sec )" << endl;
    cout << setfill(' ') << setw(55) << " --------------------------\n";

}

