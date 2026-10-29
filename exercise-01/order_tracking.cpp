#include <iostream>
#include <string>
using namespace std;

class Order {
private:
    int orderId;
    string item;
    double amount;
    static int totalOrders; 
public:
    Order(const string &itemName, double price) : item(itemName), amount(price) {
        ++totalOrders;
        orderId = totalOrders;
    }

    static int getTotalOrders() { return totalOrders; }

    void display() const {
        cout << "Order #" << orderId << " | Item: " << item
             << " | Amount: Rs. " << amount << endl;
    }
};

int Order::totalOrders = 0;

int main() {
    cout << "Orders before placing any: " << Order::getTotalOrders() << "\n\n";

    Order o1("Laptop", 55000.0);
    Order o2("Headphones", 1999.5);
    Order o3("Keyboard", 1200.0);

    o1.display();
    o2.display();
    o3.display();

    cout << "\nTotal orders placed so far: " << Order::getTotalOrders() << endl;

    {
        Order o4("Mouse", 599.0);
        o4.display();
    }

    cout << "Total orders placed (after o4): " << Order::getTotalOrders() << endl;
    return 0;
}
