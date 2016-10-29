#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class NumDays{

	float workHour;
	
public:
	NumDays(){};
	
	NumDays(float time){
		workHour= time;
	}
	
	float dayCount(){
		return workHour/8;
	}
	
	NumDays operator+(NumDays extra){
		NumDays totalHour;
		totalHour.workHour= workHour + extra.workHour;
		return totalHour;
	}
	
	NumDays operator-(NumDays off){
		NumDays totalHour;
		totalHour.workHour= workHour - off.workHour;
		return totalHour;
	}
	
	NumDays operator++(){
		NumDays totalHour;
		totalHour.workHour= ++workHour;
		return totalHour;
	}
	
	NumDays operator--(){
		NumDays totalHour;
		totalHour.workHour= --workHour;
		return totalHour;
	}
};


int main(){
	NumDays work1(8);
	NumDays work2(21);
	NumDays add;
	add= work1+work2;
	cout<<fixed <<setprecision(2);
	cout<<"+ operator at work: "<<add.dayCount() <<" work days" <<endl;
	
	NumDays sub;
	sub= work2-work1;
	cout<<"- operator at work: "<<sub.dayCount() <<" work days" <<endl;
		
	NumDays fixPlus;
	for(int i=0;i<10;i++){
	fixPlus= ++work1;}
	cout<<"++ operator at work: "<<fixPlus.dayCount() <<" work days" <<endl;
	
	NumDays fixMin;
	for(int i=0;i<5;i++){
	fixMin= --work1;}
	cout<<"-- operator at work: "<<fixMin.dayCount() <<" work days" <<endl;
	
	return 0;
}
