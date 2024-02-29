#include <stdio.h>

int main() {
    char sent[300], rev_sent[300], term_char;
    int sent_pos = 0, voc_length = 0, rev_sent_pos = 0, voc_pos = 0;
    
    printf("Enter a sentence: ");
    sent[sent_pos] = getchar();
    while ((sent[sent_pos] != '.') && (sent[sent_pos] != '!') && (sent[sent_pos] != '?')) {
        sent_pos++;
        sent[sent_pos] = getchar();
    }
    term_char = sent[sent_pos];
    sent_pos -= 1;
    
    while (sent_pos >= 0) {
        if (sent[sent_pos] == ' ') {
            while (voc_pos < voc_length) {
                rev_sent[rev_sent_pos] = sent[sent_pos + voc_pos + 1];
                voc_pos++;
                rev_sent_pos++;
            }
            rev_sent[rev_sent_pos] = ' ';
            voc_pos = 0;
            voc_length = 0;
            sent_pos--;
            rev_sent_pos++;
        }
        else {
            sent_pos--;
            voc_length++;
        }
    }
    
    
    
    sent_pos = 0;
    printf("Reversal of sentence: ");
    while (sent_pos < rev_sent_pos) {
        putchar(rev_sent[sent_pos]);
        sent_pos++;
    } 
    for (sent_pos = 0;sent[sent_pos]!=' '; sent_pos++) putchar(sent[sent_pos]);
    putchar(term_char);
    
    return 0;
}
