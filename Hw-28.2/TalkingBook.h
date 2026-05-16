#pragma once
#include "Book.h"
#include "VoiceRecording.h"

class TalkingBook : public Book, public VoiceRecording {
private:
    int tapes;

public:
    TalkingBook(string a, string e, string pubDate, long isbn,
        string s, int d, string recDate,
        int t);

    void showAll() const;
};