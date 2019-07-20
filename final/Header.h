#pragma once
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<ios>
#include<limits>
#include<fstream>
#include<string.h>

using namespace std;

class Account
{
public:
	std::string anum, name, type, apin, bal;
}found[50];
int n = 0;

bool search(std::string key_acno, std::string key_pin)
{
	std::fstream f3("index.txt", std::ios::in);
	std::fstream f4("login.txt", std::ios::out);
	int flag = 0;
	std::string anum, apin;
	char* str = new char[100];
	//char* result = new char[100];
	for (int i = 0; i < n; i++)
	{
		f3.getline(str, 20, '|');
		anum = str;
		f3.getline(str, 20, '\n');
		apin = str;
		if ((key_acno.compare(anum) == 0) && (key_pin.compare(apin)) == 0)
		{
			found[0].anum = anum;
			flag = 1;
			break;
		}

	}
	f4 << found[0].anum << endl;

	f3.close();
	f4.close();
	if (flag == 1)
		return TRUE;
	else
		return FALSE;


}
void addAccount(std::string x[])
{
	char buf[100];
	strcpy_s(buf, 30, x[0].c_str());
	strcat_s(buf, "|");
	strcat_s(buf, 30, x[1].c_str());
	strcat_s(buf, "|");
	strcat_s(buf, 30, x[2].c_str());
	strcat_s(buf, "|");
	strcat_s(buf, 30, x[3].c_str());
	strcat_s(buf, "|");
	strcat_s(buf, 30, x[4].c_str());
	std::fstream f1("bank.txt", std::ios::app);
	std::fstream f2("index.txt", std::ios::app);
	
		f2 << x[0].c_str()  << "|" << x[3].c_str() << '\n';
		f1 << buf<<endl;
		n++;
	f1.close();
	f2.close();
}


char* display()
{
		Account acc[50];
		char* result = new char[100];
		strcpy_s(result, 20, "");
		std::fstream f4("bank.txt", std::ios::in);
		std::string anum, name, type, apin, bal;
		char* str = new char[100];
		for(int i=0;i<n;i++)
		{
			f4.getline(str, 20, '|');
			anum = str;
			f4.getline(str, 20, '|');
			name = str;
			f4.getline(str, 20, '|');
			type = str;
			f4.getline(str, 20, '|');
			apin = str;
			f4.getline(str, 20, '\n');
			bal = str;
			if (anum.compare(found[0].anum) == 0)
			{
				strcpy_s(result, 100, anum.c_str());
				strcat_s(result, 100, "\t");
				strcat_s(result, 100, name.c_str());
				strcat_s(result, 100, "\t");
				strcat_s(result, 100, type.c_str());
				strcat_s(result, 100, "\t");
				strcat_s(result, 100, apin.c_str());
				strcat_s(result, 100, "\t");
				strcat_s(result, 100, bal.c_str());
				strcat_s(result, 100, "\r\t");
				break;
			}
		}
		return result;
}

void delFound()
{
	
	found[0].anum = " ";
}
void withdrawMoney(std::string key_amt) 
{
	int ibal, nbal, wbal;
	std::fstream f1("bank.txt", std::ios::in| std::ios::out | std::ios::app);
	std::fstream temp("temp.txt", std::ios::in | ios::out | ios::app);
	//std::fstream temp1("temp1.txt", std::ios::in | ios::out | ios::app);
	//std::fstream temp1("temp2.txt", ios::out | ios::app);
	std::string anum, name, type, apin, bal;
	char* str = new char[100];
	char* anbal= new char[100];
	for (int i = 0; i < n; i++)
	{
		f1.getline(str, 20, '|');
		anum = str;
		f1.getline(str, 20, '|');
		name = str;
		f1.getline(str, 20, '|');
		type = str;
		f1.getline(str, 20, '|');
		apin = str;
		f1.getline(str, 20, '\n');
		bal = str;
		if (anum.compare(found[0].anum) == 0)
		{
			ibal = atoi(bal.c_str());
			wbal = atoi(key_amt.c_str());
			nbal = ibal - wbal;
			_itoa_s(nbal, anbal, 10, 10);
			temp << anum.c_str() << '|' << name.c_str() << '|' << type.c_str() << '|' << apin.c_str() << '|' << anbal << endl;
			break;
		}
		/*if (anum.compare(found[0].anum) != 0)
		{
			temp1 << anum.c_str() << '|' << name.c_str() << '|' << type.c_str() << '|' << apin.c_str() << '|' << bal.c_str() << endl;
		}*/
	}
	/*while (temp.eof() == 0)
	{
		temp>>
	}*/
	temp.close();
	//temp1.close();
	f1.close();
	remove("bank.txt");
	rename("temp.txt", "bank.txt");
}

void depositMoney(std::string key_amt) {
	int ibal, nbal, wbal;
	std::fstream f1("bank.txt", std::ios::in | std::ios::out | std::ios::app);
	std::fstream temp("temp.txt", ios::out | ios::app);
	std::string anum, name, type, apin, bal;
	char* str = new char[100];
	char* anbal = new char[100];
	for (int i = 0; i < n; i++)
	{
		f1.getline(str, 20, '|');
		anum = str;
		f1.getline(str, 20, '|');
		name = str;
		f1.getline(str, 20, '|');
		type = str;
		f1.getline(str, 20, '|');
		apin = str;
		f1.getline(str, 20, '\n');
		bal = str;
		if (anum.compare(found[0].anum) == 0)
		{
			ibal = atoi(bal.c_str());
			wbal = atoi(key_amt.c_str());
			nbal = ibal + wbal;
			_itoa_s(nbal, anbal, 10, 10);
			temp << anum.c_str() << '|' << name.c_str() << '|' << type.c_str() << '|' << apin.c_str() << '|' << anbal << endl;
		}
	}
	temp.close();
	f1.close();
	remove("bank.txt");
	rename("temp.txt", "bank.txt");
}



