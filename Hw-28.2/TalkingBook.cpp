#include "TalkingBook.h"
#include <iostream>

TalkingBook::TalkingBook(string a, string e, string pubDate, long isbn,
    string s, int d, string recDate,
    int t)
    : Book(a, e, pubDate, isbn),
    VoiceRecording(s, d, recDate) {
    tapes = t;
}

void TalkingBook::showAll() const {
    cout << "\n=== Talking Book ===\n";
    showBook();
    showVoice();
    cout << "Tapes: " << tapes << endl;
}