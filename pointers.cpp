#include <iostream>
using namespace std;

void exchangeNumbers(int* a, int* b) {
    int temp_num = *a;
    *a = *b;
    *b = temp_num;
}

void addOne(int* a) {
    *a += 1;
}

void ckeckEvenOrOdd(int* a) {
    if (*a % 2 == 0) {
        cout << *a << " is even" << endl;
    }
    else {
        cout << *a << "is odd" << endl;
    }

}


int powNumber(int* a) {
    return *a *= *a;
}

void dobutok(int* a, int* b) {
    cout << "dobutok of " << *a << " and " << *b << " equals " << *a * *b << endl;
}

void checkBiggestDivisior(int* a) {
    int i = * a -1;
    
    while (true)
    {
        if (*a % i == 0) {
            cout << i << " is biggest divisor of " << *a << endl;
            break;
        }
        else {
            i -= 1;
        }
    }
}

void fibonacci(int* a)
{
    int fibonacci_standart = 0;
    int fibonacci_satandart_1 = 1;
    while (fibonacci_satandart_1 < *a)
    {
        int temp = fibonacci_satandart_1;
        fibonacci_satandart_1 = fibonacci_satandart_1 + fibonacci_standart;
        fibonacci_standart = temp;
    }

    if (*a == fibonacci_satandart_1) {
        cout << "this is fibonacci number" << endl;
    }
    else
    {
        cout << "this isnt fibonacci number" << endl;
    }
}



int main()
{
    cout << "Hello World!" << endl;
    int a = 1025;
    int* ptr = &a;
    cout << a << endl << ptr << endl;
    // task one
    int num1 = 12;
    int num2 = 15;
    cout << num1 << endl << num2 << endl;
    exchangeNumbers(&num1, &num2);
    cout << num1 << endl << num2 << endl;

    // task two
    cout << endl << "task two" << endl << a << endl;
    addOne(&a);
    cout << a << endl;

    // task three
    cout << endl << "task three" << endl;
    ckeckEvenOrOdd(&a);

    // task four
    cout << endl << "task four" << endl;
    int num3 = 10;
    cout << "pow of " << num3 << " is ";
    cout << powNumber(&num3) << endl;

    // task five
    cout << endl << "task five" << endl;
    int num4 = 10;
    int num5 = 987;
    dobutok(&num4, &num5);

    // task six
    cout << endl << "task six" << endl;
    int num6 = 20;
    checkBiggestDivisior(&num6);

    // task seven 
    cout << endl << "task seven or fibonacci" << endl;

    int fibonacci_num = 3;
    int noFibonacci_num = 4;
    fibonacci(&fibonacci_num);
    fibonacci(&noFibonacci_num);

};
