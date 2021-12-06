// A1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


#include <iostream>
#include <cmath>

using std::cout; using std::endl;

const double pi = std::acos(-1);

int main() {

    cout << "sin(pi) = " << std::sin(pi) << '\n'
        << "sin(pi/6) = " << std::sin(pi / 6) << '\n'
        << "sin(pi/4) = " << std::sin(pi / 4) << '\n'
        << "sin(pi/3) = " << std::sin(pi / 3) << '\n'
        << "sin(pi/2) = " << std::sin(pi / 2) << '\n'
        << "sin(+0) = " << std::sin(0.0) << '\n'
        << "sin(-0) = " << std::sin(-0.0) << '\n';

    return EXIT_SUCCESS;
}

