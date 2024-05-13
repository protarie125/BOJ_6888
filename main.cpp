#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll x, y;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> x >> y;
  while (x <= y) {
    cout << "All positions change in year " << x << '\n';
    x += 60;
  }

  return 0;
}