//main.cpp
/*
#include <iostream>
using namespace std;

#include "Box.h"

int main() {
    Box b(10, 2);
    b.draw();
    cout << endl;
    b.setSize(7, 4);
    b.setFill('^');
    b.draw();

    return 0;
}*/

//main.cpp
#include <iostream>
#include "Ram.h"
using namespace std;

int main()
{
    Ram ram;
    ram.write(100, 20);
    ram.write(101, 30);
    char res = ram.read(100) + ram.read(101);
    ram.write(102, res);
    cout << "102 ¹øÁö °ª = " << (int)ram.read(102);
}