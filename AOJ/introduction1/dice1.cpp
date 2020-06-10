#include <iostream>
#include <cmath>
#include <iomanip>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

class Dice
{
    map<int, int> faces;

public:
    void setFaces();
    void setFace(int faceNum, int faceValue);
    int getFace(int faceNum);
    void moveDice(char direction);
};

void Dice::setFaces()
{
    rep(i, 6)
    {
        cin >> this->faces[i + 1];
    }
}

void Dice::setFace(int faceNum, int faceValue)
{
    this->faces[faceNum] = faceValue;
}

int Dice::getFace(int faceNum)
{
    return this->faces[faceNum];
}

void Dice::moveDice(char direction)
{
    int changeValue[4];
    // NSWE
    if (direction == 'N')
    {
        //1->5,2->1,6->2,5->6
        }
}

int main()
{
    Dice d;
    d.setFaces();
    int ans = d.getFace(1);
    cout << ans << endl;
}