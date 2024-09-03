#include <iostream>

using namespace std;
int sum_from_to(int first, int last) {//this is a sum function
    return (last - first + 1) * (first + last) / 2;/*this is a mathematic formula used for arithmetic series when we know a1 and an
    so when we want to just some all numbers in that interval we will just use the formula above;*/
}

int main() {
    //i am declaring my integers in the main fx
	int first;
	int last;
//let the user enter the number of his choice
    cout << "Enter the first integer: ";
    cin >> first;

    cout << "Enter the last integer: ";
    cin >> last;
//after entering the first and last number go to sum from to fx and print all what it has in the out put below
    cout << "The sum is: " << sum_from_to(first, last) <<"\n";

    return 0;
}
