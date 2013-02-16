import serial
from flask import (Flask, url_for, render_template,
                   redirect)

app = Flask(__name__)

#COM3 is windows port nomenclature.
SER = serial.Serial('COM3', 9600)    


@app.route('/', methods=['GET'])
def index():
    serial = SER.readline()
    return serial
    

if __name__ == "__main__":
    app.run()
