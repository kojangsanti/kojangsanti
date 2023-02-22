#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main ()
{
	ofstream Myfile;
	Myfile.open("patient_logbook.txt");
	
	string firstName;
	string lastName;
	int age;
	string dateOfBirth;
	double bodyTemperature;
	double bloodPressure;
	string patientDoctor;
	
	cout<<"Enter Firstname\n";
	cin>>firstName;
	cout<<"Enter lastName\n";
	cin>>lastName;
	cout<<"Enter age\n";
	cin>>age;
	cout<<"enter date of birth\n";
	cin>>dateOfBirth;
	cout<<"Enter body temperature\n";
	cin>>bodyTemperature;
	cout<<"Enter blood Pressure\n";
	cin>>bloodPressure;
	cout<<"enter name of Patient's doctor\n";
	cin>>patientDoctor;
	
	Myfile<<firstName<<lastName<<age<<dateOfBirth<<bodyTemperature<<bloodPressure<<patientDoctor<<endl;
	
	Myfile.close();
	
return 0;
	
}
