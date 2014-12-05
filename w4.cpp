#include <iostream>
 using namespace std;

 class Time {
     int hour;
     int minute;
   public:
     Time() {
         hour = 0;
         minute = 0;
         cout << "T$";
     }
     Time(int h, int m) {
         cout << "T*";
     }
     Time(const Time& t) {
         cout << "T#";
     }
     ~Time() {
         cout << "T%"<< endl;
     } 
 };

 class Clock {
     Time t;
   public:
     Clock() {
         cout << "C$";
     }
     Clock(const Time& c) {
         cout << "C*" << endl;
    }
     Clock(const Clock& c) {
         cout << "C#";
    }
     ~Clock() {
         cout << "C%" << endl;    
     }
     Time time() const { return t; }
 };

 class AlarmClock : public Clock {
     Time a;
     int on;
   public:
     AlarmClock() {
         cout << "A$";
     }
     AlarmClock(const Time& c, const Time& a) : Clock(c) {
         cout << "A*" << endl;
         cout << endl;
     }
     AlarmClock(const AlarmClock& ac) : Clock(ac) {
        cout << "A#";
     }
     ~AlarmClock() {
         cout << "A%" << endl;
     }
 
 };

 int main() {
     AlarmClock a = AlarmClock(Time(11,59),Time(12,0));

     return 0;
 }
 
 /*
 T*T*T$C*
T$A*

T%
T%
A%
T%
C%
T%

 
 */
