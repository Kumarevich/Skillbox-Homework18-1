#include <iostream>
#include <vector>

void swap_vec(std::vector<int>& a, int* pb) {
    int t;
    for (int i = 0; i < a.size(); ++i) {
        t = a[i];
        a[i] = *(pb + i);
        *(pb + i) = t;
    }
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    int b[] = {2, 4, 6, 8};
    swap_vec(a, b);
    for (int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < sizeof(b)/ sizeof(int); ++i) {
        std::cout << b[i] << " ";
    }
    return 0;
}
