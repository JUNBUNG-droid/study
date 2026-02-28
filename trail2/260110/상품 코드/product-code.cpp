#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class Product{
    public:
        string name;
        int code;
    Product(string name="codetree", int code=50){
        this -> name = name;
        this -> code = code;
    }
};

int main() {
    cin >> product_name >> product_code;

    // Please write your code here.
    Product p = Product();
    cout << "product " << p.code << " is " << p.name << '\n'; 
    p = Product(product_name,product_code);
    cout << "product " << p.code << " is " << p.name; 
    return 0;
}