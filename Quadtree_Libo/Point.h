#ifndef POINT_H_
#define POINT_H_



class Node  //点的信息
{
public:
	double x,y;  //点的坐标
public:
	Node();
	Node(double p1,double p2);
	Node(const Node &p);
	Node operator+(const Node &P)const;
	Node operator-(const Node &P)const;
	bool operator==(const Node &P)const;
	double operator*(const Node &P)const;
	Node operator/(const double a)const;
	void show();
};

#endif