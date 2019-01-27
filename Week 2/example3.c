void slow_servo(int port, int position) {
  enable_servo(port);
  float i;
  int interval = (position - get_servo_position(port)) / 100;  // compute small movements to increment with
  for(i = 0; i < 100; i++) {
    set_servo_position(port, get_servo_position(port) + interval);
    msleep(20);
  }
  disable_servo(port);
}