/*
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <sstream>
using namespace std;

std::string index[100], indexadd[100];
int nor;

void smi()
{
	std::string temp, temp1;

	for (int i = 0; i < nor; i++)
		for (int j = i + 1; j < nor; j++)
		{
			if (strcmp(index[i].c_str(), index[j].c_str()) > 0)
			{
				temp = index[i];
				index[i] = index[j];
				index[j] = temp;

				temp1 = indexadd[i];
				indexadd[i] = indexadd[j];
				indexadd[j] = temp1;
			}
		}
}

class atm {
public:std::string acno, name, type, pin, bal;

	void unpack(int add);
};

void addAccount(std::string x[])
{

	char buf[100];
	for (int i = 0; i < nor; i++)
	{
		if (x[0].compare(index[i]) == 0)
		{
			return;
		}
	}
	strcpy_s(buf, 30, x[0].c_str());
	strcat_s(buf, "|");
	strcat_s(buf, 30, x[1].c_str());
	strcat_s(buf, "|");
	strcat_s(buf, 30, x[2].c_str());
	strcat_s(buf, "|");
	strcat_s(buf, 30, x[3].c_str());
	strcat_s(buf, "|");
	std::fstream f1("index.txt", std::ios::app);
	std::fstream f2("rec.txt", std::ios::app);
	f2.seekp(0,ios::end);
	strcpy_s(index[nor],30,x[0].c_str());
	f1 << x[0].c_str() << '|' << f2.tellp() << '\n';
	f2 << buf;
	nor++;
	std::ofstream o("track", std::ios::trunc);
	o << nor;
	o.close();
	smi();
	f1.close();
	f2.close();

}

bool search(std::string acno, std::string pwd)
{
	
	atm s;
	int max = nor - 1, min = 0, flag = 0,  mid;
	while (min <= max && flag == 0)
	{
		mid = (min + max) / 2;
		if (strcmp(acno.c_str(), index[mid].c_str()) == 0)
		{
			flag = 1;
			break;
			
			
		}
		
	}
	if (flag == 1)
		return TRUE;
	else
		return FALSE;
}
void atm::unpack(int add)
{
	std::fstream f1("rec.txt", std::ios::in);
	f1.seekg(add);
	char* str = new char[30];
	f1.getline(str, 10, '|');
	acno = str;
	f1.getline(str, 10, '|');
	name = str;
	f1.getline(str, 10, '|');
	type = str;
	f1.getline(str, 10, '|');
	pin = str;
	f1.getline(str, 10, '|');
	bal = str;
	f1.close();
}

char* display()
{

	atm s;
	int add;
	char* result = new char[1000];
	strcpy_s(result, 10, "");
	for (int i = 0; i < nor; i++)
	{
		add = atoi(indexadd[i].c_str());
		s.unpack(add);
		strcat_s(result, 300, s.acno.c_str());
		strcat_s(result, 300, "\t");
		strcat_s(result, 300, s.name.c_str());
		strcat_s(result, 300, "\t");
		strcat_s(result, 300, s.type.c_str());
		strcat_s(result, 300, "\t");
		strcat_s(result, 300, s.pin.c_str());
		strcat_s(result, 300, "\t");
		strcat_s(result, 300, s.bal.c_str());
		strcat_s(result, 300, "\r\n");
	}
	return result;

}

/*
void atm::trans(atm * b)
{

	atm x[100];
	int i, n, deposit = 0, flag = 0;
	fstream read("record.txt", ios::out | ios::in | ios::app);
	fstream temp("temp.txt", ios::out | ios::app);
	i = 0;
	n = 0;
	while (!read.eof())
	{
		read >> x[i].acno >> x[i].name >> x[i].expense;
		i++;
		n++;
	}
	int key, amount;
	cout << "Enter the account no. for transaction\n";
	cin >> key;


	nor = 0;
	for (int i = 0; i < n - 1; i++)
	{
*/
		/*index[nor] = x[i].acno;
		read.seekg(0, ios::end);
		indexadd[nor] = int(read.tellp());
		ind << x[i].acno << "|" << read.tellp() << endl;
		nor++;
		smi();*/
/*
		if (x[i].acno == key)
		{
			cout << "Account no. : " << x[i].acno << "\n" << "Name : " << x[i].name << "\n" << "Balance : " << x[i].expense << endl;
			cout << "Enter the amount to withdraw : ";
			cin >> amount;

			if (amount < x[i].expense)
			{
				flag = 1;
				x[i].expense -= amount;
				cout << "Remaining balance : " << x[i].expense << endl;
				temp << x[i].acno << "\t" << x[i].name << "\t" << x[i].expense << endl;
			}
			else
			{
				cout << "Withdrawn amount more than remaining balance\n";
				temp << x[i].acno << "\t" << x[i].name << "\t" << x[i].expense << endl;
			}
		}
	}
	if (flag == 0)
		cout << "Account no. not found\n";

	temp.close();
	remove("record.txt");
	rename("temp.txt", "record.txt");

}
*/



	
