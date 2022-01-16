#include <iostream>
using namespace std;

int main(){
	float loan, interest_rate;
	int monthpay;
	cout<<"Loan Amount :";
	cin>>loan;												//input loan
	cout<<"Interest Rate per year (in percentage):";
	cin>>interest_rate;										//input rate of interest
	interest_rate = interest_rate / 100;
	cout<<"Your monthly payment must be above $"<<loan*(interest_rate/12)<<endl<<"Monthly Payment :";
	cin>>monthpay;											//input monthly payment
	
	switch(monthpay>loan*(interest_rate/12)){
		case 0 :
			cout<<"Your monthly payment is TOO LOW."<<endl<<"Your monthly payment must be ABOVE $"<<loan*(interest_rate/12);
		 break;
		case 1 :
			int month = 0;
			while(loan>0){
				loan = loan + (loan*(interest_rate/12));
				loan = loan - monthpay;
				month = month + 1;
			}
			cout<<"Your loan will be paid after "<<month<<" month(s)."<<endl<<"With $"<<loan*(-1)<<" cashback in the last month.";
			break;
	}
}
