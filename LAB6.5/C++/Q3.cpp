#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> sieveOfEratosthenes(std::vector<int>& nums) {
    int max_num = *std::max_element(nums.begin(), nums.end());
    std::vector<bool> is_prime(max_num + 1, true);

    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= max_num; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_num; j += i) {
                is_prime[j] = false;
            }
        }
    }

    std::vector<int> primes;
    for (int num : nums) {
        if (is_prime[num]) {
            primes.push_back(num);
        }
    }

    return primes;
}
int main() {

    std::vector<int> nums = {1,2,3,5,7,10,13,17,19,23,24,26,29,31};
    std::vector<int> primes = sieveOfEratosthenes(nums);

    std::cout << "Prime numbers in the list: ";
    for (int num : primes) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
