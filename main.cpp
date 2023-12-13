#include <iostream>
#include <cmath>

// Structure to represent a point in 3D space
struct Point3D {
    double x, y, z;

    // Constructor to initialize the point
    Point3D(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
};

// Function to calculate the Euclidean distance between two 3D points
double calculateDistance(const Point3D& point1, const Point3D& point2) {
    double deltaX = point1.x - point2.x;
    double deltaY = point1.y - point2.y;
    double deltaZ = point1.z - point2.z;

    return std::sqrt(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
}

int main() {
    // Create two 3D points
    Point3D pointA(1.0, 2.0, 3.0);
    Point3D pointB(4.0, 5.0, 6.0);

    // Calculate and display the distance between the points
    double distance = calculateDistance(pointA, pointB);

    std::cout << "Distance between points A and B: " << distance << std::endl;

    return 0;
}
