int main() {
  mav(0, 1000);  // drive forward
  mav(1, 1000);
  msleep(2000);
  mav(0, 0);   // stop motors
  mav(1, 0);
  set_servo_position(0, 600);  // move arm up
  msleep(1000);     // wait for servo to move
  mav(0, -1000);    // drive backward
  mav(1, -1000);
  msleep(2000);
  mav(0, 0);   // stop motors
  mav(1, 0);
  set_servo_position(0, 0);   // move arm down
  msleep(1000);
}
