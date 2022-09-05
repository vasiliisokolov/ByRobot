
#include <iostream>
#include <vector>

std::vector<int> bye_robot(std::vector<int>, int);
bool check_input(int, int);

int main()
{
    int n;
    int buyers, robotIndex;
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
    if (check_input(n, buyers))
    {
        while (buyers != 0)
        {
            std::cout << "Enter robot's index:\n";
            std::cin >> robotIndex;
            robots = bye_robot(robots, robotIndex);
            std::cout << "Left: ";
            for (int i = 0; i < robots.size() - 1; i++)
            {
                std::cout << robots[i] << " ";

            }
            buyers--;
        }
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }
    

}

std::vector<int> bye_robot(std::vector<int> robots, int robotIndex)
{
    std::vector<int> vec2 (robots.size() - 1);
    
    int i = 0;
    for(; i < robotIndex; i++)
    {
        vec2[i] = robots[i];
    }
    i = robotIndex;
    for (; i < vec2.size(); i++)
    {
        vec2[i] = robots[i + 1];
    }
    
    return vec2;
}

bool check_input(int n, int buyers)
{
    if (buyers >= n)
    {
        return false;
    }
    else
    {
        return true;
    }
}
