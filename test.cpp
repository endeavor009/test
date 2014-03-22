#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector < pair <int, int> > rootVector;
vector < pair <int, int> > mainVector;
stack< pair <int, int> > mystack;

int main() {
  int iCounter;
  int iStudentNumber;
  int iStudentPair;
  cin >> iCounter;
  for (int temp = 0; temp < iCounter; temp++ ) {
    cin >> iStudentNumber >> iStudentPair;
    for (int temp2 = 0; temp2 < iStudentPair; temp2++ ) {
      int iFirstNode;
      int iSecondNode;
      cin >> firstNode >> secondNode;
      mainVector.push_back(make_pair(iFirstNode, iSecondNode));
    }
  }
  return 0;
}
