#include "TalkingBook.h"
#include <iostream>

int main() {
    Book b("George Orwell", "1st", "1949", 123456);
    VoiceRecording v("John Smith", 120, "2020");
    TalkingBook tb("J.K. Rowling", "2nd", "2001", 987654,
        "Emma Watson", 300, "2022", 5);

    b.showBook();
    cout << endl;

    v.showVoice();
    cout << endl;

    tb.showAll();

    return 0;
}