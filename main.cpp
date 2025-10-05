#include <iostream>
#include <functional>
#include <cassert>
using namespace std;


int until(int x,function <int(int)> f, function <bool(int)> g) {

    while (!g(x)) {


        x = f(x);

    }
    return x;
    
}

int double_int(int x) {

    return 2 * x;
}

int subtract_5(int x) {

    return x - 5;
}

bool is_less_than_10(int x) {

    return x < 10;
}


bool is_greater_than_100(int x) {

    return x > 100;
}

bool is_greater_than_1000(int x) {

    return x > 1000;
}


int main() {

    assert(until(100, subtract_5, is_less_than_10) == 5);

    assert(until(50, subtract_5, is_less_than_10) == 5);

    assert(until(1, double_int, is_greater_than_100) == 128);

    assert(until(1, double_int, is_greater_than_1000) == 1024);

    cout << "The code is correct" << endl;

    return 0;
}


