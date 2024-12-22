void intRtc() {                         //Fungsi Untuk RTC
  display.clearDisplay();               //Membersihkan Layar OLED
  display.setTextSize(1);               //Ukuran Teks pada OLED
  display.setTextColor(SSD1306_WHITE);  //Warna text pada OLED
  display.setCursor(0, 0);              //Posisi Teks pada OLED
  display.println(F("init RTC"));       //Menampilkan init RTC pada OLED
  display.display();                    //Menampilkan Semua pada OLED

  if (!rtc.begin()) {                       //Jika RTC tidak terbaca
    Serial.println("RTC tidak ditemukan");  //Menampilkan RTC tdk ditemukan Pada OLED
    Serial.flush();                         //mengosongkan data yang tersisa di buffer serial.
    display.setCursor(0, 20);               //mengatur posisis teks 
    display.println(F("RTC ERROR"));        //Menampilkan RTC eror pada OLED
    display.display();                      //Menampilkan Pada Oled
    while (1) delay(10);                    //Menghentikan oprasi lain (hanya melakukan oprasi pada diri sendiri)
  }
}
void ambilWaktu() {                                   //mengambil waktu dari RTC
  DateTime now = rtc.now() + TimeSpan(0, 0, 0, 20);   //mengambil waktu secara realtime
  sprintf(tanggal, "%02d/%02d/%04d %02d:%02d:%02d",   //format tanggal (MM/DD/YYYY HH:MM:SS)
          now.day(), now.month(), now.year(),         // Nilai-nilai yang diambil dari objek datetime (now)
          now.hour(), now.minute(), now.second());  
  Serial.println(tanggal);                            //Menampilkan tanggal pada serial monitor     
}
