int RX_PIN = 16;
int TX_PIN = 17;

void setup()
{
  Serial.begin(115200);                            // シリアルモニター＆Loraへの送信用
  Serial2.begin(9600, SERIAL_8N1, RX_PIN, TX_PIN); // Loraからの受信用
  // Lora_Serial2のポートレートはデフォルトで9600
}

int count =0;
void loop()
{
  // main func
  int data = 0;
  count++;
  Serial.println("edit 1");
  Serial.println("10 Uprint \"from Lora\"");
  Serial.print("20 Uprint \"count=");
  Serial.print(count);
  Serial.println("\"");
  Serial.println("edit 0");
  Serial.println("run");
  while (Serial2.available())
  {
    data = Serial2.read();
    Serial.write(data);
  }
  // a = Serial.read();
  Serial.write("hello \r\n");
  delay(3000);
}