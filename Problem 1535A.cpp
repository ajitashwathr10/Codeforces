#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    long t;
    scanf("%ld", &t);
    while (t--) {
        std::vector<std::pair<long, long>> numbers(4);
        for (long i = 0; i < 4; ++i) {
            scanf("%ld", &numbers[i].first);
            numbers[i].second = i;
        }

        std::sort(numbers.rbegin(), numbers.rend());

        long even_index = numbers[0].second / 2;
        long odd_index = numbers[1].second / 2;

        puts(even_index == odd_index ? "NO" : "YES");
    }
}

