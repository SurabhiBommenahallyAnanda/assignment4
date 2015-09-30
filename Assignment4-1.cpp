/*
 *
 *Chapter 3

          1. a) In C++, pointer is a reserved word                                                                                --      False
b) In C++, pointer variables are declared using the reserved word pointer               --     False
c) The statement delete p; deallocates the variable pointer p                                     --     False
d) The statement delete p; deallocates the dynamic variable to which p points      --     True
e) Given the declaration                                                                                                       --     True
     int list[10];
     int *p;
     the statement
     p = list;
     is valid in C++.
f) Given the declaration                                                                                                        --     True
     int *p;
     the statement
     p = new int[50];
     dynamically allocates an array of 50 components of type int, and p
     contains the base address of the array.
g) The address of operator returns the address and value of its operand                  --     False
h) If p is a pointer variable, the statement p = p * 2; is valid in C++                             --     False

3.	What is the output of the following C++ code?
        int x;
        int y;
        int *p = &x;
        int *q = &y;
       *p = 35;
       *q = 98;
       *p = *q;
        cout << x << " " << y << endl;
        cout << *p << " " << *q << endl;
Ans :      98   98
98	98

5.	Given the declaration
int num = 6;
int *p = &num;
which of the following statement(s) increment the value of num?
a. p++;
b. (*p)++;
c. num++
d. (*num)++;
Ans :  b and c increment num value. A increments p pointer. D is invalid.

7.	What is the output of the following code?
int *p;
int *q;
p = new int;
*p = 43;
q = p;
*q = 52;
 p = new int;
 *p = 78;
 q = new int;
 *q = *p;
 cout << *p << " " << *q << endl;
Ans :       78 78

9.	What is the output of the following code?
 int x;
 int *p;
 int *q;
 p = new int[10] ;
 q = p;
*p = 4;
for(int j = 0; j < 10; j++)
 { x = *p;
   p++;
   *p = x + j;
}
 for (int k = 0; k < 10; k++)
{
cout << *q << " ";
q++;
}
cout << endl;
Ans :     There are 2 forms for the new operator. One is for the allocation of a single variable and the other is for an array of variable. New operator is generally used dynamic memory allocation to variables.

11.	Explain the difference between a shallow copy and a deep copy of data.
Ans : The difference is in the copy of pointer variables. In shallow copy two or more pointers point of the same type point to same memory whereas in deep copy they point to their own respective data.

13.	What is the output of the following code?
int *p;
int *q;
p = new int [5];
p[0] = 5;
for (int i = 1; i < 5; i++)
p[i] = p[i - 1] + 2 * i;
cout << "Array p: ";
for (int i = 0; i < 5; i++)
          cout << p[i] << " ";
cout << endl;
q = new int[5];
for (int i = 0; i < 5; i++)
q[i] = p[4 - i];
cout << "Array q: ";
for (int i = 0; i < 5; i++)
cout << q[i] << " ";
cout << endl;
Ans :    Array p: 5 7 11 17 25
             Array q: 25 17 11 7 5

15.	What is the purpose of the copy constructor?
Ans : It is used for member-wise initialization of object using another same type object.

17.	Name three things that you should do for classes with pointer data members.
Ans : 1. Inclusion of destructor in class.
1.	Overloading assignment operator for class
2.	Inclusion of copy constructor

19.	Suppose that you have the following classes, classA and classB:
 class classA
{ public:
virtual void print() const;
void doubleNum();
 classA(int a = 0);
private:
int x;
 };
void classA::print() const
{
cout << "ClassA x: " << x << endl;
}
 void classA::doubleNum()
 {
x = 2 * x;
 }
 classA::classA(int a)
{
x = a;
}
class classB: public classA
{
public:
void print() const;
void doubleNum();
classB(int a = 0, int b = 0);
private:
 int y;
 };
 void classB::print() const
{
classA::print();
cout << "ClassB y: " << y << endl;
 }
void classB::doubleNum()
 {
classA::doubleNum();
 y = 2 * y;
 }
classB::classB(int a, int b)
: classA(a)
 {
y = b;
 }
What is the output of the following function main?
int main()
{
classA *ptrA;
classA objectA(2);
 classB objectB(3, 5);
ptrA = &objectA;
ptrA->doubleNum();
ptrA->print();
cout << endl;
 ptrA = &objectB;
ptrA->doubleNum();
ptrA->print();
cout << endl;
return 0;
 }
Ans :   ClassA x: 4
            ClassA x: 6
            ClassB y: 5

21.	 What is the difference between compile-time binding and run-time binding?
Ans : In compile time binding, the compiler generates the code necessary for calling a specific function.
          In run time binding which is also called dynamic binding, the necessary code for the specific function call is generated at the time of program execution like virtual functions.

23.	 What is the effect of the following statements?
a. arrayListType intList(100);
b. arrayListType stringList(1000);
c. arrayListType salesList(-10);
Ans :    a. The statement creates the arrayListType object intList of size 100. The elements of intList are    of the type int.

b. The statement creates the arrayListType object stringList of size 1000. The elements of stringList are of the type string.

c. The statement creates the arrayListType object salesList of size 100. The elements of salesList are of the type double.








Chapter 4

1.	What are the three main components of the STL?
        Ans : Containers, iterators and algorithms are the 3 main components of STL.

3.  Write a statement that declares a vector object that can store 50 decimal numbers.
       Ans : The STL generally provides the class template which can used for writing the generic code of different data-structures which help in processing these in an effective way. Vector is a component of container type in STL. Vector uses array to store and manipulate its elements. For using the vector class vector header should be used.
Syntax for vector declaration is : vector vectorSample(size);
vector vectorObj(50);

5.   Write a statement to declare screen to be an ostream_iterator initialized to the standard output device that outputs the elements of an int vector object.
Ans : ostream_iterator screen(cout,” “);

7.  What is the output of the following program segment?
vector vecList(5);
for (int j = 0; j < 5; j++)
vecList[j] = 2 * j;
for (int j = 0; j < 5; j++)
cout << vecList[j] << " ";
 cout << endl;
Ans :  0 2 4 6 8

9.	What is the output of the following program segment? (Assume that screen is an ostream_iterator initialized to the standard output device to output elements of type int.) vector<int> vecList;
vector<int>::iterator vecIt;
vecList.push_back(3);
vecList.push_back(5);
vecList.push_back(7);
vecIt = vecList.begin();
++vecIt;
vecList.erase(vecIt);
vecList.push_back(9);
 copy(vecList.begin(), vecList.end(), screen);
cout << endl;
Ans :     3 7 9

11.  What is the output of the following program segment? (Assume that screen is an ostream_iterator initialized to the standard output device to output elements of type double.)   vector sales(3);
sales[0] = 50.00;
sales[1] = 75.00;
 sales[2] = 100.00;
sales.resize(5);
sales[3] = 200.00;
sales[4] = 95.00;
copy(sales.begin(), sales.end(), screen);
cout << endl;
Ans :   50.00 75.00 100.00 200.00 95.00

13. Suppose that vecList is a vector container and vecList = {12, 16, 8, 23, 40, 6, 18, 9, 75} Show vecList after the following statement executes:
copy(vecList.begin() + 2, vecList.end(), vecList.begin());
Ans :   vecList = {8, 23, 40, 6, 18, 9, 75, 9, 75)

15.	What is the output of the following program segment?
deque intDeq;
ostream_iterator screen(cout, " ");
deque::iterator deqIt;
intDeq.push_back(5);
intDeq.push_front(23);
 intDeq.push_front(45);
 intDeq.push_back(35);
intDeq.push_front(0);
intDeq.push_back(50);
intDeq.push_front(34);
 deqIt = intDeq.begin();
intDeq.insert(deqIt,76);
 intDeq.pop_back();
deqIt = intDeq.begin();
 ++deqIt;
 ++deqIt;
intDeq.erase(deqIt);
 intDeq.push_front(2 * intDeq.back());
 intDeq.push_back(3 * intDeq.front());
copy(intDeq.begin(), intDeq.end(), screen);
cout << endl;
Ans :   70 76 34 45 23 5 35 210




 *
 */
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cctype>
#include<cstdlib>
#include<cstring>
#include <stdlib.h>

