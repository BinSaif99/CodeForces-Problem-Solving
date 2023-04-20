//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//
//bool containsFour(int num)
//{
//    while (num > 0)
//    {
//        if (num % 10 == 4)
//        {
//            return true;
//        }
//        num /= 10;
//    }
//    return false;
//}
//
//
//vector<long long> generateLiveSequence(int length)
//{
//    vector<long long> liveSequence;
//    long long currentNumber = 1;
//    while (liveSequence.size() < length)
//    {
//        if (!containsFour(currentNumber))
//        {
//            liveSequence.push_back(currentNumber);
//        }
//        currentNumber++;
//    }
//    return liveSequence;
//}
//
//int main()
//{
//
//    vector<long long> liveSequence = generateLiveSequence(1000000);
//
//
//    int t;
//    cin >> t;
//
//
//    while (t--)
//    {
//
//        long long k;
//        cin >> k;
//        cout << liveSequence[k - 1] << endl;
//    }
//
//    return 0;
//}
//
//
//
//
//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool containsFour(long long num)
//{
//    while (num > 0)
//    {
//        if (num % 10 == 4)
//        {
//            return true;
//        }
//        num /= 10;
//    }
//    return false;
//}
//
//vector<long long> generateLiveSequence(int length)
//{
//    vector<long long> liveSequence;
//    long long currentNumber = 1;
//    while (liveSequence.size() < length)
//    {
//        if (!containsFour(currentNumber))
//        {
//            liveSequence.push_back(currentNumber);
//        }
//        currentNumber++;
//    }
//    return liveSequence;
//}
//
//int main()
//{
//    // Generate the live sequence of numbers
//    vector<long long> liveSequence = generateLiveSequence(1000000);
//
//    int t;
//    cin >> t;
//
//    while (t--)
//    {
//        long long k;
//        cin >> k;
//
//        // Print the k-th element of the live sequence
//        cout << liveSequence[k - 1] << endl;
//    }
//
//    return 0;
//}

#include <iostream>
using namespace std;

bool containsFour(long long num) {
    while (num > 0) {
        if (num % 10 == 4) {
            return true;
        }
        num /= 10;
    }
    return false;
}

long long getLiveNumber(long long k) {
    long long count = 0, num = 1;
    while (count < k) {
        if (!containsFour(num)) {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        cout << getLiveNumber(k) << endl;
    }
    return 0;
}


