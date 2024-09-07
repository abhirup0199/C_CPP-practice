#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    double price;
    static int productCount; // Static variable to count the number of products

public:
    // Constructor to initialize the product details
    Product(int id, string name, double p) {
        productID = id;
        productName = name;
        price = p;
        productCount++; // Increment the product count whenever a new product is created
    }

    // Static method to return the total number of products created
    static int getProductCount() {
        return productCount;
    }

    // Method to display product details
    void displayProductDetails() {
        cout << "Product ID: " << productID << ", Product Name: " << productName << ", Price: $" << price << endl;
    }
};

// Initialize static variable
int Product::productCount = 0;

int main() {
    int numProducts;

    // Asking the user for the number of products
    cout << "Enter the number of products: ";
    cin >> numProducts;

    // Dynamically allocate an array of Product objects
    Product* products[numProducts];

    // Taking input for each product
    for (int i = 0; i < numProducts; i++) {
        int id;
        string name;
        double price;

        cout << "\nEnter details for product " << i + 1 << endl;
        cout << "Product ID: ";
        cin >> id;
        cin.ignore(); // To clear the input buffer
        cout << "Product Name: ";
        getline(cin, name);
        cout << "Price: ";
        cin >> price;

        // Create a new Product object with the user's input
        products[i] = new Product(id, name, price);
    }

    // Display all product details
    cout << "\nProduct Details:" << endl;
    for (int i = 0; i < numProducts; i++) {
        products[i]->displayProductDetails();
    }

    // Display total number of products created
    cout << "\nTotal number of products created: " << Product::getProductCount() << endl;

    // Free dynamically allocated memory
    for (int i = 0; i < numProducts; i++) {
        delete products[i];
    }

    return 0;
}

