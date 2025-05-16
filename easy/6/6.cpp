#include <iostream>

void pascal(int n){
        int triangle[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                if (j == 0 || j == i){
                    triangle[i][j] = 1;
                }
                else
                {
                    triangle[i][j] = triangle[i - 1][j-1] + triangle[i-1][j];
                }
                std::cout << triangle[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }


int main()
{
    int n;
    std::cout << "number";
    std::cin >> n;
    pascal(n);
    return 0;
}