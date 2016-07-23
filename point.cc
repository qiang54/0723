 ///
 /// @file    point.cc
 /// @author  qiang(2310703442@qq.com)
 /// @date    2016-07-22 06:43:03
 ///
 
#include <iostream>
 
using std::cout;
using std::cin;
using std::endl;

class Point
{
 public:
	 Point()
	 : _ix(0)
	 , _iy(0)
	 {
	  cout<<"poit()"<<endl;
	 }
	 Point(int ix,int iy)
	 : _ix(ix)
	 , _iy(iy)
	 {
	   cout<<"Point(int,int)"<< endl;
	 }
     Point(const Point &rsh)//复制构造函数
	 : _ix(rsh._ix)
	 , _iy(rsh._iy)
	 {
	  cout<<"Point (const Point &)复制构造函数"<<endl;
	 }
	 ~Point()//析构函数
	 {
	  cout <<"~Point()析构函数"<<endl;
	 }

     void print()
	 {
	  cout<<"("<< _ix
		  <<","<< _iy
		  <<")" <<endl;
	 }

 private:
	 int _ix;
	 int _iy;
};


int main(void)
{
  double x =5.0;
  double y =x;

  Point pt1(1,2);
  pt1.print();

  Point pt2 =pt1;
  pt2.print();

  return 0;
 
}
