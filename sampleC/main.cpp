#include <iostream>
#include <vector>

int main() {

    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    for(int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}