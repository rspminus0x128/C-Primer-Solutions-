#include<iostream>
using namespace std;

// Base class shapes
class shapes {
public:
    shapes(string def = "") {
        cout << "Shape: " << def << endl;
    }
};

// Derived class for 2D shapes
class twodimensional : public shapes {
public:
    twodimensional() : shapes("A two-dimensional shape") {
        cout << "Dimension: Two-dimensional\n";
    }
};

// Derived class for 3D shapes
class threedimensional : public shapes {
public:
    threedimensional() : shapes("A three-dimensional shape") {
        cout << "Dimension: Three-dimensional\n";
    }
};

// Square class derived from 2D
class square : public twodimensional {
public:
    square() {
        cout << "SQUARE" << endl;
    }
    void property() {
        cout << "It has four sides, four equal angles, each measuring 90 degrees, and four vertices." << endl << endl;
    }
};

// Triangle class derived from 2D
class triangle : public twodimensional {
public:
    triangle() {
        cout << "TRIANGLE" << endl;
    }
    void property() {
        cout << "It has three straight sides, three angles, and three vertices." << endl << endl;
    }
};

// Circle class derived from 2D
class circle : public twodimensional {
public:
    circle() {
        cout << "CIRCLE" << endl;
    }
    void property() {
        cout << "It is made up of a curved line, has no corners or edges. It is the set of all points in a plane whose distance from a fixed point remains constant." << endl << endl;
    }
};

// Cube class derived from 3D
class cube : public threedimensional {
public:
    cube() {
        cout << "CUBE" << endl;
    }
    void property() {
        cout << "A cube is a three-dimensional shape (3D) with six faces, eight vertices, and twelve edges." << endl << endl;
    }
};

// Pyramid class derived from 3D
class pyramid : public threedimensional {
public:
    pyramid() {
        cout << "PYRAMID" << endl;
    }
    void property() {
        cout << "A pyramid is a polyhedron with a polygon base and an apex, with straight edges and flat faces." << endl << endl;
    }
};

// Sphere class derived from 3D
class sphere : public threedimensional {
public:
    sphere() {
        cout << "SPHERE" << endl;
    }
    void property() {
        cout << "A sphere is round in shape. It is a 3D geometric shape where all points on the surface are equidistant from the center." << endl << endl;
    }
};

// Main function
int main() {
    string def = "A shape or figure is a graphical representation of an object's external boundary, outline, or external surface.\n";
    
    shapes s(def);
    
    triangle t;
    t.property();
    
    square sq;
    sq.property();
    
    circle cr;
    cr.property();
    
    pyramid p;
    p.property();
    
    cube cb;
    cb.property();
    
    sphere sp;
    sp.property();

    return 0;
}
