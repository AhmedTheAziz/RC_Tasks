/*
Task07
Ahmed Abdelaziz
*/
#include <iostream>
#include <cmath>
#include "string.h"

using namespace std;

/*
struct week 
{
string days[7] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int ndays[7]={1,2,3,4,5,6,7};
};
*/

int main()
{
    //Q1- pick a day then determine which day it will be after 10 days. (test1.exe)
//1.0 varibles
//int sat = 1 /*"Saturday"*/, sun = 2/*"Sunday"*/, mon = 3/*"Monday"*/, tues = 4/*"Tuesday"*/, wed = 5/*"Wednesday"*/, thurs = 6/*"Thursday"*/,fri = 7/*"Friday"*/;  
//int var=0,day=0;
//string var;
//week w1;
//w1.days;
//w1.ndays;
//string * ptr;
//ptr = & days[7];
int d=0;
string days[8] = {"","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int day;
int stp;

    //1.1 select the day
std::cout<<"\nPlease, choose the number of a day (1-Sat, 2-Sun, 3-Mon, 4-Tues, 5-Wed, 6-Thurs, 7-Fri. )!\n";
std::cin>>d;
std::cout<<"\nPlease, choose number of days you want to calculate !\n";
std::cin>>day;
    //1.2 equation to calculate the day after 10 days.
switch (d)
  {
case 1:
{
   if (day< 7)
{
    int eqo =  d+day ;
    cout<< endl<< eqo<< endl;
    cout << endl<< *(days+eqo) <<  endl;
}
else if (day == 7)
{
 cout << endl << *(days)<< endl;
}
else
{
 int eqt = (day-7);
 Repeat1:
 if (eqt > 7)
 {
 eqt = (eqt-7);
 goto Repeat1;
 }
 else
 {
  cout<< endl<< eqt<< endl;
    cout << endl<< *(days+(eqt+d)) <<  endl;

}

}
    break;
}
    
case 2:
{
   if (day< 7)
{
    int eqo =  (d+day) ;
    rept2:
    if (eqo >= 8)
    {
        int ee = eqo - 7;
        eqo =ee;
        goto rept2;
    }
    else if (eqo == 0)
    {
        eqo=d;
 cout << endl << *(days+eqo)<< endl;  
   }
    else
    {
    cout<< endl<< eqo<< endl;
    cout << endl<< *(days+eqo) <<  endl;
    }

}
else if (day == 7)
{
           int eqo=d;
 cout << endl << *(days+eqo)<< endl;  
 
}
else
{
 int eqt = (day-7);
 Repeat2:
 if (eqt > 7)
 {
 eqt = eqt-7;
 goto Repeat2;
 }
 else
 {
  cout<< endl<< eqt<< endl;
    cout << endl<< *(days+(eqt+d)) <<  endl;
}

}
    break;
}

case 3:
{
   if (day< 7)
{
    int eqo =  (d+day) ;
    rept3:
    if (eqo >= 8)
    {
        int ee = eqo - 7;
        eqo =ee;
        goto rept3;
    }
    else if (eqo == 0)
    {
        eqo=d;
 cout << endl << *(days+eqo)<< endl;  
   }
    else
    {
    cout<< endl<< eqo<< endl;
    cout << endl<< *(days+eqo) <<  endl;
    }

}
else if (day == 7)
{
           int eqo=d;
 cout << endl << *(days+eqo)<< endl;  
 
}
else
{
 int eqt = (day-7);
 Repeat3:
 if (eqt > 7)
 {
 eqt = eqt-7;
 goto Repeat3;
 }
 else
 {
  cout<< endl<< eqt<< endl;
    cout << endl<< *(days+(eqt+d)) <<  endl;

}

}
    break;
}

case 4:
{
   if (day< 7)
{
    int eqo =  (d+day) ;
    rept4:
    if (eqo >= 8)
    {
        int ee = eqo - 7;
        eqo =ee;
        goto rept4;
    }
    else if (eqo == 0)
    {
        eqo=d;
 cout << endl << *(days+eqo)<< endl;  
   }
    else
    {
    cout<< endl<< eqo<< endl;
    cout << endl<< *(days+eqo) <<  endl;
    }

}
else if (day == 7)
{
           int eqo=d+1;
 cout << endl << *(days+eqo)<< endl;  
 
}
else
{
 int eqt = (day-7);
 Repeat4:
 if (eqt > 7)
 {
 eqt = eqt-7;
 goto Repeat4;
 }
 else
 {
  cout<< endl<< eqt<< endl;
    cout << endl<< *(days+(eqt+d)) <<  endl;

}

}
    break;
}

case 5:
{
   if (day< 7)
{
    int eqo =  (d+day) ;
    rept5:
    if (eqo >= 8)
    {
        int ee = eqo - 7;
        eqo =ee;
        goto rept5;
    }
    else if (eqo == 0)
    {
        eqo=d;
 cout << endl << *(days+eqo)<< endl;  
   }
    else
    {
    cout<< endl<< eqo<< endl;
    cout << endl<< *(days+eqo) <<  endl;
    }

}
else if (day == 7)
{
           int eqo=d;
 cout << endl << *(days+eqo)<< endl;  
 
}
else
{
 int eqt = (day-7);
 Repeat5:
 if (eqt > 7)
 {
 eqt = eqt-7;
 goto Repeat5;
 }
 else if (eqt == 0 )
 {
eqt =eqt+1;
 }
 else
 {
  cout<< endl<< eqt<< endl;
    cout << endl<< *(days+(eqt+d)) <<  endl;

}

}
    break;
}

case 6:
{
   if (day< 7)
{
    int eqo =  (d+day) ;
    rept6:
    if (eqo >= 8)
    {
        int ee = eqo - 7;
        eqo =ee;
        goto rept6;
    }
    else if (eqo == 0)
    {
        eqo=d;
 cout << endl << *(days+eqo)<< endl;  
   }
    else
    {
    cout<< endl<< eqo<< endl;
    cout << endl<< *(days+eqo) <<  endl;
    }

}
else if (day == 7)
{
           int eqo=d;
 cout << endl << *(days+eqo)<< endl;  
 
}
else
{
 int eqt = (day-7);
 Repeat6:
 if (eqt > 7)
 {
 eqt = eqt-7;
 goto Repeat6;
 }
 else
 {
  cout<< endl<< eqt<< endl;
    cout << endl<< *(days+(eqt+d)) <<  endl;

}

}
    break;
}

case 7:
{
   if (day< 7)
{
    int eqo =  (d+day) ;
    rept7:
    if (eqo >= 8)
    {
        int ee = eqo - 7;
        eqo =ee;
        goto rept7;
    }
    else if (eqo == 0)
    {
        eqo=d;
 cout << endl << *(days+eqo)<< endl;  
   }
    else
    {
    cout<< endl<< eqo<< endl;
    cout << endl<< *(days+eqo) <<  endl;
    }

}
else if (day == 7)
{
           int eqo=d;
 cout << endl << *(days+eqo)<< endl;  
 
}
else
{
 int eqt = (day-7);
 Repeat7:
 if (eqt > 7)
 {
 eqt = eqt-7;
 goto Repeat7;
 }
 else
 {
  cout<< endl<< eqt<< endl;
    cout << endl<< *(days+(eqt+d)) <<  endl;

}

}
    break;
}

default:
{
cout<< "\n the week only has SEVEN DAYS!!\n";
    break;
}

}

    return 0 ;
}