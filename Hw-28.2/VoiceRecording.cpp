#include "VoiceRecording.h"
#include <iostream>

VoiceRecording::VoiceRecording(string s, int d, string date) {
    speaker = s;
    duration = d;
    recordingDate = date;
}

void VoiceRecording::showVoice() const {
    cout << "=== Voice Recording ===\n";
    cout << "Speaker: " << speaker << endl;
    cout << "Duration: " << duration << " min" << endl;
    cout << "Recording date: " << recordingDate << endl;
}