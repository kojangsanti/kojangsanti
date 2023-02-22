#include <iostream>

using namespace std;

double math_score (double test_score, double average, int number)
{	
	cout<<"Enter number of test scores: \n";
	cin>>number;
	
	int i;
	for (i=1; i<=number; i++)
	{	
		cout<<"Enter Test scores\n";
		cin>>test_score;
		cout<<"Test Scores are: \n"<<test_score;
	}
	
	int j, sum = 0;
	for (j=1; j<=i; j++)
	{
		sum +=test_score;
		average = sum/number;
	}
	
	cout<<"The average of the test scores is: "<<average;
	
	
}

int main ()
{
	double test_score, average,output;
	int number;
	
	output = math_score(test_score, average, number);
	cout<<output;
	
	return 0;
	
}
