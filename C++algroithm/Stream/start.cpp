#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

vector<string> stringSplit(const string& str) {
	vector<string> tokens;
	istringstream iss(str);
	for (string i; iss >> i; ) {
		tokens.push_back(i);
	}
	return tokens;
}

void printState(const istream& iss) {
	cout<<(iss.good()? "g" : "-");
	cout<<(iss.eof() ? "e" : "-");
	cout << (iss.fail() ? "f" : "-");
	cout << (iss.bad() ? "b" : "-");
	cout << endl;
}

double stringToIntegtor(const string& str) {
	istringstream iss(str);
	printState(iss);
	double result;
	iss >> result;
	printState(iss);
	if (iss.fail())throw std::domain_error("666");
	return result;
}
int main() {
	//ostringstream oss("12 23 45",stringstream::ate);

	//cout << oss.str() << endl;

	//oss << 199 << "f";
	//cout << oss.str() << endl;
	////�Ὣԭ���ַ�����
	////����ate���ú�ͻ����ַ���������ֶ�

	//string name; int age;
	//string response;
	//cin >> name;
	//cin >> age;
	//cout << flush;
	//cout << name<<age<<endl;
	//cin >> response;
	//

	//string str = "i 33 4 mm ";

	//vector<string> token = stringSplit(str);

	//for (vector<string>::iterator it = token.begin(); it != token.end(); it++) { 
	//	cout << *it<< endl; 
	//}

	string str;
	cout << "����һ����";
	cin >> str;
	double re = stringToIntegtor(str);
	cout << endl << re;
	return 0;
}