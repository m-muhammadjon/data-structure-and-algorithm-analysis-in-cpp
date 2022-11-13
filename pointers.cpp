#include <iostream>

#include "IntCell.h"

using namespace std;

int main() {
    IntCell *m;
    cout << m << endl;
    cout << m->read() << endl;
    m = new IntCell(0);
    cout << m << endl;
    m->write(5);
    cout << m << endl;

    cout << "Cell contents: " << m->read() << endl;

    delete m;
    cout << m->read() << endl;


    return 0;
}
