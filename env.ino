#include <Wire.h>
#include <LiquidCrystal.h>
#include <RTClib.h>
#include <DHT.h>

// Pin definitions
#define TEMP_HUMIDITY_PIN 2
#define PHOTO_PIN A0

// DHT sensor type
#define DHTTYPE DHT11

// Data storage variables
float temperature;
float humidity;
String lightCategory;
int lightLevel;

// LCD display object
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

// RTC object
RTC_DS1307 rtc;

// DHT sensor object
DHT dht(TEMP_HUMIDITY_PIN, DHTTYPE);

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Initialize LCD display
  lcd.begin(16, 2);
  // You can uncomment the next line if you want to turn on the backlight
  // analogWrite(10, 255); 

  // Initialize RTC
  Wire.begin();
  rtc.begin();
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

  // Initialize DHT sensor
  dht.begin();

  // Set pin mode
  pinMode(PHOTO_PIN, INPUT);
}

void loop() {
  // Read temperature and humidity
  readTempHumidity();

  // Read light level
  lightLevel = analogRead(PHOTO_PIN);

  if (lightLevel < 300) {
    lightCategory = "high";
  } 
  else if (lightLevel < 600) {
    lightCategory = "Medium";
  } 
  else {
    lightCategory = "low";
  }
  // Display data on LCD
   lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temperature);
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("H: ");
  lcd.print(humidity);
  lcd.print("%");

  lcd.setCursor(8, 0);
  lcd.print("L:");
  lcd.print(lightCategory);

  // Timestamp data
  DateTime now = rtc.now();
  String timestamp = String(now.year()) + "/" + String(now.month()) + "/" + String(now.day()) + " " + String(now.hour()) + ":" + String(now.minute()) + ":" + String(now.second());

  // Print data to serial monitor
  Serial.print(timestamp);
  Serial.print(",");
  Serial.print(temperature);
  Serial.print(",");
  Serial.print(humidity);
  Serial.print(",");
  Serial.println(lightLevel);

  // Wait for fixed interval
  delay(5000);
}

void readTempHumidity() {
  // Read temperature and humidity from DHT11 sensor
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();

  // Check if the readings failed and exit early (to try again).
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
}



