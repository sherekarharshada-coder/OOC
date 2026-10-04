#include <iostream> 
using namespace std; 
class Payment 
{ 
public: 
virtual void pay() 
{ 
cout << "Payment made by cash"; 
} 
}; 
class CreditPayment : public Payment 
{ 
public: 
void pay()  
{ 
cout << "Payment made by credit card"; 
} 
}; 
class UpiPayment : public Payment 
{ 
public: 
void pay()  
{ 
cout << "Payment made through UPI"; 
} 
}; 

int main() 
{ 
CreditPayment c; 
UpiPayment u; 

c.pay(); 
cout << endl; 
u.pay(); 

return 0; 
}
