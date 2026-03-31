#include<iostream>
#include<vector>
using namespace std;
void linear(vector<int>vec,  int target) {
    bool isfound=false;
    for (int val:vec) {
        if (target==val) {
            isfound=true;
            break; //optimize element milne ke baad age loop nhi chalega
        }

    }
    if (isfound) {
        cout<<"element found ";
    }
    else {
        cout<<"element not found";
    }

}

int main() {
    vector<int>vec={4,67,30,69};
    int target=69;

    linear(vec, target);

    return 0;
}