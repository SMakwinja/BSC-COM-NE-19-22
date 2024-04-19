#include<iostream>
using namespace std;
double calculateTriangleArea(){
    double base,height;
    cout <<"enter the base and the height of the triangle \n";
    cin>>base>>height;
    double area = 0.5 *base * height;
    cout<<"the area of the triangle is :"<< area <<endl;
    return area;
}
double calculateRectangleArea(){
    double length,width;
    cout <<"enter the length and the width of the rectangle \n";
    cin>>length>>width;
    double area = length * width;
    cout<<"the area of the rectangle is :"<< area <<endl;
    return area;
}
double calculateSquareArea(){
    double side;
    cout <<"enter the side of the square \n";
    cin>>side;
    double area =side *side;
    cout<<"the area of the square is :"<< area <<endl;
    return area;
}

int main(){
    while(true){
         int selection;
        cout<<"Please select the area to calculate \n 1.Square \n 2.Rectangle \n 3.Triangle \n 4. Quit program \n Enter selection: ";
        
       cin>> selection;
       switch(selection){
           case 1:
           calculateSquareArea();
           break;
           
           case 2:
           calculateRectangleArea();
           break;
           
           case 3:
           calculateTriangleArea();
           break;
           
           case 4:
           cout<<" "<<endl;
           return 0;
           
           default:
           cout<<"Your input was: "<<selection<<"which is an invalid input \n Please enter a valid input!!! \n";
       }
        
    }
    return 0;
}


    