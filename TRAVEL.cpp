#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int c1, c, q1, q2;
string q3;

void packagedetails() {
    cout << endl << " HERE ARE OUR FOUR AVAILABLE NORTHERN PACKAGES ONLY FOR YOU!" << endl;
    cout << "            ............................                                  ............................          " << endl;
    cout << "            o         ECONOMY          o                                  o        FIRST CLASS       o          " << endl;
    cout << "            o         3500/d           o                                  o          7500/d          o          " << endl;
    cout << "            o     PACKAGE CODE:111     o                                  o     PACKAGE CODE:121     o          " << endl;
    cout << "            ............................                                  ............................          " << endl << endl;
    cout << "            ............................                                  ............................          " << endl;
    cout << "            o           VIP            o                                  o         DIAMOND          o          " << endl;
    cout << "            o         15000/d          o                                  o         32000/d          o          " << endl;
    cout << "            o      PACKAGE CODE:565    o                                  o     PACKAGE CODE:888     o          " << endl;
    cout << "            ............................                                  ............................          " << endl << endl;

    while (true) {
        cout << " TO CHECK ITS DETAILS KINDLY ENTER ITS PACKAGE CODE (111) (121) (565) (888): ";
        cin >> c;

        if (c == 111) {
            cout << endl << "                             OUR ECONOMY PACKAGE INCLUDES                                                 " << endl;
            cout << "                             o Round-trip transportation by air-conditioned bus                           " << endl;
            cout << "                             o Accommodation in 3-star hotels                                             " << endl;
            cout << "                             o Daily breakfast                                                            " << endl;
            cout << "                             o Guided tours of major attractions                                          " << endl;
            cout << "                             o Entry fees to all included sites                                           " << endl;
            cout << "                             o Local guide services                                                       " << endl;
        } else if (c == 121) {
            cout << endl << "                             OUR FIRST CLASS PACKAGE INCLUDES                                             " << endl;
            cout << "                             o Round-trip transportation by luxury coach                                  " << endl;
            cout << "                             o Accommodation in 4-star hotels                                             " << endl;
            cout << "                             o Daily breakfast and dinner                                                 " << endl;
            cout << "                             o Guided tours of major attractions                                          " << endl;
            cout << "                             o Entry fees to all included sites                                           " << endl;
            cout << "                             o Airport transfers                                                          " << endl;
        } else if (c == 565) {
            cout << endl << "                             OUR VIP PACKAGE INCLUDES                                                     " << endl;
            cout << "                             o Round-trip airfare from major cities                                       " << endl;
            cout << "                             o Accommodation in 5-star hotels and luxury lodges                           " << endl;
            cout << "                             o All meals (breakfast, lunch, and dinner)                                   " << endl;
            cout << "                             o Private guided tours of major attractions                                  " << endl;
            cout << "                             o Entry fees to all included sites                                           " << endl;
            cout << "                             o Airport transfers and private transportation within destinations           " << endl;
        } else if (c == 888) {
            cout << endl << "                             OUR DIAMOND PACKAGE INCLUDES                                                 " << endl;
            cout << "                             o Round-trip airfare in business class                                       " << endl;
            cout << "                             o Accommodation in 5-star hotels, luxury lodges, and boutique resorts        " << endl;
            cout << "                             o All meals with gourmet dining experiences                                  " << endl;
            cout << "                             o Exclusive private guided tours of major attractions                        " << endl;
            cout << "                             o All entry fees and permits                                                 " << endl;
            cout << "                             o Private helicopter tour over the Northern areas                            " << endl;
        } else {
            cout << " WRONG INPUT" << endl;
        }

        char o;
        cout << endl << " WANNA CHECK ANOTHER PACKAGE? (Y/N): ";
        cin >> o;
        if (o == 'N' || o == 'n') {
            system("CLS");
            break;
        }
    }
}

void packageselect() {
    cout << " SO! WHICH PACKAGE DO YOU WANNA BOOK? " << endl << endl;
    cout << "                                      :-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-     " << endl;
    cout << "                                      :     o ECONOMY (111)                        :     " << endl;
    cout << "                                      :     o FIRST CLASS (121)                    :     " << endl;
    cout << "                                      :     o VIP (565)                            :     " << endl;
    cout << "                                      :     o DIAMOND (888)                        :     " << endl;
    cout << "                                      :-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-     " << endl;

    while (true) {
        cout << " YOUR CHOICE : ";
        cin >> c1;
        if (c1 == 111) {
            cout << endl << " CONGRATULATIONS! YOU'RE NOW GOING TO BOOK YOUR MEMORABLE ECONOMY PACKAGE WITH US :)" << endl;
            break;
        } else if (c1 == 121) {
            cout << endl << " CONGRATULATIONS! YOU'RE NOW GOING TO BOOK YOUR MEMORABLE FIRST CLASS PACKAGE WITH US :)" << endl;
            break;
        } else if (c1 == 565) {
            cout << endl << " CONGRATULATIONS! YOU'RE NOW GOING TO BOOK YOUR MEMORABLE VIP PACKAGE WITH US :)" << endl;
            break;
        } else if (c1 == 888) {
            cout << endl << " CONGRATULATIONS! YOU'RE NOW GOING TO BOOK YOUR MEMORABLE DIAMOND PACKAGE WITH US :)" << endl;
            break;
        } else {
            cout << " WRONG INPUT :(" << endl;
        }
    }
}

