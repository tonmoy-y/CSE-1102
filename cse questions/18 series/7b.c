#include<stdio.h> 
#include<string.h> 

int main() {
    char st[100][20] = {
        "apple", "banana", "cat", "dog", "elephant",
        "flower", "giraffe", "hello", "island", "jungle",
        "kangaroo", "lion", "monkey", "nature", "ocean",
        "penguin", "queen", "rabbit", "sun", "tiger",
        "umbrella", "violet", "water", "xylophone", "yellow",
        "zebra", "airport", "bird", "car", "dolphin",
        "eleven", "fire", "guitar", "horse", "ice cream",
        "jacket", "kite", "lemon", "mountain", "noodle",
        "orange", "piano", "queen", "rain", "strawberry",
        "tulip", "unicorn", "violin", "waterfall", "xylophone",
        "yacht", "zeppelin", "apple", "banana", "cat",
        "dog", "elephant", "flower", "giraffe", "hello",
        "island", "jungle", "kangaroo", "lion", "monkey",
        "nature", "ocean", "penguin", "queen", "rabbit",
        "sun", "tiger", "umbrella", "violet", "water",
        "xylophone", "yellow", "zebra", "airport", "bird",
        "car", "dolphin", "eleven", "fire", "guitar",
        "horse", "ice cream", "jacket", "kite", "lemon",
        "mountain", "noodle", "orange", "piano", "queen",
        "rain", "strawberry", "tulip", "unicorn", "violin", 
    };

    char s[20];
    scanf("%s", s);
    for(int i=0; i<100; i++) {
    if(strcmp(s,st[i]) == 0) {
    printf("login ok\n");
    break;
    }
    }
    //  for (int i = 0; i < 100; i++) {
    //     printf("%s\n", st[i]);
    // }
    return 0;
}