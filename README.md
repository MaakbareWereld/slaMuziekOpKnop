# slaMuziekOpKnop
Arduino Leonardo and AppleScript code to automate saving a song to "my Music" in Spotify with a press on a big button next to your computer. Requires Mac OS, Spotify, Evernote and IFTTT.

The basic idea is to have a big button next to your workstation/laptop that you can bang on when you hear a great song in spotify that you want to save to "my music", but you do not want to leave the program that you are currently working in. This script uses both Spotify and Evernote, and an IFTTT recipe, so you should have account with all three before proceeding.

I made this device (service?) for my monthly column in dutch newspaper "The Volkskrant", which can be read here: http://www.volkskrant.nl/wetenschap/zo-vergeet-je-nooit-meer-iets-tussentijds-op-te-slaan~a4230408/

## step 1: Arduino
Make a physical "big button". I used an old nightlight, but anything will do, as long as it will briefly connect two wires that when pressing the button. Connect the two wires to pins 2 and GND on an Arduino Leonardo. (Will not work on an Arduino UNO because we use the "connect as keyboard" feature of the Leonardo). In my version, I hid the Arduino underneath the button in a nice carton box. 
Use the Arduino IDE to upload the file buttonPressKeyBoardShortcutLEONARDO_ONLY.ino to the Arduino.

## step2: make a service that saves the currently playing song to Evernote
Open Automater, select File -> New. Click on 'Service" and "Choose". Drag the "run an Applescript" from the centre column to the right. In the dropdown next to "Service receives" select "no input". Than replace the code (starting with "on run", ending with "end run") with the code in the file saveSpotifySong2EvernoteService. Save the file in a location you can find again. Install the file by double clicking on it. 

## step 3: link Arduino to service
Open System preferences -> keyboard and click the shortcuts tab. Select services and search your service (most likely it is the last one in the list). Select it, click "add shortcut" and press cmnd-F5. 

## step 4: make an empty notebook called "songs" in Evernote
After creating the notebook, sync your Evernote.

## step 5: IFTTT to tie it all together
Active this IFTTT recipe: https://ifttt.com/recipes/421121-save-songs-added-to-evernote-notebook-to-spotify. 
