include <iostream>
using namespace std;
int main() {
    int *n = new int[5];
    int sum=0;
    double avg;
    cout << "���� 5�� �Է�>>";
    for (int i = 0; i < 5; i++) 
	{
        cin >> n[i];
        sum += n[i];
    }
    avg = sum / (float)5;
    cout << "��� " << avg<<endl;
    delete[] n;
}
