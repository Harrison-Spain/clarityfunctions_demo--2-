#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "clarityfunctions.h"
using namespace std;

char msg[100];
void setMessage(char messageToSet[]){
    strcpy(msg, messageToSet);
}

void deleteMsg(char message[]){
    free(message);
}

void printMessage(){
    setMessage(msg);
    std::cout << msg << std::endl;
}