using namespace std;

//The class stockType has all the details of the address as
//listed in the private section and member functions as listed in the
//public section. The explanation is provided in the comments.

class stockType
{
friend ostream& operator << (ostream& output,vector<stockType> stock);
friend istream &operator >>(istream &input,stockType &firstStock);


public:
void setStockInfo(string symbol, float op,float cp, float hp,float lp, float pc,
float yesterdaylp,int shares);

string fsymbol();
float perC();// for change in percentage of the stock
float fop();// for open price
float fcp();// for close price
float fhp();//for hp price
float flp();//for lp price
float fpp();//for previous price
int fnos();//for number of shares
float fyl();//for yesterday lp prices
stockType();
stockType(string symbol, float op,float cp, float hp,float lp, float pc,float yesterdaylp,int shares);

bool operator == (const stockType&) const;
bool operator != (const stockType&) const;
bool operator <= (const stockType&) const;
bool operator >= (const stockType&) const;
bool operator >  (const stockType&) const;
bool operator <  (const stockType&)  const;


private:
string stocksymbol;
float todayop;
float todaycp;
float todayhp;
float todaylp;
float yesterdayClose;
float percentChange;
float yesterdaylp;
int noOfShares;

};


stockType::stockType(){
   stocksymbol = "***";
   todayop = 0.00;
   todaycp = 0.00;
   todayhp = 0.00;
   todaylp = 0.00;
   yesterdayClose = 0.00;
   yesterdaylp=0.00;
   noOfShares = 0;
   percentChange=0;
}

