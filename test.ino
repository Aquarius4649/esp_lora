int RX_PIN = 16;
int TX_PIN = 17;

void setup()
{
  Serial.begin(115200);                            // シリアルモニター＆Loraへの送信用
  Serial2.begin(9600, SERIAL_8N1, RX_PIN, TX_PIN); // Loraからの受信用
  // Lora_Serial2のポートレートはデフォルトで9600
}

void loop()
{
  // main func
  int data = 0;
  Serial.println("edit 1");
  Serial.println("10 Uprint \"from Lora\r\n\"");
  Serial.println("run");
  Serial.println("edit 0");
  delay(3000);
  while (Serial2.available())
  {
    data = Serial2.read();
    Serial.write(data);
  }
}