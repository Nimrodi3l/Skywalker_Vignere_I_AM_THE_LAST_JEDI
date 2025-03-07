#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
	
	string key;
	string message;
	string code;
	string sub;
	vector <int> temp;
	vector <int> temp1;
	//cin >> key;
	cin >> message;
	for(int i=0;message[i]!='\0';i++){
        for(int j=i+1;message[j]!='\0';j++){
            if(message[i]==message[j]){  
                message[j] = 'X';
            }
        }
	}
	 
	cout << message;
	
	/*cout << int('E' -65);
	cout << ((int('E'-65) - int('Y' -65)))%26;
	cin >> key;
	cin >> message;
	for(int i = 0; i < message.length(); i++){
		if(message.length() > key.length()){
			key += key[i];

		}

	}
	cout << key << endl;
	/*for(int i = 0; i < message.length(); i++){
		message[i] = toupper(message[i]);
		temp.push_back(int(message[i] - 65));
	}
	for(int i = 0; i < key.length(); i++){
		key[i] = toupper(key[i]);
		temp1.push_back(int(key[i] - 65));
	}
	for(int i = 0; i < temp.size(); i++){
		cout << temp[i] << endl;
		
	}
	cout << endl;
	for(int i = 0; i < temp1.size(); i++){
		cout << temp1[i] << endl;
	}
	if(key.length() > message.length()){
		for(int i = 0; i < message.length(); i++){
			if(((temp[i] - temp1[i])%26) > 0){
			cout << char(((temp[i] - temp1[i])%26)+65);
			}
			if(((temp[i] - temp1[i])%26) < 0){
				cout << char((((temp[i] - temp1[i])%26)+26)+65);
			}
			//cout << code[i] << endl;
		}

	}

	//cout << (message + key)%26;
	//cout << char(((message + key)%26)+65);*/
	
	

	return 0;
}