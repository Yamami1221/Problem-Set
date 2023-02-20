#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

vector<float> removeNegatives(vector<float>);

int main() {
    ifstream fin("scorefor16.2.txt");
    vector<float> score;
    string temp;
    float num;
    while (getline(fin, temp)) {
        num = stof(temp);
        score.push_back(num);
    }
    for (int i = 0; i < score.size(); i++) {
        cout << score[i] << " ";
    }
    cout << endl;
    score = removeNegatives(score);
    for (int i = 0; i < score.size(); i++) {
        cout << score[i] << " ";
    }
    cout << endl;
    return 0;
}

vector<float> removeNegatives(vector<float> score) {
    for (int i = 0; i < score.size(); i++) {
        if (score[i] < 0) {
            score.erase(score.begin() + i);
        }
    }
    return score;
}