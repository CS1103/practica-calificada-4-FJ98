include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <future>

template <typename T>
auto maxElemnt(std::vector<T>& vec){
    auto result = std::max_element(vec.begin(),vec.end());
    return result;
}


int main(){
    std::vector<int> z = {2,7,6,0,5,1,3,4};
    std::vector<float> zfloat = {2.5,7.7,6.5,0.7,5.8,1.2,3.4,4.3};
    std::cout << "Maximo elemento sin hilos: " << *maxElemnt(z) << '\n';

    auto a1 = std::async(&maxElemnt<int>,std::ref(z));
    std::cout << "Maximo elemento con hilos: " <<*a1.get() << "\n\n";


    unsigned int n = std::thread::hardware_concurrency();
    std::cout << n << " concurrent threads are supported.\n";
}
