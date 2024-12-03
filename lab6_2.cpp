#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    double rad;
    rad = deg*(M_PI/180);
    return rad;
}

double rad2deg(double rad){
    double deg;
    deg = rad*(180/M_PI);
    return deg;
}


double findXComponent(double length_1,double length_2,double rad_1,double rad_2){
    double X,X_lenght1,X_length2;
    X_lenght1 = length_1*cos(rad_1);
    X_length2 = length_2*cos(rad_2);
    X = X_lenght1+X_length2;
    return X;
}

double findYComponent(double length_1,double length_2,double rad_1,double rad_2){
    double Y,Y_lenght1,Y_length2;
    Y_lenght1 = length_1*sin(rad_1);
    Y_length2 = length_2*sin(rad_2);
    Y = Y_lenght1+Y_length2;
    return Y;
}

double pythagoras(double l1,double l2){
    double pyth = sqrt(pow(l1,2)+pow(l2,2));
    return pyth;
}

void showResult(double lenght,double direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << lenght << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}