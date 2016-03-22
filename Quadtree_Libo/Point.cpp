
#include "stdafx.h"
#include <iostream>
#include "Point.h"

Node Node::operator +(const Node &P) const
{
	Node sum;
	sum.x=this->x+P.x;
	sum.y=this->y+P.y;
	return sum;
}

Node Node::operator -(const Node &P) const
{
	Node difference;
	difference.x=x-P.x;
	difference.y=y-P.y;
	return difference;
}

double Node::operator *(const Node &P) const
{
	return x*P.y-P.x*y;
}

Node Node::operator /(const double a) const
{
	Node tmp;
	tmp.x=(this->x)/a;
	tmp.y=(this->y)/a;
	return tmp;
}

bool Node::operator ==(const Node &P) const
{
	if ((x==P.x) && (y==P.y))
		return true;
	return false;
}

Node::Node()
{
	x=0;y=0;
	return;
}

Node::Node(double p1, double p2)
{
	x=p1;y=p2;
	return;
}

Node::Node(const Node &p) 
{
	x=p.x;y=p.y;
	return;
}

void Node::show()
{
	std::cout<<x<<"\t"<<y<<std::endl;
}