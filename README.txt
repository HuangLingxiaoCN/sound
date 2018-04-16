# -------------------------------------------- Sound Level Sensor ----------------------------------------
Sound level meter project made by HuangLingxiao. Feb.2018

This project uses a Raspberry Pi 3 Mode B as a sound sensor. A USB sound card
with microphone and a RJ45 cable are needed as peripheral. The application runs
periodically every second and take record from microphone at a sample rate of
16000 Hz. The sound is then calculated into 80 pieces of RMS value and displayed
as a bar chart on terminal screen. If communication is enabled (conditional
compilation), the sound will be re-calculated in to 8 pieces of Fast Level data
and sent out to a PHP server program.

List of Contents
1. Configuration instructions
2. Installation instructions
3. Operation instructions
4. File manifest
5. Copyright and license
6. Contact information

1. Configuration instructions
	Software:Putty
	Hardware:Raspberry Pi 3 Mode B, USB, Cat 6 Internet cable, Sound card, Microphone 
2. Installation instructions
	The installation of the program requires a screen and a HDMI cable connected to the screen. 
	First we need to run Linux system and then change the default configuration by entering some codes.
	Afterwards, only raspberry Pi and Ethernet cable should be connected to computer. Then the 
	installation is completed.
3. Operation instructions
	The user simply runs putty and enter IP address that is sent to user's computer(If the email is not sent,
	the user may check the information on the website www.cc.puv.fi/~gc/php/rasp.php). Then open appdev file
	which contains the source code. After that, operate application by typing "./sound.a"(remember to change 
	the Remote Character Set as UTF-8). It should shows many vertical bars on the screen. 
4. File manifest
	comm.c comm.h main.c makefile README.md README.txt screen.c screen.h sound.c sound.h test.wav
5. Copyright and license
	<one line to give the program's name and a brief idea of what it does.>
	Copyright (C) <year>  <name of author>
	        
	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
	                        
	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	                                        
	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
6. Contact information
	Email:e1700702@edu.vamk.fi


HuangLingxiao
Dept. of Information Technology
Vaasa University of Applied Sciences
Woffintie 30, 65100, Vaasa, Finland
page: www.cc.puv.fi/~e1700702
email:e1700702@edu.vamk.fi
