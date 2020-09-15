//
//  main.cpp
//  stockmarket
//
//  Created by Christian Cantera on 3/16/20.
//  Copyright © 2020 Christian Cantera. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Stock{
public:
    string name,symbol;
    double closingprice, currentprice;
    Stock(){}
    Stock (string newsymbol, string newname){
        name = newname;
        symbol = newsymbol;
    }
    double getClosingPrice(double closingprice){
        return closingprice;
    }
    double getCurrentPrice(double currentprice){
        return currentprice;
    }
    string getName(){
        return name;
    }
    string getSymbol(){
        return symbol;
    }
    double getChangePercent(double closingprice,double currentprice){
        return ((currentprice - closingprice)/currentprice * 100);
    }
};


int main() {
    string stock1name, stock1symbol;
    double stock1close, stock1current;
    cout <<"Enter the name of the stock: ";
    cin >> stock1name;
    cout <<"Enter the symbol of the stock: ";
    cin >> stock1symbol;
    cout <<"Enter the closing price: ";
    cin >> stock1close;
    cout <<"Enter the current price: ";
    cin >>stock1current;
    cout <<"\n\n\n";
    Stock s1(stock1symbol,stock1name);
    cout << s1.getName() << " stock:" <<endl;
    cout << "\tSymbol: " << s1.getSymbol() << endl;
    cout << "\tClosing Price: "<< s1.getClosingPrice(stock1close) <<endl;
    cout << "\tCurrent Price: " << s1.getCurrentPrice(stock1current) <<endl;
    cout << "\tChange percent: " << s1.getChangePercent(stock1close , stock1current)<<"%"<< endl;
    cout << "\t" <<s1.getName()<< " stock closing price is $" << s1.getClosingPrice(stock1close)<< endl;
}

