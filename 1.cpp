#include<iostream>
#include<string>
using namespace std;

class Number{
	int number;
	static string lessThan20[20];
	static string hundred;
	static string thousand;
	static string tyS[8];
	
public:
	Number(int number){
		if(number<0 || number>9999){
			cout<<"INVALID INPUT"; exit(0);
		}
		else{
		this->number= number;
		}
	}
	
	void print(){
		if(number>=1000 && (number - (number/100)*100)<20 )
		cout <<lessThan20[number/1000] <<" "  <<thousand <<" " <<lessThan20[number/100 - (number/1000)*10] <<" " <<hundred <<" "
				<<lessThan20[number - (number/100)*100];
		else if(number<1000 && (number - (number/100)*100)<20){
			cout <<lessThan20[number/100 - (number/1000)*10] <<" " <<hundred <<" "
				<<lessThan20[number - (number/100)*100];
		}
		else if(number>=1000 && (number - (number/100)*100)>20 )
		cout <<lessThan20[number/1000] <<" "  <<thousand <<" " <<lessThan20[number/100 - (number/1000)*10] <<" " <<hundred <<" "
				<<tyS[(number - (number/100)*100)/10 - 2] <<" " <<lessThan20[number - (number/10)*10];
		else if(number<100){
			cout<<tyS[number/10-2] <<" " <<lessThan20[number - (number/10)*10];
		}
		else if(number<20){
			cout<<lessThan20[number];
		}
	}

};

string Number::lessThan20[20]= {"zero", "one", "two", "three",
	"four", "five", "six", "seven", "eight", "nine", "ten", "eleven",
	"twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
	"nineteen"};
	
string Number::tyS[8]= {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	
string Number::hundred= "hundred";

string Number::thousand= "thousand";


int main(){
	
	int num;
	cout<<"Enter a number (0-9999): ";cin>>num;
	Number num1(num);
	
	num1.print();
	
	return 0;
}
