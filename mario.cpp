//CS50 PSet 1-C: Mario
#include "iostream"
using namespace std;

class Mario {
  int height;

public:
  void triangle() {
    if (this->height>1 && this->height<23) {
      for (int i=2; i<(this->height+2); i++) {
        for (int j=0; j<(this->height+1-i); j++) {
          cout << " ";
        }
        for (int j=1; j<=i; j++) {
          cout << "#";
        }
        cout << endl;
      }
    }
  }
  void getHeight() {
    cout << "Height: ";
    cin >> this->height;
  }
};

int main() {
  Mario m;
  m.getHeight();
  m.triangle();
}
