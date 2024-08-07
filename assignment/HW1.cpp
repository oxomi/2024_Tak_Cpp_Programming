#include <iostream>

using namespace std;

class RemoteController {
public:
    int volumeUP(int inputB) {
        return inputB;
    }
};


class AIRemoteController : public RemoteController { // Inheriance: An AIRemoteController is an RemoteController
public:
    void AIChat() {
        cout << "I am a AI Nerd Chat..." << endl;
    }
};

class TV {
private:
    RemoteController myRemoteController;
    int volume = 10;
public:
    void volumeUP(int up) {
     volume += myRemoteController.volumeUP(up);
    }
    int getVolume() {
        return volume;
    }
};

class smartTV : public TV { // Inheriance: A smartTV is a TV
private:
    AIRemoteController myAIRemoteController;
public:
    void Chat() {
        myAIRemoteController.AIChat();
    }
};

int main()
{
    TV myTV; 
    smartTV* mysmartTV = new smartTV(); 
    cout << "Hello PNUCSE Appliances!!" << endl;
    myTV.volumeUP(10);
    cout << myTV.getVolume() << endl;
    mysmartTV->Chat(); 
    return 0;
}