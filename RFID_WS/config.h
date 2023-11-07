#ifndef CONFIG_H
#define CONFIG_H

namespace config
{
    static const int serialBaud = 115200;
    // Enter SSID
    static const char *ssid = "Tec-IoT";
    // // Enter Password
    static const char *password = "spotless.magnetic.bridge";
    // Enter server adress
    static const char *websockets_connection_string = "wss://15yzzg78gk.execute-api.us-east-1.amazonaws.com/localDevelopment/";

    // const char *ssid = "";     // Enter SSID
    // const char *password = ""; // Enter Password

};

#endif
