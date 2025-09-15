#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    int itemID;
    string itemName;
    float price;
    int stock;

    void input() {
        cout << "Enter Item ID: ";
        cin >> itemID;
        cin.ignore(); // Clear newline before reading full name
        cout << "Enter Item Name: ";
        getline(cin, itemName);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Stock Quantity: ";
        cin >> stock;
    }
};

class Bill {
public:
    int billID;
    string customerName;
    Item purchasedItems[10];
    int quantities[10];
    int itemCount = 0;

    void createBill(Item storeItems[], int storeSize) {
        cout << "Enter Bill ID: ";
        cin >> billID;
        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        char choice;
        do {
            int id, qty;
            cout << "Enter Item ID to purchase: ";
            cin >> id;
            cout << "Enter Quantity: ";
            cin >> qty;

            bool found = false;
            for (int i = 0; i < storeSize; i++) {
                if (storeItems[i].itemID == id) {
                    if (qty > storeItems[i].stock) {
                        cout << "❌ Not enough stock.\n";
                        return;
                    }
                    purchasedItems[itemCount] = storeItems[i];
                    quantities[itemCount++] = qty;
                    storeItems[i].stock -= qty;
                    found = true;
                    break;
                }
            }

            if (!found) cout << "❌ Item not found.\n";
            cout << "Add more items? (y/n): ";
            cin >> choice;
        } while ((choice == 'y' || choice == 'Y') && itemCount < 10);

        if (itemCount == 0) {
            cout << "❌ Cannot generate empty bill.\n";
            return;
        }

        displayBill();
        saveBillToFile();
    }

    void displayBill() {
        cout << "\n🧾 Bill ID: " << billID << "\nCustomer: " << customerName << "\n";
        float total = 0;
        for (int i = 0; i < itemCount; i++) {
            float itemTotal = purchasedItems[i].price * quantities[i];
            cout << purchasedItems[i].itemName << " x " << quantities[i]
                 << " = ₹" << itemTotal << "\n";
            total += itemTotal;
        }
        cout << "Total Amount: ₹" << total << "\n";
    }

    void saveBillToFile() {
        ofstream file("bills.txt", ios::app);
        file << "Bill ID: " << billID << "\nCustomer: " << customerName << "\n";
        for (int i = 0; i < itemCount; i++) {
            file << purchasedItems[i].itemName << "," << quantities[i]
                 << "," << purchasedItems[i].price << "\n";
        }
        file << "----\n";
        file.close();
    }
};

int main() {
    Item storeItems[3];
    cout << "📦 Enter details for 3 store items:\n";
    for (int i = 0; i < 3; i++) {
        storeItems[i].input();
    }

    Bill bill;
    bill.createBill(storeItems, 3);

    return 0;
}
