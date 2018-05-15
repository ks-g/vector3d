#include <iostream>
#include "Vector3D.h"



Vector3D::Vector3D()
{
this->x = 0;
this->y = 0;
this->z = 0;
}


Vector3D::Vector3D(double x, double y, double z) {
this->x = x;
this->y = y;
this->z = z;
}



double Vector3D::getX() const {
return x;
}

double Vector3D::getY() const {
return y;
}

double Vector3D::getZ() const {
return z;
}


Vector3D Vector3D::operator+(const Vector3D& secondVector) const {
Vector3D newVector(this->x + secondVector.x, this->y + secondVector.y, this->z + secondVector.z);
return newVector;
}
Vector3D Vector3D::operator-(const Vector3D & secondVector) const {
Vector3D newVector(this->x - secondVector.x, this->y - secondVector.y, this->z - secondVector.z);
return newVector;
}

Vector3D Vector3D::operator-() const {
Vector3D newVector(this->x*-1, this->y*-1, this->z*-1);
return newVector;
}



Vector3D Vector3D::operator*(double number) const {
Vector3D newVector(this->x*number, this->y*number, this->z*number);
return newVector;
}
 Vector3D operator*(double number, const Vector3D & vector){
 Vector3D newVector(vector.x*number, vector.y*number, vector.z*number);
return newVector;
 }

 std::istream & operator>>(std::istream & iStream, Vector3D & vector){
    iStream>>"(">>vector.x>>",">>vector.y>>",">>vector.z>>")";
    vector.x=x;
    vector.y=y;
    vector.z=z;
        return iStream;
 }

 std::ostream & operator<<(std::ostream & oStream, const Vector3D & vector){
        oStream<<"("<<vector.x<<","<<vector.y<<","<<vector.z<<")";
        return oStream;
 }
