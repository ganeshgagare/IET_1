class Shape {
public:
    virtual double calculate_area() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculate_area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double calculate_area() override {
        return width * height;
    }
};

int main() {
   
    Circle c(5);
    Rectangle r(4, 6);

    Shape* s1 = &c;
    Shape* s2 = &r;

    
    s1->calculate_area(); 
    s2->calculate_area(); 
}