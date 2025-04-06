#include <iostream>
using namespace std;

// Problem 1a
/*void print() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "Sum up to 100: " << sum << endl;
}*/

// Problem 1b
/*void doMath() {
    int n = 10, sum = 0, i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "Sum up to " << n << ": " << sum << endl;
}*/

// Problem 2a
/*void Print() {
    int num = 29;
    bool print = true;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            print = false;
            break;
        }
    }
    if (print) {
        cout << num << " is prime." << endl;
    } else {
        cout << num << " is not prime." << endl;
    }
}*/

// Problem 2b
/*void print() {
    int count = 0, num = 2;
    while (count < 10) {
        bool print = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                print = false;
                break;
            }
        }
        if (print) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}
int main() {
    print();
    return 0;
}*/

// Problem 3:
/*void doMath(int n) {
    print(n);
    if (n == 1) return;
    print(',');
    if (n % 2 == 0) doMath(n / 2);
    else doMath(3 * n + 1);
}*/

// Problem 5:
/*void print (int n) {
    while (n > 0) {
        cout << n % 10 << " ";
        n /= 10;
    }
    cout << endl;
}*/

// Problem 6:
/*int add(int n) {
    if (n == 0) return 0;
    return 1 + add(n / 10);
}*/

// Problem 7:
/*void doMathSum(int sum, int count) {
    int n;
    cin >> n;
    if (sum + n > 100) {
        print(sum);
        return sum;
    }
    return doMathSum(sum + n, count + 1);*/

// Problem 8:
/*void doMath(int balance) {
    if (balance == 0) {
        cout << balance << endl;
        return;
    }
    int withdraw;
    cin >> withdraw;
    if (withdraw == 0) {
    return;
    }
    if (withdraw > balance) {
        cout << 'E' << endl;
    } else {
        balance -= withdraw;
        cout << balance << endl;
    }
    doMath(balance);
}*/

// Problem 9:
/*void doMath() {
    char c;
    cin >> c;
    if (c == 'Y' || c == 'N') {
        print('A');
        return;
    }
    print('I');
    doMathYN();
}
int main() {
    int n;
    cin >> n;
    doMath(n);
    return 0;
}*/

// Problem 10:
/*void print() {
    int choice;
    cout << "1: Withdraw\n2: Deposit\n3: Check Balance\n4: Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 4) {
        cout << "Goodbye!" << endl;
        return;
    }
    if (choice == 1) {
    cout << "Processing withdrawal" << endl; 
    } else if (choice == 2) {
    cout << "Processing deposit" << endl:
    } else if (choice == 3) {
    cout << "Checking balance" << endl; 
    } else {
    cout << "Invalid choice!\n";
    }
    print();
}
int main() {
    print();
    return 0;
}*/

// Problem 12:
/*void printNTimes (int n) {
    string number;
    for (int i = 0; i < n; i++) {
        cout << "Enter the password: ";
        cin >> number;
        if (number == "1234") {
            cout << "Correct!" << endl;
            break;
        } else {
            cout << "Try again"<< endl;
        }
    }
}
int main () {
    printNTimes(3);
}*/

