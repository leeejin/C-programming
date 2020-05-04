include <iostream>
using namespace std;
int main() {
    int *n = new int[5];
    int sum=0;
    double avg;
    cout << "정수 5개 입력>>";
    for (int i = 0; i < 5; i++) 
	{
        cin >> n[i];
        sum += n[i];
    }
    avg = sum / (float)5;
    cout << "평균 " << avg<<endl;
    delete[] n;
}
