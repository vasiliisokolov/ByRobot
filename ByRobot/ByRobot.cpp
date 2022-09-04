
#include <iostream>
#include <vector>

int main();

std::vector<int> bye_robot(std::vector<int>, int, int);

int main()
{
    int n;
    int buyers, robotIndex;
    std::cout << "Enter amount of robots:\n";
    std::cin >> n;
    std::vector<int> robots(n);
    std::cout << "Complete the list of robots:\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> robots[i];
    }
    std::cout << "Enter amount of buyers:\n";
    std::cin >> buyers;
    
    while (buyers != 0)
    {
        std::cout << "Enter robot's index:\n";
        std::cin >> robotIndex;
        robots = bye_robot(robots, robotIndex, n);
        std::cout << "Left: ";
        for (int i = 0; i < robots.size(); i++)
        {
            std::cout << robots[i] << " ";

        }
        buyers--;
    }
    

}

std::vector<int> bye_robot(std::vector<int> robots, int robotIndex, int n)
{
    std::vector<int> vec2 (n);
    int temp = robots[n];
    int i = 0;
    for(; i < robotIndex; i++)
    {
        vec2[i] = robots[i];
    }
    for (; i < n; i++)
    {
        vec2[i] = robots[i + 1];
    }
    
    return vec2;
}
