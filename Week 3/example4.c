int main() {
  create_connect();
  int condition;
  while (!a_button() && !b_button() && !c_button()) {
    if (a_button()) {
      condition = 1;
    } else if (b_button()) {
      condition = 2;
    } else if (c_button()) {
      condition = 3;
      break;
    }
    msleep(20);
  }
  create_drive_direct(150, 150);
  int time_passed = 0;
  while (
    !(condition == 1 && (get_create_lbump() || get_create_rbump())) && 
    !(condition == 2 && analog(0) < 1000) && 
    !(condition == 3 && time_passed > 5000)) {
    time_passed += 20;
    msleep(20);
  }
  create_stop();
  create_disconnect();
}
