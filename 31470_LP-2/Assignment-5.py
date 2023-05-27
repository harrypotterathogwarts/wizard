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
        ["I am a bot created by Analytics Vidhya. you can call me crazy!",]
    ],
    [
        r"how are you ?",
        ["I'm doing goodnHow about You ?",]
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
        r"(.*) created ?",
        ["Raghav created me using Python's NLTK library ","top secret ;)",]
    ],
    
    [
        r"how (.*) health(.*)",
        ["I'm a computer program, so I'm always healthy ",]
    ],
    [
        r"quit",
        ["Bye take care. See you soon :) ","It was nice talking to you. See you soon :)",]
    ],
    [
        r"(.*)preventive measures(.*)",
        ["1.Masks 2.Vaccination 3.Social distancing 4.Lockdowns",]
    ],
    [
        r"(.*)physical (.*) psychological impacts(.*)",
        ["1.Fear 2.Death 3.Symptoms including fever, runny nose, severe headache, etc.",]
    ],
    [
        r"(.*)current (.*)situations(.*)",
        ["Nothing to be worried about, said health experts!",]
        
    ],
    
    [
        r"(.*)symptoms(.*)",
        ["Many people does not show any symptoms of COVID-19 ! High fever, soar throat, runny nose, breathing issues, body pain, etc.",]
        
    ],
    [
        r"Who(.*)risk (.*)",
        ["Childrens, old peoples, and the person with medical history of Diabetic, BP, respiratory issues are at higher risk :( ",]
        
    ],
    [
        r"(.*)Immunity boosters(.*)",
        ["Citrus fruits which are rich in vitamin C , turmeric milk/water , warm water at morning will boost your immunity!",]
        
    ],
    
    [
        r"(.*)excessive(.*)hand-sanitizer affect(.*)",
        ["Certainly not! But it may make your skin dry so you can apply moisturizer to prevent dryness of skin!",]
        
    ],
    [
        r"(.*) side-effects (.*) vaccination(.*)",
        ["THere are no evidence yet but for few days you may feel weakness that is the case with any vaccine you will take",]
        
    ],
]

def chat():
    print("Hi! I am a chatbot created by Akanksha Waghmare for your service")
    chat = Chat(pairs, reflections)
    chat.converse()

if __name__ == "__main__":
    chat()