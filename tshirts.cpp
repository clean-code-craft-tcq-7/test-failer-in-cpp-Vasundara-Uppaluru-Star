#include <iostream>
#include <assert.h>

char shoulderSize(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";
    assert(shoulderSize(5) == 'error');
    assert(shoulderSize(37) == 'S');
    assert(shoulderSize(38) == 'M');
    assert(shoulderSize(40) == 'M');
    assert(shoulderSize(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}
