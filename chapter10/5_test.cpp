#include <iostream>
using namespace std;

class Point{
    private:
        int xpos, ypos;
    public:
        Point(int x, int y) : xpos(x), ypos(y){}
        void ShowPosition(){
            cout << '[' << xpos << ", " << ypos << ']' << endl;
        }
        Point& operator+=(const Point &ref){
            xpos += ref.xpos;
            ypos += ref.ypos;
            return *this;
        }
        Point& operator-=(const Point &ref){
            xpos -= ref.xpos;
            ypos -= ref.ypos;
            return *this;
        }
};

int main(){
    Point pos1(1, 1);
    Point pos2(1, 2);
    pos1.ShowPosition();
    pos1.operator+=(pos2);
    pos1.ShowPosition();
    
    return 0;
}