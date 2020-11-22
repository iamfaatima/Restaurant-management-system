#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(){
    cout << endl << "---------------------------- FATIMA'S CUISUINES -------------------------------";
	cout << endl<<endl;
	cout << endl << "-------------------------------- M E N U ------------------------------------";
	cout << endl<<endl;
	cout << "------------------------------------------------------------------------------" ;
	cout <<endl;
	cout << "                                FAST FOOD                                       ";
	cout << "------------------------------------------------------------------------------" ;
	cout << endl;
	cout << "BURGER" << "                           " << "Rs 500"<<"                  ORDER CODE: 1 "<<endl;
	cout << "PIZZA " << "                           " << "Rs 900"<<"                  ORDER CODE: 2 "<<endl;
	cout << "MOLTEN LAVA " << "                     " << "Rs 1100"<<"                 ORDER CODE: 3 "<<endl;
    cout << "PANCAKES" << "                         " << "Rs 300"<<"                  ORDER CODE: 4 "<<endl;
    cout << "SHAWARMA" << "                         " << "Rs 350"<<"                  ORDER CODE: 5 "<<endl;
    cout << "CHEESE NOODLES" << "                   " << "Rs 150"<<"                  ORDER CODE: 6 "<<endl;
    cout << "WINGS" << "                            " << "Rs 250"<<"                  ORDER CODE: 7 "<<endl;
    cout << "PASTA" << "                            " << "Rs 300"<<"                  ORDER CODE: 8 "<<endl;
    cout << "LOADED FRIES" << "                     " << "Rs 700"<<"                  ORDER CODE: 9 "<<endl;
    cout << "CHILLI POTATOES" << "                  " << "Rs 600"<<"                  ORDER CODE: 10 "<<endl;
    cout << "------------------------------------------------------------------------------"<<endl;
	cout << "------------------------------------------------------------------------------" ;
	cout <<endl;
	cout << "                                 SALADS                                       ";
	cout << endl;
	cout << "------------------------------------------------------------------------------" ;
	cout << endl;
	cout << "SUPER FOOD SALAD" << "                 " << "Rs 500"<<"                  ORDER CODE: 11 "<<endl;
	cout << "CHICKEN MINCED SALAD" << "             " << "Rs 900"<<"                  ORDER CODE: 12 "<<endl;
	cout << "VEGETABLE TAM SALAD" << "              " << "Rs 300"<<"                  ORDER CODE: 13 "<<endl;
    cout << "SMOKED SALMON SALAD" << "              " << "Rs 300"<<"                  ORDER CODE: 14 "<<endl;
    cout << "AVOCADO SALAD" << "                    " << "Rs 350"<<"                  ORDER CODE: 15 "<<endl;
    cout << "------------------------------------------------------------------------------"<<endl;
	cout << "------------------------------------------------------------------------------" ;
	cout <<endl;
	cout << "                                DRINKS                                      ";
	cout << endl;
	cout << "------------------------------------------------------------------------------" ;
	cout << endl;
	cout << "DALGONA COFFEE" << "                   " << "Rs 500"<<"                  ORDER CODE: 16 "<<endl;
	cout << "BLUE LAGOON" << "                      " << "Rs 400"<<"                  ORDER CODE: 17 "<<endl;
	cout << "CHOCOLATE SHAKE" << "                  " << "Rs 400"<<"                  ORDER CODE: 18 "<<endl;
    cout << "STRAWBERRY LIMEADE" << "               " << "Rs 300"<<"                  ORDER CODE: 19 "<<endl;
     cout << "------------------------------------------------------------------------------"<<endl;
	cout << "------------------------------------------------------------------------------" ;
	cout <<endl;
	cout << "                                FROM CHEF                                     ";
	cout << endl;
	cout << "------------------------------------------------------------------------------" ;
	cout << endl;
	cout << "CHICKEN SCARPERIELLO" << "             " << "Rs 1000"<<"                  ORDER CODE: 20 "<<endl;
	cout << "HONEY SOY FRIED RICE" << "             " << "Rs 700"<<"                   ORDER CODE: 21 "<<endl;
	cout << "CHOCOLATE ESPRESSO CUPCAKES" << "      " << "Rs 600"<<"                   ORDER CODE: 22 "<<endl;
    cout << "CHICKEN CHAAP" << "                    " << "Rs 2000"<<"                  ORDER CODE: 23 "<<endl;
     cout << "------------------------------------------------------------------------------"<<endl;
	cout << "------------------------------------------------------------------------------" ;
	cout <<endl;
    char Z;
    double bill , amount=0;
    int quantity;
    int  ORDERCODE ;
    cout <<endl<< "                          PLACE YOUR ORDER PLEASE :-" <<endl;
    while(ORDERCODE != 0){
        cout << " IF YOU WANT TO ORDER SOMETHING ENTER RESPECTIVE ORDER CODE OTHERWISE PRESS 0 TO QUIT:-" <<endl;
        cout << "ORDER CODE: ";
        cin >> ORDERCODE;
         switch(ORDERCODE){

           case 0:
           break;

           case 1:
           cout << "How many burgers do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 500 * quantity;
           break;

           case 2:
           cout << "How many pizzas do you want?" <<endl;
           cin >> quantity;
           amount = amount+900 * quantity;
           break;

           case 3:
           cout << "How many molten lava cakes do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 1100 * quantity;
           break;

           case 4:
           cout << "How many pancakes do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 300 * quantity;
           break;

           case 5:
           cout << "How many shawarmas do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 350 * quantity;
           break;

           case 6:
           cout << "How many cheese noodles do you want?" <<endl;
           cin >> quantity;
           amount =amount+ 150 * quantity;
           break;

           case 7:
           cout << "How many wings do you want?" <<endl;
           cin >> quantity;
           amount =amount+250 * quantity;
           break;

           case 8:
           cout << "How much pasta do you want?" <<endl;
           cin >> quantity;
           amount = amount+300 * quantity;
           break;

           case 9:
           cout << "How much loaded fries do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 700 * quantity;
           break;

           case 10:
           cout << "How many Chilli potatoes do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 600 * quantity;
           break;


           case 11:
           cout << "How many Super food salads do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 500 * quantity;
           break;

           case 12:
           cout << "How many chicken minced salads do you want?" <<endl;
           cin >> quantity;
           amount = amount+900 * quantity;
           break;

           case 13:
           cout << "How many vegetable tam salads do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 300 * quantity;
           break;

           case 14:
           cout << "How many smoked salmon salads do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 300 * quantity;
           break;

           case 15:
           cout << "How many avocado salads do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 350 * quantity;
           break;

           case 16:
           cout << "How many dalgona coffees do you want?" <<endl;
           cin >> quantity;
           amount =amount+ 500 * quantity;
           break;

           case 17:
           cout << "How many blue lagoons do you want?" <<endl;
           cin >> quantity;
           amount =amount+400 * quantity;
           break;

           case 18:
           cout << "How much chocolate shakes do you want?" <<endl;
           cin >> quantity;
           amount = amount+400 * quantity;
           break;

           case 19:
           cout << "How much strawberry limeades do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 300 * quantity;
           break;

           case 20:
           cout << "How many chicken scarperiellos do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 1000 * quantity;
           break;


           case 21:
           cout << "How much honey soy fries rice do you want?" <<endl;
           cin >> quantity;
           amount = amount+700 * quantity;
           break;

           case 22:
           cout << "How much chocolate espresso cupcakes do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 600 * quantity;
           break;

           case 23:
           cout << "How many chicken chaaps do you want?" <<endl;
           cin >> quantity;
           amount = amount+ 2000 * quantity;
           break;

           default:
           cout << "Enter a valid order code" <<endl;

        }//switch end

    }//while end
   
    fstream myfile;
    myfile.open ("restaurant.txt" , ios::app);
      myfile<<"===========================================================";
      myfile<< endl;
     
      myfile << "YOUR TOTAL BILL IS " <<"Rs. " << amount  << endl;
  
    myfile.close();

cout<<"===========================================================";
cout << "YOUR TOTAL BILL IS " <<"Rs. " << amount  << endl;
  
cout << endl;

}
