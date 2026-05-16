#pragma once
#include <string>
using namespace std;

class VoiceRecording {
protected:
    string speaker;
    int duration;
    string recordingDate;

public:
    VoiceRecording(string s, int d, string date);

    void showVoice() const;
};