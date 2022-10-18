#include<iostream>
using namespace std;
int main ()
{
	int k,j,p;
	int ch;
	int total;
	for (ch = 0; ch < 10; k++)
	{
		cout<<endl<<"enter your choise";
		cin>>ch;
	switch (ch)
	{
		case 1:
			cout<<endl<<"\n\tall vegetable food"<<"\trate";
			cout<<endl<<"\t1.unlimited dees    "<<"\t300";
			cout<<endl<<"\t2.punjabi           "<<"\t100";
			cout<<endl<<"\t3.chainise          "<<"\t90";
	    	cout<<endl<<"\t4.ethalian          "<<"\t150";
			cout<<endl<<"\t5.shurati dees      "<<"\t200";
			cout<<endl<<"\t6.pav bhaji         "<<"\t50";	
			cout<<endl<<"\t7.burgar            "<<"\t80";
			cout<<endl<<"\t8.pizza             "<<"\t250";
			cout<<endl<<"\t9.fenki             "<<"\t70";
			cout<<endl<<"\t10.alu puri         "<<"\t60";
			cout<<endl<<"\t11.farali dees      "<<"\t40";
			cout<<"\n**********enter your items number**********"<<endl;
			for (k = 0; k < 11; k++)
			{
				cout << endl;
				cin >> k;
				switch (k)
				{
					case 1:
						total += 300;
						cout <<"\tunlimited dees";
						break;
					case 2:
						total += 100;
						cout <<"\tpunjabi";
						break;
					case 3:
						total += 90;
						cout <<"\tchainise";
						break;
					case 4:
						total += 150;
						cout <<"\tethalian";
						break;
					case 5:
						total += 200;
						cout <<"\tshurati dees";
						break;
					case 6:
						total += 50;
						cout <<"\tpav bhaji";
						break;
					case 7:
						total += 80;
						cout <<"\tburgar";
						break;
					case 8:
						total += 250;
						cout <<"\tpizza";
						break;
					case 9:
						total += 70;
						cout <<"\tfenki";
						break;
					case 10:
						total += 60;
						cout <<"\talu puri";
						break;
					case 11:
						total += 40;
						cout <<"\tfarali dees";
						break;
				}
			}
			break;
		case 2:
			cout<<endl<<"\n\tstatar      "<<"\trate";
			cout<<endl<<"\t12.salad      "<<"\t20";
			cout<<endl<<"\t13.papad      "<<"\t10";
			cout<<endl<<"\t14.shup       "<<"\t50";
			cout<<endl<<"\t14.buter milk "<<"\t10";
			cout<<endl<<"\t15.soda       "<<"\t20";
			cout<<endl<<"\t16.likvid     "<<"\t40";
			cout<<endl<<"\t17.milk       "<<"\t10";
			cout<<"\n**********enter your items number**********"<<endl;
			for (k = 0; k <= 17; k++)
			{
				cout << endl;
				cin >> k;
			switch (k)
			     {
			        case 12:
						total += 20;
						cout <<"\tsalad";
						break;	
					case 13:
						total += 10;
						cout <<"\tpapad";
						break;
				    case 14:
						total += 50;
						cout <<"\tshup";
						break;
					case 15:
						total += 20;
						cout <<"\tsoda";
						break;
					case 16:
						total += 40;
						cout <<"\tlikvid";
						break;
					case 17:
						total += 10;
						cout <<"\tmilk";
						break;						
				 }
			}
			break;
		case 3:
			cout<<endl<<"\n\tall vegetable lunch"<<"\trate";
			cout<<endl<<"\t1.pani puri          "<<"\t20";
			cout<<endl<<"\t2.sev khamani        "<<"\t50";
			cout<<endl<<"\t3.bhel               "<<"\t40";
	    	cout<<endl<<"\t4.kachori            "<<"\t30";
			cout<<endl<<"\t5.samosha            "<<"\t20";
			cout<<endl<<"\t6.ghughra            "<<"\t20";	
			cout<<endl<<"\t7.dhalpakvan         "<<"\t30";
			cout<<endl<<"\t8.dhalbati           "<<"\t40";
			cout<<endl<<"\t9.khavusha           "<<"\t50";
			cout<<endl<<"\t10.dabeli            "<<"\t50";
			cout<<"\n**********enter your items number**********"<<endl;
			for (k = 0; k < 11; k++)
			{
				cout << endl;
				cin >> k;
				switch (k)
				{
					case 1:
						total += 20;
						cout <<"\tpani puri";
						break;
					case 2:
						total += 50;
						cout <<"\tsev khamani";
						break;
					case 3:
						total += 40;
						cout <<"\tbhel";
						break;
					case 4:
						total += 30;
						cout <<"\tkachori";
						break;
					case 5:
						total += 20;
						cout <<"\tsamosha";
						break;
					case 6:
						total += 20;
						cout <<"\tghughra";
						break;
					case 7:
						total += 30;
						cout <<"\tdhalpakvan";
						break;
					case 8:
						total += 40;
						cout <<"\tdhalbati";
						break;
					case 9:
						total += 50;
						cout <<"\tkhavusha";
						break;
					case 10:
						total += 50;
						cout <<"\dabeli";
						break;
				}
			}
	break;
	    case 4:
	    	cout<<endl<<"\n\tpaneer and butter"<<"\trate";
			cout<<endl<<"\t1.extra paneer    "<<"\t50";
			cout<<endl<<"\t2.extra butter    "<<"\t50";
         	cout<<"\n**********enter your items number**********"<<endl;
         		for (k = 0; k < 11; k++)
			{
				cout << endl;
				cin >> k;
				switch (k)
				{
					case 1:
						total += 50;
						cout <<"\paneer";
						break;
					case 2:
						total += 50;
						cout <<"\butter";
						break;		
				}
	     	}
	    break;
	        default:
	        	break;
	}
	if (ch > 4)
	{
		break;
	}
	}
	cout<<endl<<"\n\n\n\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
	cout<<endl<<"\tyour total bill amount is"<<total;
}
