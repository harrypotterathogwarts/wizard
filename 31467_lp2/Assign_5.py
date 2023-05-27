import nltk
from nltk.chat.util import Chat, reflections

reflections = {
  "i am"       : "you are",
  "i was"      : "you were",
  "i"          : "you",
  "i'm"        : "you are",
  "i'd"        : "you would",
  "i've"       : "you have",
  "i'll"       : "you will",
  "my"         : "your",
  "you are"    : "I am",
  "you were"   : "I was",
  "you've"     : "I have",
  "you'll"     : "I will",
  "your"       : "my",
  "yours"      : "mine",
  "you"        : "me",
  "me"         : "you"
}

pairs = [
    [
        r"my name is (.*)",
        ["Hello %1, How are you feeling today ?",]
    ],
    [
        r"hi|hey|hello",
        ["Hello", "Hey there",]
    ], 
    [
        r"what is your name ?",
        ["I had already mentioned above that I am HEALTHBOT and I am here to ensure your WELLNESS!!!",]
    ],
    [
        r"Do you have knowledge about Hockey?",
        ["Yes! Hockey is my favorite sport! Ask me anything you want to know :)",]
    ],
    [
        r"How many(.*) a team? ",
        ["There are total 16 palyers,including the on field players and substitutes.",]
    ],
    [
        r"How (.*) onfield players?",
        ["There are 11 players who play onfield and other 5 are substitutes.",]
    ],
    [
        r"Is hockey(.*) in olympics?",
        ["Hockey was removed from olympics in 1924 Paris. The sport was again featured on the program at Amsterdam in 1928 and has been an Olympic sport ever since. Women's hockey became a fixture on the Olympic program in Moscow in 1980.",]
    ],
    [
        r"Has India ever won gold in hockey at olympics?",
        ["The Indian hockey men's team has won eight Olympic gold medals in all, six of them in a row (from 1928-1956) and added two more at Tokyo 1964 and Moscow 1980.",]
    ],
    [
        r"Who is the best player in the history of Hockey?",
        ["It was none other than Dhyan Chand! He was the father of Hockey!! He has scored 570 goals in his lifespan",]
    ],
    [
        r"When was Women's Hockey introduced in olympics?",
        ["The first women's Olympic field hockey competition was introduced by the IOC at the 1980 Summer Olympics.",]
    ],
    [
        r"Has Indian women's Hockey team won a medal in olympics?",
        ["No! But India had secured fourth place 2 times since 1980. It was in 1980 and in 2020",]
    ],
    [
        r"(.*)other sport?",
        ["Yes! I have good knowledge of football"]
    ],
   
    [
        r"(.*) (sports|game) ?",
        ["I'm a very big fan of Football and Hockey",]
    ],
    [
        r"who (.*) sportsperson ?",
        ["Messy","Ronaldo","Roony"]
    ],
    [
        r"quit",
        ["Bye take care. See you soon :) ","It was nice talking to you. See you soon :)"]
    ],
    [
        r"(.*)good",
        ["Great!"]
    ]
]

def chat():
    print("Hi! I am a ChatBOT created by Mehek Sirwani. Ask me anything about Hockey!!")
    chat = Chat(pairs, reflections)
    chat.converse()

if __name__ == "__main__":
    chat()