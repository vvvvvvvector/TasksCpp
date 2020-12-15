#include <iostream>
#include <algorithm>
#include <numeric>
#include <random>

int gen_x;

void print(int);
int gen();

int main()
{
    std::random_device rd; // ???
    std::mt19937 g(rd());  // ???

    int n, x;
    std::cin >> n >> x;

    int *v1 = new int[n];
    int *v2 = new int[n];

    gen_x = x;
    std::generate(v1, v1 + n, gen);
    gen_x = x;
    std::generate(v2, v2 + n, gen);
    std::for_each(v1, v1 + n, print);
    std::cout << std::endl;
    std::for_each(v2, v2 + n, print);
    std::cout << std::endl;

    std::shuffle(v1, v1 + n, g); // ???
    std::shuffle(v2, v2 + n, g); // ???

    std::for_each(v1, v1 + n, print);
    std::cout << std::endl;
    std::for_each(v2, v2 + n, print);
    std::cout << std::endl;

    int sum = std::accumulate(v1, v1 + n, 0);
    std::cout << "sum = " << sum << std::endl;

    printf("v1 * v2 = %d", std::inner_product(v1, v1 + n, v2, 0));

    delete[] v1;
    delete[] v2;
    return 0;
}

void print(int i) { std::cout << i << " "; }

int gen() { return gen_x++; }