#ifndef INHERITANCE_H
#define INHERITANCE_H

struct Base {
    int x;
};

struct Derived {
    struct Base base;
    int y;
};
#endif //INHERITANCE_H
