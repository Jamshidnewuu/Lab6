#include <iostream>
using namespace std;

// Problem 1a:
/*int sumUpTo100() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    return sum;
}*/

// Problem 1b:
/*int sumUpToN(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}*/

// Problem 2a:
/*bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void first10Primes() {
    int count = 0, num = 2;
    while (count < 10) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}*/

// Problem 3:
/*void collatzSequence(int n) {
    while (n != 1) {
        cout << n << ", ";
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }
    cout << 1 << endl;
}*/

// Problem 5:
/*void extractDigits(int n) {
    while (n > 0) {
        cout << n % 10 << " ";
        n /= 10;
    }
    cout << endl;
}*/

// Problem 6:
/*int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}*/

// Problem 7:
/*void sumUntilExceeds100() {
    int sum = 0, count = 0, num;
    while (sum <= 100) {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        count++;
    }
    cout << "Sum exceeded 100! Total sum: " << sum << "\nTotal numbers entered: " << count << endl;
}*/

// Problem 8:
/*void bankingWithdrawalSystem() {
    int balance = 500;
    int withdrawal;
    while (balance > 0) {
        cout << "Your balance: $" << balance << endl;
        cout << "Enter withdrawal amount (or 0 to cancel): ";
        cin >> withdrawal;
        if (withdrawal == 0) break;
        if (withdrawal > balance)
            cout << "Insufficient funds!" << endl;
        else
            balance -= withdrawal;
    }
    cout << "Remaining balance: $" << balance << endl;
}*/

// Problem 9:
/*void repeatUntilYN() {
    char response;
    do {
        cout << "Enter 'Y' or 'N': ";
        cin >> response;
    } while (response != 'Y' && response != 'N');
    cout << "Accepted" << endl;
}*/

// Problem 10:
/*void atmMenuSystem() {
    int choice;
    do {
        cout << "1: Withdraw\n2: Deposit\n3: Check Balance\n4: Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) cout << "Processing withdrawal...\n";
        else if (choice == 2) cout << "Processing deposit...\n";
        else if (choice == 3) cout << "Checking balance...\n";
        else if (choice == 4) cout << "Goodbye!\n";
        else cout << "Invalid choice!\n";
    } while (choice != 4);
}*/

// Problem 11:
/*void menuDrivenCalculator() {
    int choice, a, b;
    do {
        cout << "1: Add\n2: Subtract\n3: Multiply\n4: Divide\n5: Exit\nEnter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4: if (b != 0) cout << "Result: " << a / b << endl; else cout << "Cannot divide by zero!\n"; break;
            case 5: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);
}*/

// Problem 12:
/*void passwordAuthentication() {
    string password = "1234";
    string input;
    int attempts = 0;
    do {
        cout << "Enter password: ";
        cin >> input;
        attempts++;
        if (input == password) {
            cout << "Access Granted" << endl;
            return;
        } else {
            cout << "Incorrect" << endl;
        }
    } while (attempts < 3);
    cout << "Access Denied" << endl;
}*/

// Main function
int main() {
    return 0;
}
