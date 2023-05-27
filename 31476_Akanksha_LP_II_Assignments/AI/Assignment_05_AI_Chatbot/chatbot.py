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
        ["Hello %1, How are you today ?",]
    ],
    [
        r"hi|hey|hello",
        ["Hello", "Hey there",]
    ], 
    [
        r"what is your name ?",
        ["I am a bot created by Akanksha Waghmare. You can call me crazy!",]
    ],
    [
        r"how are you ?",
        ["I'm doing good and How about You ?",]
    ],
    [
        r"sorry (.*)",
        ["Its alright","Its OK, never mind",]
    ],
    [
        r"I am fine",
        ["Great to hear that, How can I help you?",]
    ],
    [
        r"i'm (.*) doing good",
        ["Nice to hear that","How can I help you?:)",]
    ],
    [
        r"(.*) age?",
        ["I'm a computer program dude. Seriously you are asking me this?",]
    ],
    [
        r"(.*) placement(.*) starts(.*)",
        ["First wek of August or may be in the last week of July!",]
    ],
    [
        r"(.*)subjects(.*)",
        ["1.DBMS 2.DSA 3.OOP 4.CN 5.OS",]
    ],
    [
        r"okay",
        ["Do you have any question for me?",]
    ],
    [
        r"(.*)documents(.*)",
        ["1.Resume 2. PAN Card 3. Passport 4.Certificates mentioned in your resume",]
    ],
    [
        r"(.*) prepare(.*)",
        ["There are various platforms you can refer like 1. GFG 2. Leetcode 3.InterviewBit also for core subjects you can refer to JavatPoints!",]
    ],
    [
        r"(.*)dream company(.*)",
        ["Companies having CTC greater than 20LPA are considered as dream companies!",]
    ],
    [
        r"(.*)criteria(.*)dream(.*)",
        ["You should have decent percentile in ELQ and Automata in AMCAT , CGPA>=8 ",]
    ],
    [
        r"(.*)Name(.*)dream(.*)",
        ["1.Bloomberg 2. Druva 3.Phonepe 4.Adobe",]
    ],
    [
        r"quit",
        ["Bye take care. See you soon :) ","It was nice talking to you. See you soon :)"]
    ],
]

def chat():
    print("Hi! I am a chatbot created by Akanksha Waghmare for your service")
    chat = Chat(pairs, reflections)
    chat.converse()

if __name__ == "__main__":
    chat()