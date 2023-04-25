import serial
import time

# Replace '/dev/ttyACM0' with the appropriate serial port name for your Arduino on your device
arduino_port = '/dev/cu.usbmodem101'
baud_rate = 9600

output_file = 'arduino_data.txt'

def main():
    # Connect to the Arduino
    ser = serial.Serial(arduino_port, baud_rate)

    # Open the output file
    with open(output_file, 'a') as f:
        try:
            while True:
                # Read a line from the Arduino
                data = ser.readline().decode('utf-8').rstrip()

                # Write the data to the output file
                f.write(data + '\n')
                f.flush()

                # Print the data to the console 
                print(data)
        except KeyboardInterrupt:
            print('Data logging stopped.')

if __name__ == '__main__':
    main()
# enjoy your data!