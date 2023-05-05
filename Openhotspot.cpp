
#include <iostream>
#include <cstdlib>

int main() {
    // Open the command promt as administrator 


    system("netsh wlan set hostednetwork mode=allow ssid=wifi key=password403");
    
    system("netsh wlan start hostednetwork");

    return 0;
}
