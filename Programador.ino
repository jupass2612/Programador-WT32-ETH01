/**#include <Arduino.h>

void setup() {
    Serial.begin(115200); // Comunicación con PC
    Serial.swap(); // Usa GPIO13 (RX) y GPIO15 (TX)
}

void loop() {
    // Enviar datos entre PC y WT32-ETH01
    if (Serial.available()) {
        Serial.write(Serial.read());
    }
}
**/
#include <Arduino.h>

void setup() {
    Serial.begin(115200);  // Inicializa el puerto serie a 115200 baudios
    Serial.println("WT32-ETH01: Prueba de carga exitosa");
}

void loop() {
    Serial.println("El WT32-ETH01 está funcionando correctamente...");
    delay(1000);  // Espera 1 segundo antes de repetir el mensaje
}
