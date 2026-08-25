#include<iostream>
  class Rectangle{
    private:
     double length;
     double width;

    public:
      //Constructor with default values(1 for both length and width ) 
      Rectangle() : length(1.0), width(1.0) {} 

      // Constructor with custom values
      Rectangle(double len, double wid) : length(len), width(wid) {} 
      
     // Destructor (optional, but good practice)  
       ~Rectangle() { 
      std::cout << "Rectangle object destroyed." << std::endl;
       }

       //getter method for length and width
       double getLength() const {
        return length;
       }

       double getWidth() const {
        return width;
       }

       //Setter method for lenght and width 
       void setLength(double len) {
        length=len;
       }

       void setWidth(double wid){
        width=wid;
    }

    //calculate and return the area of the rectangle 
    double calculateArea() const {
        return length*width;
    }
    // Calculate and return the perimeter of the rectangle 
    double calculatePerimerter() const{
        return 2*(length+width);                                   
    }
  };

  int main(){
    Rectangle rect(4.0,40.0);

    std::cout<<"Rectangle properties:"<<std::endl;
    std::cout<<"Length:"<<rect.getLength()<<std::endl;
    std::cout<<"width:"<<rect.getWidth()<<std::endl;
    std::cout<<"Area:"<<rect.calculateArea()<<std::endl;
    std::cout<<"Perimeter:"<<rect.calculatePerimerter()<<std::endl;
    return 0;
  }