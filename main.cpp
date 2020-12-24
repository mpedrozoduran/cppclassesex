#include <iostream>
#include "Sales_data.h"

using namespace std;

int main() {
    const int SUCCESS = 0;
    const int FAILURE = -1;

    Sales_data data1, data2;
    double price1, price2;
    read(read(cin, data1), data2);

    if (data1.isbn() == data2.isbn()) {
        data1.combine(data2);
        print(cout, data1);
        if (data1.units_sold != 0) {
            cout << data1.avg_price() << endl;
        } else {
            cout << "(no sales)" << endl;
        }
        return SUCCESS;
    } else {
        cerr << "Data must refer to the same ISBN" << endl;
        return FAILURE;
    }
}   
