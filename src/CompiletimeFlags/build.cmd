arduino-cli compile -b arduino:avr:mega -e --output-dir "bin\mega" --build-property "build.extra_flags=-Dabc" sketch

@SET PROCESSORTTYPE=-D__IMXRT1062__
arduino-cli compile -b teensy:avr:teensy41:speed=150 -e --output-dir "bin\teensy41" --build-property "build.flags.defs=-Dabc %PROCESSORTTYPE%" sketch

@SET PROCESSORTTYPE=-D__MK66FX1M0__
arduino-cli compile -b teensy:avr:teensy36:speed=72 -e --output-dir "bin\teensy36" --build-property "build.flags.defs=-Dabc %PROCESSORTTYPE%" sketch