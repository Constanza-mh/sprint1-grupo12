{
  "version": 1,
  "author": "Detector de Ruido",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-esp32-devkit-v1", "id": "esp", "top": 0, "left": 0, "attrs": {} },
    { "type": "wokwi-potentiometer", "id": "pot1", "top": -120, "left": -150, "attrs": {} },
    { "type": "board-ssd1306", "id": "oled", "top": -120, "left": 120, "attrs": {} },
    { "type": "wokwi-rgb-led", "id": "rgb1", "top": 150, "left": -100, "attrs": {} },
    { "type": "wokwi-buzzer", "id": "bz1", "top": 150, "left": 100, "attrs": {} }
  ],
  "connections": [
    [ "esp:GND.1", "pot1:GND", "black", [ "v0" ] ],
    [ "esp:3V3", "pot1:VCC", "red", [ "v0" ] ],
    [ "esp:D34", "pot1:SIG", "green", [ "v0" ] ],

    [ "esp:GND.2", "oled:GND", "black", [ "v0" ] ],
    [ "esp:3V3", "oled:VCC", "red", [ "v0" ] ],
    [ "esp:D22", "oled:SCL", "yellow", [ "v0" ] ],
    [ "esp:D21", "oled:SDA", "blue", [ "v0" ] ],

    [ "esp:GND.3", "rgb1:COM", "black", [ "v0" ] ],
    [ "esp:D25", "rgb1:R", "red", [ "v0" ] ],
    [ "esp:D26", "rgb1:G", "green", [ "v0" ] ],
    [ "esp:D27", "rgb1:B", "blue", [ "v0" ] ],

    [ "esp:GND.4", "bz1:GND", "black", [ "v0" ] ],
    [ "esp:D14", "bz1:VCC", "orange", [ "v0" ] ]
  ]
}
