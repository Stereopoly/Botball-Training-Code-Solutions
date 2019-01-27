int main() 
{
  create_connect();
  int tme = 0;
  create_drive_direct(150, 150);
  while (!get_create_lbump() && !get_create_rbump()) {
    msleep(50);  // wait until touch is pressed
    tme += 50;
  }
  create_drive_direct(-150, -150);
  msleep(tme);
  create_stop();
  create_disconnect();
}
