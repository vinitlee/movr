/* Simple USB Mouse Example
   Teensy becomes a USB mouse and moves the cursor in a triangle

   You must select Mouse from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

void setup() {
  Mouse.screenSize(2880, 1800, true);
//  for (int i=0; i<360; i++) {
//    int scale = 100;
//    Mouse.moveTo(int(scale*cos(i*PI/180)+100),int(scale*sin(i*PI/180)+100));
//  }
} // no setup needed
void loop() {
  Mouse.moveTo(0,0);
  delay(10);
//  int scale = 100;
//  int currentPoint[] = {scale,0};
//  int nextPoint[] = {0,0};
//  for (int i=0; i<360; i++) {
////    nextPoint[0] = scale*cos(i*PI/180);
////    nextPoint[1] = scale*sin(i*PI/180);
////    Mouse.move(
////      (nextPoint[0] - currentPoint[0]),
////      (nextPoint[1] - currentPoint[1])
////    );
////    currentPoint[0] = nextPoint[0];
////    currentPoint[1] = nextPoint[1];
//    delay(2);
//  }
}

