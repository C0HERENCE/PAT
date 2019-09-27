#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct stu
{
    string name;
    string no;
    int score;
};
bool cmp (stu a,stu b)
{
    return a.score>b.score;
}
int main()
{
    int n;
    cin >> n;
    vector<stu> students(n);
    for (int i=0;i<n;i++)
        cin >> students[i].name >> students[i].no >> students[i].score;
    sort(students.begin(),students.end(),cmp);
    cout << students.front().name << " " << students.front().no << endl;
    cout << students.back().name << " " << students.back().no << endl;
}
