#!/bin/bash
PROYECTO=$1
PLACA=${2:-"arduino:avr:uno"} # Usa Arduino Uno por defecto

echo "Compilando $PROYECTO en la memoria RAM (/tmp)..."
arduino-cli compile -b $PLACA --build-path /tmp/arduino_builds/$PROYECTO $PROYECTO
