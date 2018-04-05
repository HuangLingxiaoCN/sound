// this head file defines neccessary constants and function prototypes for
// communication. In our function, <curl.h> library is used
#define COMM		// conditional compiling

#define URL "http://www.cc.puv.fi/~e1700702/php/sound.php"

// function prototypes
void sendToServer(double rms[]);
