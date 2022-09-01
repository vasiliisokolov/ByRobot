
#include <iostream>
#include <vector>

int main()
{
    int n;
    int buyers;
    std::cout << "Enter amount of robots:\n";
    std::cin >> n;
    std::vector<int> robots(n);
    std::cout << "Complete the list of robots:\n";
    for (int i = 0; i < robots.size(); i++)
    {
        std::cin >> robots[i];
    }
    std::cout << "Enter amount of buyers:\n";
    std::cin >> buyers;
    std::vector<int> purchases(buyers);
    std::cout << "Complete the list of buyers:\n";
    for (int i = 0; i < purchases.size(); i++)
    {
        std::cin >> purchases[i];
    }
    

}
