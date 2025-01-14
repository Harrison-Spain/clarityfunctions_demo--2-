#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "clarityfunctions.h"
using namespace std;

int main() {
    char message[] = "Hello From C++ Application!";
    setMessage(message);
    printMessage();
    return 0;
}