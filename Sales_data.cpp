#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& data) {
    units_sold += data.units_sold;
    revenue += data.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    return (units_sold/revenue);
}

Sales_data add(const Sales_data& data1, const Sales_data& data2) {
    Sales_data sum = data1;
    sum.combine(data2);
    return sum;
}

ostream &print(ostream& os, const Sales_data& data) {
    os << data.isbn() << " " << data.units_sold << " " << data.revenue << " " << data.avg_price() << endl;
    return os;
}

istream &read(istream &is, Sales_data &data) {
    double price = 0;
    is >> data.bookNo >> data.units_sold >> price;
    data.revenue = data.units_sold * price;
    return is;
}

ostream &print(ostream& os, const Person& person) {
    os << "Name: " << person.personName() << " Address: " << person.personAddress() << endl; 
    return os;
}

istream &read(istream &is, Person person) {
    is >> person.name >> person.address;
    return is;
}
