int main() 
{  
  create_connect();
  create_drive_direct(150, 150);
  int time_passed = 0;
  int conditions_satisfied = 0;
  while (!conditions_satisfied) {
    if (get_create_lbump() || get_create_rbump()) {
      conditions_satisfied = 1;
      printf(“Touch Sensor Pressed!\n”);
    } else if (time_passed > 5000) {
      conditions_satisfied = 1;
      printf(“Five Seconds Passed!\n”);
    }
    time_passed += 20;
    msleep(20);
  }
  create_stop();
  create_disconnect();
}
