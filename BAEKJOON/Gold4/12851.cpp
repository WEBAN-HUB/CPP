// 문제
// 수빈이는 동생과 숨바꼭질을 하고 있다. 수빈이는 현재 점 N(0 ≤ N ≤ 100,000)에 있고, 동생은 점 K(0 ≤ K ≤ 100,000)에 있다. 수빈이는 걷거나 순간이동을 할 수 있다. 만약, 수빈이의 위치가 X일 때 걷는다면 1초 후에 X-1 또는 X+1로 이동하게 된다. 순간이동을 하는 경우에는 1초 후에 2*X의 위치로 이동하게 된다.

// 수빈이와 동생의 위치가 주어졌을 때, 수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초 후인지 그리고, 가장 빠른 시간으로 찾는 방법이 몇 가지 인지 구하는 프로그램을 작성하시오.

// 입력
// 첫 번째 줄에 수빈이가 있는 위치 N과 동생이 있는 위치 K가 주어진다. N과 K는 정수이다.

// 출력
// 첫째 줄에 수빈이가 동생을 찾는 가장 빠른 시간을 출력한다.

// 둘째 줄에는 가장 빠른 시간으로 수빈이가 동생을 찾는 방법의 수를 출력한다.

#include <iostream>
#include <queue>

using namespace std;

int N, K,count;
const int INF = 2e9;
const int INPUT_MAX = 100000;
vector<int> visited(INPUT_MAX + 1, INF);

int BFS()
{
    queue<pair<int,int>> q;
    q.push({N,0});
    int min = INF;
    while(!q.empty())
    {
        pair<int,int> val = q.front();
        q.pop();

        if(val.first == K)
        {
            if(val.second < min)
            {
                min = val.second;
                count = 1;
            }
            else if(val.second == min)
            {
                count++;
            }
        }
        
        for(int nextVal : {val.first -1, val.first +1, val.first * 2})
        {
            if(nextVal >= 0 && nextVal <= INPUT_MAX && visited[nextVal] >= val.second + 1)
            {
                visited[nextVal] = val.second +1;
                q.push({nextVal, val.second + 1});
            }
        }
    }
    return min;
}

int main()
{
    cin >> N >> K;
    count = 0;
    int min = BFS();
    cout << min << endl << count;
}