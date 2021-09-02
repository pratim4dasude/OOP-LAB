#include<iostream>
using namespace std;
class findvolume{
float findvolume(float l, float b, float h){
	return l * b * h;
}
float findvolume(float r){
	return (4.0/3.0) * 3.1415 * r * r *r; 
}
float findvolume(float r, float h){
	return 3.1415 * r *r * h;
}
};

int main()
{
    float l,b,h,r,r1,h1;
    cout<<"Enter length breath height of cube"<<endl;
    cin>>l>>b>>h;
    cout<<"Enter radius of sphere"<<endl;
    cin>>r;
    cout<<"Enter radius and height of cylinder";
    cin>>r1>>h1;

	cout<<"Volume of Cube ="<<findvolume(l,b,h)<<endl;
	cout<<"Volume of Sphere ="<<findvolume(r)<<endl;
	cout<<"Volume of Cylinder ="<<findvolume(r1,h1)<<endl;
	return 0;
}
