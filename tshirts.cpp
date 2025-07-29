#include <iostream>
#include <assert.h>

char shoulderSizeToTshirtSize(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms < 42) {
        sizeName = 'M';
    } else {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";
    assert(shoulderSizeToTshirtSize(37) == 'S');
    assert(shoulderSizeToTshirtSize(38) == 'M');
    assert(shoulderSizeToTshirtSize(40) == 'M');
    assert(shoulderSizeToTshirtSize(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}
