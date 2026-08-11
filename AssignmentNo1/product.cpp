
#include<iostream>
#include<string>
using namespace std;

class Product {
    private:
        string productName;
        int productId;
        int quantity;
        float price;

    public:

        void getdata() {
            cout << "Enter Product Name: ";
            getline(cin >> ws, productName);

            cout << "Enter Product ID: ";
            cin >> productId;

            cout << "Enter Quantity: ";
            cin >> quantity;

            cout << "Enter Price: ";
            cin >> price;
        }

        void displaydata() const {
            cout << "\n----- Product Details -----\n";
            cout << "Product Name: " << productName << endl;
            cout << "Product ID: " << productId << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Price: " << price << endl;
        }

        void calculateBill() const {
            float bill;

            bill = quantity * price;

            cout << "Total Bill: " << bill << endl;
        }
};

int main() {

    Product p1;

    p1.getdata();
    p1.displaydata();
    p1.calculateBill();

    return 0;
}

