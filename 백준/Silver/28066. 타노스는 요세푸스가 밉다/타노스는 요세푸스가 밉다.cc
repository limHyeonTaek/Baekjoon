#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; i++)
        q.push(i);
    while (q.size() > 1) {
        int first = q.front();
        q.pop();
        for (int i = 0; i < K - 1 && !q.empty(); i++) {
            q.pop();
        }
        q.push(first);
    }
    cout << q.front() << endl;
    return 0;
}
