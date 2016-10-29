#include<iostream>
#include<string>

using namespace std;

class DayOfYear{
	int day;
	static string month[12];
	static int date[31];
	
public:
	DayOfYear(int day){
		if(day<1 || day>365){
			cout<<"INVALID INPUT"; exit(0);
		}
		else{
		this->day = day;
		}
	}
	
	void print(){
		cout<<month[day/31] <<" " <<date[day/12];
	}
};

string DayOfYear::month[12]= {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
						"AUG", "SEP", "OCT", "NOV", "DEC"};
						
int DayOfYear::date[31]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
						
int main(){
	int day;
	while(true){
	cout<<"Enter day: "; cin>>day;
	DayOfYear calendar(day);
	calendar.print();
	cout<<endl;
	}
	return 0;
}
