#include <DHT.h>

#define DHTPIN 2 // define the pin where the DHT11 sensor is connected
#define DHTTYPE DHT11 // define the type of DHT sensor used

DHT dht(DHTPIN, DHTTYPE); // create a DHT object

void setup() {
  Serial.begin(9600); // initialize the serial communication
  dht.begin(); // initialize the DHT sensor
}

void loop() {
  delay(2000); // wait for 2 seconds for the sensor to stabilize
  float temperature = dht.readTemperature(); // read the temperature value from the sensor
  float humidity = dht.readHumidity(); // read the humidity value from the sensor

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C  Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  delay(5000); // wait for 5 seconds before reading again
}

