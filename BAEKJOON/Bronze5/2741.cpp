// 문제
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄 까지 차례대로 출력한다.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i < n+1; i++)
    {
        cout << i << "\n";
    }
}