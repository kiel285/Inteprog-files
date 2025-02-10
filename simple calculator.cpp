#include <iostream>
using namespace std;
int main(){
int num1, num2,hatdog,ans = 0;
cout<<"*****************************"<<endl;
cout<<"Enter the two numbers"<<endl;
cout<<"*****************************"<<endl;
cout<<"Enter the first numbers"<<endl;
cin>>num1;
cout<<"*****************************"<<endl;
cout<<"Enter the second numbers"<<endl;
cin>>num2;
cout<<"*************************************"<<endl;
cout<<"Enter the operation that will be used"<<endl;
cout<<"***************************************************"<<endl;
cout<<"Enter the number that correspond with the operation"<<endl;
cout<<"***************************************************"<<endl;
cout<<" 1 + "<<endl;
cout<<" 2 - "<<endl;
cout<<" 3 % "<<endl;
cout<<" 4 * "<<endl;
cout<<" 5 / "<<endl;
cout<<"***************************************************"<<endl;
cin>>hatdog;
switch (hatdog){
case 1: ans = num1+num2;
        cout<<"Your Answer is "<<ans<<endl;
        break;
case 2: ans = num1-num2;
        cout<<"Your Answer is "<<ans<<endl;
        break;
case 3: ans = num1%num2;
        cout<<"Your Answer is "<<ans<<endl;
        break;
case 4: ans = num1*num2;
        cout<<"Your Answer is "<<ans<<endl;
        break;
case 5: ans = num1/num2;
        cout<<"Your Answer is "<<ans<<endl;
        break;
default:cout<<"mali yung input mo bobo"<<endl;
        break; 
}

return 0;
}
//comment
