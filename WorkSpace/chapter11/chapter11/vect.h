#pragma once
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
	class Vector
	{
	public :
		//RECT POL用于表示坐标两种表示形式
		enum Mode {RECT, POL};
	private:
		double x;	//横坐标
		double y;	//纵坐标
		double mag;	//距离原点的距离
		double ang;	//角度
		Mode mode;	//坐标表示形式

		void set_x();
		void set_y();
		void set_mag();
		void set_ang();

	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; }
		double yval() const { return y; }
		double magval() const { return mag; }
		double angval() const { return ang; }
		void polar_mode();
		void rect_mode();

		Vector operator+(const Vector & b) const;
		Vector operator-(const Vector & b) const;
		Vector operator-() const;
		Vector operator*(double n) const;

		friend Vector operator*(double n, const Vector & a);
		friend std::ostream & operator<<(std::ostream & os, const Vector & v);
	};
}


#endif // !VECTOR_H_