//The definitions of all the member functions of class stockType
//are as follps:
// This constructor of the class instantiates an object of the
//class stockType and assigns values to the data members.
//constructor to set stock information
stockType::stockType(string symbol, float op,float cp, float hp,float lp,
		float pc,float yesterdaylp,int shares){
		setStockInfo(symbol,op,cp,hp,lp,pc,yesterdaylp,shares);
}

//assigns values to the data members by taking input from the user.
 //stores the complete stock information

void stockType::setStockInfo(string symbol, float op,float cp, float hp,float lp,
		float pc,float yestlp,int shares){

   stocksymbol = symbol;
   todayop = op;
   todaycp = cp;
   todayhp = hp;
   todaylp = lp;
   yesterdayClose = pc;
   noOfShares = shares;
   yesterdaylp=yestlp;
}
string stockType::fsymbol(){
   return stocksymbol;
}

// This member function of the class stockType calculates and
//prints values of the data member, percGain for percent gain/loss
//for the day.

float stockType::perC(){
   percentChange = ((todaycp - yesterdayClose));
   percentChange = (percentChange/yesterdayClose)*100;
   return percentChange;
}
float stockType::fyl(){
   return yesterdaylp;
}
float stockType::fop(){
   return todayop;
}
float stockType::fcp(){
   return todaycp;
}
float stockType::fhp(){
   return todayhp;
}
float stockType::flp(){
   return todaylp;
}
float stockType::fpp(){
   return yesterdayClose;
}

// This member function of the class stockType prints values of the
//data member, numShares for number of shares for a stock.
int stockType::fnos(){
   return noOfShares;
}

bool stockType::operator ==(const stockType& stock) const{
	return (stocksymbol.compare(stock.stocksymbol));
}
bool stockType::operator <=(const stockType& stock) const{
	return (stocksymbol.compare(stock.stocksymbol));
}
bool stockType::operator >=(const stockType& stock) const{
	return (stocksymbol.compare(stock.stocksymbol));
}
bool stockType::operator <(const stockType& stock) const{
	return (stocksymbol<stock.stocksymbol);
}
bool stockType::operator >(const stockType& stock) const{
	return (stocksymbol.compare(stock.stocksymbol));
}

// This member function of the class stockType overloads the
//extraction operator >> and returns an istream object.
 //overloads the extraction operator

istream& operator >>(istream &input,stockType &firstStock)
{
input >> firstStock.stocksymbol;
input >> firstStock.todayop;
input >> firstStock.todaycp;
input >> firstStock.todayhp;
input >> firstStock.todaylp;
input >> firstStock.yesterdaylp;
input >> firstStock.yesterdayClose;
input >> firstStock.noOfShares;

return input;
}

// This member function of the class stockType overloads the
//insertion operator << and returns an ostream object.
 //overloads the insertion operator

ostream& operator <<(ostream& output,vector<stockType> stock){

	output << left;
	output << "******************************* First Investor's Heaven ******************************\n";
	output << "*******************************    Financial Report     *********************************\n";
	output << "Stock		Today		 Previous		   Percent";
	output << "Symbol Open	Close  High	 Low	  Close	   Gain	    Volume";

	vector<stockType>::iterator vec;
	int i;
	for(i=0;i<stock.size();i++){
	output <<endl;
	output << stock[i].stocksymbol << "	";
	output << stock[i].todayop << "	";
	output << stock[i].todaycp << "	";
	output << stock[i].todayhp << "	";
	output << stock[i].yesterdaylp<< "	";
	output << stock[i].yesterdayClose << "	";
	output << stock[i].perC() <<"%"<< "	" ;
	output << stock[i].noOfShares << "	";
	}
	return output;
}


class stockListType{

public:
	vector<stockType> insert(const stockType& item);
	vector<stockType> sortByGain(vector<stockType> list);

private:
	vector<int> indexByGain;
	vector<stockType> list;
};

