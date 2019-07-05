#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <future>


template <typename T>
std::vector<T> maxElement(std::vector<T> vec){
    std::vector<T> tempVec;
    std::vector<int>::iterator result;
    result = std::max_element(vec.begin(),vec.end());
    tempVec.push_back(*result);
    return tempVec;
}

int main() {

    std::vector<int> z = {2,7,6,0,5,1,3,4};
    std::vector<int> vMaxElement = maxElement(z);
    std::cout << "Maximo elemento: ";
    for (auto item: vMaxElement){
        std::cout << item << " ";
    } std::cout << std::endl << std::endl;

    std::vector<float> zf = {2,7,6,0,5,1,3,4};
    std::vector<float> vMaxElement = maxElement(z);
    std::cout << "Maximo elemento floatt: ";
    for (auto item: vMaxElement){
        std::cout << item << " ";
    } std::cout << std::endl << std::endl;

    unsigned int n = std::thread::hardware_concurrency();
    std::cout << n << " concurrent threads are supported.\n";

    return 0;
}
