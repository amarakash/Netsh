
#include <iostream>
#include <cstdlib>

int main() {
    // Open the command promt
    system("cmd.exe");

    system("netsh wlan set hostednetwork mode=allow ssid=home key=password403");
    
    system("netsh wlan start hostednetwork");

    return 0;
}
