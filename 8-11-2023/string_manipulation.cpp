#include<iostream>
#include<cstring>
using namespace std;

class String{
	char * str;
public:
	String(char * s){
		str = new char[strlen(s)+1];
		strcpy(str,s);
	}
	void display(){
		cout << str << endl;
	}

	String operator+(String s){
		char * ans = new char[strlen(str)+1];
		strcpy(ans,str);
		strcat(ans,s.str);
		return String(ans);
	}

	bool operator<(String s){
		if(strcmp(str,s.str)<0){
			return true;
		}
		return false;
	}

	bool operator>(String s){
		if(strcmp(str,s.str)>0){
			return true;
		}
		return false;
	}

	bool operator==(String s){
		if(strcmp(str,s.str)==0){
			return true;
		}
		return false;
	}
};

int main(){
	char a[] = "abcd";
	char b[] = "efgh";
	String s1(a);
	String s2(b);
	String s3 = s1 + s2;
	String s4 = s1.operator+(s2);
	s3.display();

	if(s1 < s2){
		cout << "s1 is smaller than s2 " << endl;
	}
	if(s1 < s2){
		cout << "s1 is greater than s2 " << endl;
	}
	if(s1 == s2){
		cout << "s1 is equal to s2 " <<endl;
	}
	return 0;
}