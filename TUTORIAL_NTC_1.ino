/*
 * TUTORIAL NTC PADA ARDUINO
 * MEMBACA NILAI ANALOG DARI NTC
 * 
 * Pinout  :
 * NTC -> A1
 * 
 * Untuk membaca nilai dari pin analog (nilai 0 - 1023)
 */

void setup() {
  pinMode(A1,INPUT); //set A0 menjadi input
  Serial.begin(115200); //memulai komunikasi serial pada baud rate 115200
  delay(100);
  Serial.println("Mencoba baca nilai Analog NTC pada Arduino");
}

void loop() {
  int hasil = analogRead(A1); //ambil data nilai A0 dan simpan ke variabel hasil 
  Serial.println("Nilai analog dari NTC : " + String(hasil)); //tampilkan pada serial monitor
  delay(500);  //jeda waktu 500 uS
}