vector<stockType> stockListType::sortByGain(vector<stockType> list){

	vector<stockType> newlist;
	newlist.clear();
	newlist=list;
	for(int j=0;j<newlist.size();j++){
			stockType temp;
			for(int k=0;k<newlist.size();k++){
			if((newlist[k].perC()<newlist[k+1].perC())){
				temp=newlist[k];
				newlist[k]=newlist[k+1];
				newlist[k+1]=temp;
			}
			}
		}
return newlist;
}

vector<stockType> stockListType::insert(const stockType& stock){

	list.push_back(stock);
	return list;
}

int main(){

	stockType firstStock;
	stockListType stockList;
	ifstream input;
	string inf;
	vector<stockType> stockvec;
	input.open("input.txt");
	stockvec.clear();
	while(!input.eof())
	{
		input >> firstStock;
		stockvec=stockList.insert(firstStock);
	}
	cout << stockvec;
	stockType temp;
	sort(stockvec.begin(), stockvec.end());
	cout << "Sorting based on the stock symbol";
		cout << stockvec;
		cout << "Sorting based on the gain";
		stockvec=stockList.sortByGain(stockvec);
		cout << stockvec;
		return 0;
}


/*
 * Algorithm:
 *
 *  Define a class stockType that contains the information about a
stock viz. stock symbol, today’s opening price, closing price,
volume, etc


Define the member functions to implement the operations viz.
store the stock information, print the stock information, etc.


Define a class stockListType that contains the information
about list of stocks. This class inherits the class: stockType

 Define its member functions to implement the operations viz.
add a stock object, display stocks list sorted by percent gain from
highest to lowest etc

 Implement the operations on the objects of the class
stockListType.

Show the user choices and the corresponding outputs

Pseudocode:
For member functions in the class  stocktype
string fsymbol();
float perC();// for change in percentage of the stock
float fop();// for open price
float fcp();// for close price
float fhp();//for hp price
float flp();//for lp price
float fpp();//for previous price
int fnos();//for number of shares
float fyl();//for yesterday lp prices
stockType();
stockType(string symbol, float op,float cp, float hp,float lp, float pc,float yesterdaylp,int shares);




float stockType::perC(){
   percentChange = ((todaycp - yesterdayClose));
   percentChange = (percentChange/yesterdayClose)*100;
   return percentChange;
}
float stockType::fyl(){
   return yesterdaylp;
}
float stockType::fop(){
   return todayop;
}
float stockType::fcp(){
   return todaycp;
}
float stockType::fhp(){
   return todayhp;
}
float stockType::flp(){
   return todaylp;
}
float stockType::fpp(){
   return yesterdayClose;
}



 *
******************************** First Investor's Heaven **************************
*******************************    Financial Report     **************************
Stock		      Today		      Previous	          Percent
Symbol	 Open	  Close	  High	  Low	    Close	  Gain		   Volume
ABC     123.45    130.95  132.00  125.00    120.50    8.67%        10000
AOLK    80.00     75.00   82.00   74.00      83.00   -9.64%        5000
CSCO    100.00    102.00  105.00  98.00     101.00    0.99%        25000
IBD     68.00     71.00   72.00   67.00      75.00   -5.33%        15000
MSET    120.00    140.00  145.00  140.00    115.00    21.74%       30920

Sorting based on the stock symbol
******************************** First Investor's Heaven **************************
*******************************    Financial Report     **************************
Stock		      Today		      Previous	          Percent
Symbol	 Open	  Close	  High	  Low	    Close	  Gain		   Volume
ABC     123.45    130.95  132.00  125.00    120.50    8.67%        10000
AOLK    80.00     75.00   82.00   74.00      83.00   -9.64%        5000
CSCO    100.00    102.00  105.00  98.00     101.00    0.99%        25000
IBD     68.00     71.00   72.00   67.00      75.00   -5.33%        15000
MSET    120.00    140.00  145.00  140.00    115.00    21.74%       30920

Sorting based on the gain
******************************** First Investor's Heaven **************************
*******************************    Financial Report     **************************
Stock		      Today		      Previous	          Percent
Symbol	 Open	  Close	  High	  Low	    Close	  Gain		   Volume
MSET    120.00    140.00  145.00  140.00    115.00    21.74%       30920
ABC     123.45    130.95  132.00  125.00    120.50    8.67%        10000
CSCO    100.00    102.00  105.00  98.00     101.00    0.99%        25000
IBD     68.00     71.00   72.00   67.00      75.00   -5.33%        15000
AOLK    80.00     75.00   82.00   74.00      83.00   -9.64%        5000











 */

 */
