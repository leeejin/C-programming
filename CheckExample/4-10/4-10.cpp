#include <iostream>
using namespace std;
int main()
{
	int class_number,student_number,korean_score,english_score,math_score;
	int total_score=0;
	double average = 0;
	cin>>class_number>>student_number>>korean_score>>english_score>>math_score;
	total_score = korean_score + english_score+math_score;
	average = total_score / 3;
	cout<<"반 번호 국어 영어 수학 총점 평균 \n";
	cout<<class_number<<"   "<<student_number<<"   "
	<<korean_score<<"   "<<english_score<<"   "<<math_score
	<<"  "<<total_score<<"  "<<average<<"\n";
	return 0;
}