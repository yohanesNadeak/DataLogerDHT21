//Memulai Komunikasi Pada Oled
void intOled() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {  //mencoba Komunikasi oled dan alamat I2C
    Serial.println(F("SSD1306 allocation failed"));            //Jika inisiasi gagal maka akan menampilkan
    for (;;)                                                   //tidak akan berlanjut lagi(oled terjebak disini)
      ;
  }
  display.clearDisplay();  //membersihkan oled
  delay(1000);             //jeda selama 1 detik
}

void tampilWaktu() {
  DateTime now = rtc.now() + TimeSpan(0, 0, 0, 20);  // Ambil waktu saat ini dari RTC
  display.fillRect(0, 0, 128, 10, BLACK);            //Membuat garis atas layar kosong,koordinat x=0, y=0 hingga lebar 128 pixel dan tinggi 10 pixel
  display.setTextSize(1);                            //Ukuran Teks pada oled
  display.setTextColor(SSD1306_WHITE);               //mengatur warna teks
  sprintf(tanggal, "%02d/%02d/%04d %02d:%02d:%02d",  //format tanggal (MM/DD/YYYY HH:MM:SS)
          now.day(), now.month(), now.year(),         // Nilai-nilai yang diambil dari objek datetime (now)
          now.hour(), now.minute(), now.second());
  display.setCursor(0, 0);                           // Atur posisi kursor text pada oled
  display.println(tanggal);                          //menampilkan tanggal pada oled
  display.display();                                 // Tampilkan semua di layar
}

void tampilkanSuhu() {
  float humi = dht21.readHumidity();                // Membaca humidity
  float tempC = dht21.readTemperature();            //Membaca Temperatur
  display.fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, WHITE); //Membuat garis atas layar kosong,koordinat x=0, y=0
  display.setTextSize(1, 2);                         //Mengatur Posisi text
  display.setTextColor(WHITE);                       //Mengatur warna text

  // Display Temperature
  String tempText = "Suhu: " + String(tempC) + " C";
  int tempX = (SCREEN_WIDTH - (tempText.length() * 6)) / 2;  // Approximate width per character
  display.setCursor(tempX, 20);
  display.println(tempText);  // menampilkan nilai temperature

  // Display Humidity
  String humiText = "Kelembaban: " + String(humi) + " %";
  int humiX = (SCREEN_WIDTH - (humiText.length() * 6)) / 2;  // Approximate width per character
  display.setCursor(humiX, 40);
  display.println(humiText);  // menampilkan nilai humidity
  display.display();          // Update the display
}

void logo() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);                  //Menginisialisasi layar OLED
  display.clearDisplay();                                     //Membersihkan tampilan oled
  display.drawBitmap((128 - 62) / 2, 0, myBitmap, 62, 64, 1); //Menggambar bitmap dengan posisi ditengah
  display.display();                                          //Menampilkan semua pada oled
  delay(3000);                                                //jeda selama 3detik
  display.clearDisplay();                                     //Membersihkan layar pada oled
  display.setTextSize(1);                                     //ukuran text pada oled
  display.setTextColor(SSD1306_WHITE);                        //Mengatur warna pada teks
  display.setCursor(0, 0);                                    //atur posisi pada oled
  display.println(F("OLED Initialized"));                     //posisi sudah ditentukan
  display.display();                                          //menampilkan pada oled
  delay(3000);                                                //jeda selama 3 detik
}