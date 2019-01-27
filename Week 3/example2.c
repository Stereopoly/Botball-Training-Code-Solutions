int main() 
{
  create_connect();
  int i;
  for (i = 0; i < 4; i++) {
    create_drive_direct(150, 150);
    msleep(1000);
    create_drive_direct(150, -150);
    msleep(600);
  }
  create_stop();
  create_disconnect();
}
