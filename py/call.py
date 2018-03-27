import serial
import time
import sys
#650256524

numero = sys.argv[1]
texte_sms = "fdfdfdfdfdf"

def sendat1(cmd):
    if cmd == 'res' : modem1.write('Z'); return
    if cmd == 'out' : modem1.write(chr(26)); return
    if (cmd == 'sms'):
        modem1.write(texte_sms)
    elif (cmd == 'appel'):
        modem1.write('ATD' + numero + ";"+'\r\n')
        time.sleep(1)
    else:
	modem1.write('AT+'+cmd+'\r')
    time.sleep(5)
    obu = str(modem1.inWaiting())
    msg = modem1.read(32798)
    print(obu+':\n'+msg)
    return

if __name__ == "__main__":
    modem1 = serial.Serial("/dev/ttyUSB0",baudrate=115200,timeout=0,rtscts=0,xonxoff=0)
    if modem1.inWaiting()>0: modem1.flushInput()
    sendat1('CPIN=8822')
#    sendat1('CMGF=1')
#    sendat1('CMGS=' + '\"' + numero + '\"')
#    sendat1('sms')
    sendat1('appel')
#    sendat1('out')
#    modem1.close()

