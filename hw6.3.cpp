//Write a program that makes essential use of as
//many of the above types as possible to do
//something meaningful
#include<iostream>
#include<format>
#include<vector>
#include<initializer_list>


using namespace std;
double getMedianSingle(vector<double> grades) { 
	double result;

	return result; 
}

double getMedianDouble(vector<double> grades) {}

double getMeanAll(vector<double> grades) {}

double getMeanNoMinMax(vector<double> grades) {}


struct Course {
	string name;
	string instructor;
	vector<string> hw;
	vector<double> grades;
	double getAverage();
};

class Student {
public:
	Student() {}
	void setName(string name) { name_ = name; }
	void setCourses(initializer_list<string> courses) { 
		std::copy(courses.begin(), courses.end(), back_inserter(courses_));
	}
	double getGPA(vector<double> grades);
private:
	double gpa_;
	string name_;
	vector<Course> courses_;
};


int main() {
	Student alex = Student();
	alex.setName("Alex");
	alex.setCourses({ "Advanced C++","Python","Potography" });


	return 0;
}