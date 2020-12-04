//structs homewrork 1
#include <iostream>
using namespace std;

//an array type struct
struct Team[20][20]{
	string first_name;
	string last_name;
	
};


int main(){
		
	//initialize type "Team" members
	Team member1;
	Team member2;
	Team member3;
	Team member4;
	Team member5;
	Team member6;
	Team member7;
		
	member1.first_name="Vasilis";
	member1.last_name="Makridis";
	
	member2.first_name="Nikos";
	member2.last_name="Margwmenos";
	
	member3.first_name="Nikos";
	member3.last_name="Loukas";
	
	member4.first_name="Marios";
	member4.last_name="Asikis";
	
	member5.first_name="Nikos";
	member5.last_name="Poulios";
	
	member6.first_name="George";
	member6.last_name="Toka";
	
	member7.first_name="Marios";
	member7.last_name="Kerasidis";
	
	return 0;
}

