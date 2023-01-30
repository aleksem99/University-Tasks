#include <iostream>
#include <string>

using namespace std;

struct Medicine {
  string name;
  float price;
  int quantity;
  string expiry_date;
};

const int MAX_MEDICINES = 100;
int num_medicines = 0;
Medicine pharmacy[MAX_MEDICINES];

void add_medicine() {
  if (num_medicines >= MAX_MEDICINES) {
    cout << "Pharmacy is full, cannot add more medicines" << endl;
    return;
  }

  Medicine m;
  cout << "Enter name:" cin >> m.name;
  cout << "Enter price:" cin >> m.price;
  cout << "Enter quantity:" cin >> m.quantity;
  cout << "Enter expiry date:" cin >> m.expiry_date;

  pharmacy[num_medicines++] = m;
  cout << "Medicine added successfully" << endl;
}

void display_medicines(string expiry_date) {
  float total_value = 0;
  for (int i = 0; i < num_medicines; i++) {
    if (pharmacy[i].expiry_date == expiry_date) {
      total_value += pharmacy[i].price * pharmacy[i].quantity;
      cout << pharmacy[i].name << " "
           << pharmacy[i].price * pharmacy[i].quantity << endl;
    }
  }
  cout << "Total value of medicines expiring on " << expiry_date << ": "
       << total_value << endl;
}

void create_cheap_medicines() {
  Medicine cheap_pharmacy[MAX_MEDICINES];
  int num_cheap_medicines = 0;
  for (int i = 0; i < num_medicines; i++) {
    if (pharmacy[i].price < 10) {
      cheap_pharmacy[num_cheap_medicines++] = pharmacy[i];
    }
  }
  cout << "Medicines with price below 10 BGN: " << endl;
  for (int i = 0; i < num_cheap_medicines; i++) {
    cout << cheap_pharmacy[i].name << " " << cheap_pharmacy[i].price << endl;
  }
}

int main() {
  int choice;
  do {
    cout << "1. Add medicine" << endl;
    cout << "2. Display medicines expiring on a specified date" << endl;
    cout << "3. Display medicines with price below 10 BGN" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice:" cin >> choice;

    switch (choice) {
    case 1:
        add_medicine();
        break;
    case 2:
        string expiry_date;
        cout<< "Enter expiry date: "; cin >> expiry_date;
        display_medicines(expiry_date);
        break;
    case 3:
        create_cheap_medicines();
    break;
    case 4:
    break;
    }   
  }
}

