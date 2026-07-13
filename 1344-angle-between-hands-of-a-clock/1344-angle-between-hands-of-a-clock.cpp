class Solution {
public:
    double angleClock(int hour, int minutes) {
        double anglehour= (hour*30)%360;
        double anglemin=minutes*6;
        double angle=0;
        if(anglemin<=anglehour){
            anglehour+=minutes*0.5;
            angle= abs(anglehour-anglemin);
        }else{
            anglehour+=minutes*0.5;
            angle = abs(anglemin-anglehour);
        }
        if(angle>180){
            angle=360-angle;
        }
        return angle;
        
    }
};