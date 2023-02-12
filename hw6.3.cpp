//Write a program that makes essential use of as
//many of the above types as possible to do
//something meaningful
#include<iostream>
#include<format>
#include<vector>


using namespace std;

class Grades {
public:
	string class_name;
	string instructor;
	Grades() {}
	double getMedianSingle(vector<double> grades);
	double getMedianDouble(vector<double> grades);

private:
	double grades;
	int student_count;

};


int main() {

	return 0;
}