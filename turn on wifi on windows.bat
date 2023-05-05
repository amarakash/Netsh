@echo off

echo .......welcome.........

echo ......
echo ......
echo ......

pause

netsh wlan set hostednetwork mode=allow ssid=wifi key=mkmkmkmk

echo press any key to execute 2nd command
pause


netsh wlan start hostednetwork
pause