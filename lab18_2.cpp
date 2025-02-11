#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect* R1, Rect* R2) {
    double x_left = max(R1->x, R2->x);
    double x_right = min(R1->x + R1->w, R2->x + R2->w);

    double y_top = min(R1->y, R2->y);
    double y_bottom = max(R1->y - R1->h, R2->y - R2->h);
    
    double overlap_w = x_right - x_left;
    double overlap_h = y_top - y_bottom;
    
    if (overlap_w <= 0 || overlap_h <= 0) {
        return 0;
    }
    
    return overlap_w * overlap_h;
}
