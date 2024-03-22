arduino-cli compile -b teensy:avr:teensy41:speed=150 -e --output-dir "bin\teensy41" sketch
arduino-cli compile -b teensy:avr:teensy36:speed=72 -e --output-dir "bin\teensy36" sketch
arduino-cli compile -b arduino:avr:mega -e --output-dir "bin\mega" sketch