void bookingpanel() {
    cout << endl << endl << ":-::-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:- BOOKING PANEL :-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-" << endl;
    cout << endl << " HOW MANY PASSENGERS ARE IN TOTAL? ";
    cout << endl << " YOUR CHOICE : ";
    cin >> q1;
    cout << endl << " FOR HOW MANY DAYS YOU WANNA BOOK THIS PACKAGE? ";
    cout << endl << " YOUR CHOICE : ";
    cin >> q2;
    cout << endl << " FROM WHICH CITY DO YOU BELONG? ";
    cout << endl << " YOUR CHOICE : ";
    cin >> q3;

    string arr_1[q1];
    string arr_2[q1];
    string arr_3[q1];

    cout << endl;
}

int main() {
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::: OCEAN TRAVELS :::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::: WHERE DREAMS COME TRUE ::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "----------------------------------------- WELCOME TO OUR TOUR MANAGEMENT COMPANY ---------------------------------------" << endl;
    
    packagedetails();
    packageselect();
    bookingpanel();
    
    cout << endl << ":-::-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:- PASSENGERS INFO :-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-" << endl;
    
    string arr_1[q1];
    string arr_2[q1];
    string arr_3[q1];
    
    for (int i = 0; i < q1; i++) {
        cout << endl << "                                             PASSENGER NO " << i + 1 << " DETAILS" << endl;
        cout << "                                             o NAME : ";
        cin >> arr_1[i];
        cout << "                                             o AGE : ";
        cin >> arr_2[i];
        cout << "                                             o GENDER : ";
        cin >> arr_3[i];
        cout << endl;
    }
    
    cout << endl << ":-::-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-" << endl;
    string pname;
    double total;
    
    if (c1 == 111) {
        total = q2 * 3500 * q1;
        pname = "ECONOMY";
    } else if (c1 == 121) {
        total = q2 * 7500 * q1;
        pname = "FIRST CLASS";
    } else if (c1 == 565) {
        total = q2 * 15000 * q1;
        pname = "VIP";
    } else if (c1 == 888) {
        total = q2 * 32000 * q1;
        pname = "DIAMOND";
    }

    system("CLS");

    cout << endl << ":-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:- FINAL RECEIPT :-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-::-:-:-" << endl;
    cout << endl << " PACKAGE CODE : " << c1;
    cout << endl << " PACKAGE NAME : " << pname;
    cout<<  endl  <<" TOTAL DAYS : "<<q2;
    cout << endl << " YOUR CITY : " << q3;
    cout << endl << " YOUR TOTAL COST FOR THIS WHOLE TRIP IS : " << total << " PKR" << endl;
    
    for (int i = 0; i < q1; i++) {
        cout << endl << " PASSENGER " << i + 1 << " INFO : " << endl << " NAME : " << arr_1[i] << endl << " AGE : " << arr_2[i] << endl << " GENDER : " << arr_3[i] << endl;
    }
    
    cout << endl << ":-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:- FEEDBACK FORM :-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-" << endl;
    cout << endl << " HOW MUCH DO YOU RATE OUR SERVICE (OUT OF 5) : ";
    
    float rating;
    while (true) {
        cin >> rating;
        if (rating >= 0 && rating <= 5) {
            break;
        }
        cout << " INVALID INPUT!" << endl << " PLEASE ENTER AGAIN : ";
    }
    
    cout << " IS THERE ANY FURTHER SUGGESTION YOU WANNA WRITE (Y/N) : ";
    char suggest;
    while (true) {
        cin >> suggest;
        if (suggest == 'Y' || suggest == 'y') {
            cout << " PLEASE WRITE IT FROM HERE : ";
            string suggestion;
            cin.ignore();
            getline(cin, suggestion);
            cout <<endl<<" THANKS FOR YOUR VALUABLE FEEDBACK :)";
            break;
        } else if (suggest == 'N' || suggest == 'n') {
            cout << endl << " OKAY NO PROBLEM, THANKS FOR CHOOSING OCEAN TRAVELS FOR YOUR MEMORABLE JOURNEY :)";
            break;
        } else {
            cout << " WRONG INPUT:(" << endl << " PLEASE ENTER AGAIN : ";
        }
    }
    
    cout << endl << endl << " FOR FURTHER CONTACT AND DETAILS EMAIL US AT : support.oceantravels@gmail.com.pk";
}

