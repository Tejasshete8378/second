#include <iostream>
#include<fstream>
using namespace std;

int main(){
	
	string s;
	ifstream infile("characters.txt");
	getline(infile,s);
	cout<<"file readed"<<endl;
	infile.close();
	
	ofstream outfile;
	outfile.open("characters66.txt",ios::trunc|ios::in);
	outfile<<s;
	cout<<"file copyed"<<endl;
	outfile.close();
	
	ifstream infile1("characters66.txt");
	getline(infile1,s);
	cout<<s<<endl;
	infile1.close();
	
	return 0;
}

