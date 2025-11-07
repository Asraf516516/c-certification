#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    string temp;
    getline(cin, temp); // "shuffled"

    vector<string> shuffled(N);
    for (int i = 0; i < N; i++)
        getline(cin, shuffled[i]);

    getline(cin, temp); // "original"

    vector<string> original(N);
    for (int i = 0; i < N; i++)
        getline(cin, original[i]);

    // Map each original instruction to its position
    map<string, int> pos;
    for (int i = 0; i < N; i++)
        pos[original[i]] = i;

    // Convert shuffled list into index sequence based on original order
    vector<int> idx(N);
    for (int i = 0; i < N; i++)
        idx[i] = pos[shuffled[i]];

    // Find the longest contiguous increasing subsequence
    int longest = 1, current = 1;
    for (int i = 1; i < N; i++) {
        if (idx[i] == idx[i - 1] + 1)
            current++;
        else
            current = 1;
        if (current > longest)
            longest = current;
    }

    // Minimum number of cut-and-insert operations
    cout << (N - longest);
    return 0;
}

