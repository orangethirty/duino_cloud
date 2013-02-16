duino_cloud
===========

Duino Cloud. Allows arduinos to communicate over the web using a serial connection.





##Dependencies

pyserial
arduino software
arduino board (developed with duemilanove)
1 LED
Flask 


####Install instructions

    pip install pyserial
    
    pip instal flask
    

Download arduino software from the <a href="http://arduino.cc">Arduino Homepage.</a>


##To run

Connect an LED to pin13 on the arduino.  This is used to denote activity on the arduino.

Open your arduino IDE and load the sketch called:
 
    serial.ino
    
The file will be in the directory (folder) you downloaded this repo to. Check your Downloads directory just in case.

Verify and compile the sketch. Upload it to the arduino.

Run the python file called main.py on the command prompt (or terminal if in Linux/Mac) by typing:

    python main.py
    
Copy or make note of the ip address that will appear on the command prompt. It should be something like this:

    http://127.0.0.1:5000
    
If you have anything running on port 5000 this will have issues. Change settings accordingly. 
If you have issued, refer to the flask documents <a href="http://flask.pocoo.org/">here.</a>

Open your web browser and type in the ip address. You should see the message "Hello World" appear on screen.


##Issues

This was developed using Windows 7.

The USB port settings on your machine could be different from mine.
If you have issues communicating with the arduino open the file named main.py.

Modify this line:

    SER = serial.Serial('COM3', 9600)
    
Change the part that says **COM3** to whatever your setting is.
Linux users use a different serial port naming scheme that Windows users.
    
