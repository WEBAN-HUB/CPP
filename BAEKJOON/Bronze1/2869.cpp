// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 0.25 초 (추가 시간 없음)	128 MB	269577	86149	68811	31.445%

// 문제
// 땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.

// 달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에 잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다.

// 달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 세 정수 A, B, V가 공백으로 구분되어서 주어진다. (1 ≤ B < A ≤ V ≤ 1,000,000,000)

// 출력
// 첫째 줄에 달팽이가 나무 막대를 모두 올라가는데 며칠이 걸리는지 출력한다.

#include <iostream>

using namespace std;

int main()
{
    int A, B, V;

    cin >> A >> B >> V;
    int div = V/(A-B);
    int remain = V %(A-B);

    if(div == 0)
        div = 1;
    else if(remain == 0)
        div = V-B;
    else if(remain != 0)
        div++;
    cout << div;
}