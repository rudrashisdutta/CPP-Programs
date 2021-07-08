#include <iostream> 
#include <fstream> 
using namespace std;
int main() 
{ 
	string s="sample.txt";
	ofstream fout; 
	string line,line1=""; 
	fout.open(s.c_str()); 
	while (fout) 
    { 
		getline(cin, line); 
    	if (line == "-1") 
		break; 
		fout << line << endl; 
	} 
	fout.close(); 
	ifstream fin; 
	fin.open(s.c_str());
	char c;int i=0;
	fin.get(c);
	while (c!='!') 
    {
		if(c=='L')
		{
			fin.get(c);
			if(c=='D')
			break;
			else
			line1=line1+'L'+c;
		}
		else
		line1=line1+c;
		fin.get(c);
	}
	cout<<line1;
	fin.close(); 
    return 0; 
}