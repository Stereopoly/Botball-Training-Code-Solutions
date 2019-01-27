int main() {
  mav(0, 1000);
  mav(1, 1000);
  msleep(2000);
  clear_motor_position_counter(0);
  mav(0, 1000);
  mav(1, 400);
  while (get_motor_position_counter(0) < 7000) {
    msleep(50);
  }
  mav(0, 0);
  mav(1, 0);
}
