import nltk
from nltk.chat.util import Chat, reflections

pairs=[
    #
    [
        r"my name is (.)",
        ["Hello %1, How are you"]
    ],
    # Or expression
    [
        r"Hi|Hello|Hey there|Hola",
        ["Hello my name is Smile!happy to see you!"]
    ],
    [
        r"what is your name ?",
        ["I am a bot created by Heisenbergwhat. you can call me crazy!",]
    ],
    [
        r"how are you ?",
        ["I'm doing good How about You ?",]
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
        r"I (.*) good",
        ["Nice to hear that","How can I help you?:)",]
    ],
    [
        r"(.*) age?",
        ["I'm a computer program dude Seriously you are asking me this?",]
    ],
    [
        r"what (.*) want ?",
        ["Make me an offer I can't refuse",]
    ],
    [
        r"(.*) created ?",
        ["Raghav created me using Python's NLTK library ","top secret ;)",]
    ],
    [
        r"(.*) (branches|city) ?",
        ['Pune, Mumbai,Aurangabad,Nagpur',]
    ],
    [
        r"work (.*)?",
        ["We are a foundation which serves for well being of orphans as well as elderly people. Come join with us for a noble cause and bring smile on every face."]
    ],
    [
        r"contribute (.*)?",
        ["you can contribute for our organization by using any of these ways: 1.Net Banking 2.UPI 3.By visiting any of our branches.",]
    ],
    [
        r"how (.*) health(.*)",
        ["I'm a computer program, so I'm always healthy ",]
    ],
    [
        r"(.*) (About) ?",
        ["You can visit our website www.xyz.smile/foundation.com to know more about us.",]
    ],
    [
        r"who (.*) founder ?",
        ["Mrs.Sharda","Mrs.Mrunal","Mrs.Indira"]
    ],
    [
        r"How can I get to volunteer as a member?",
        ["You can contact any of our volunteers. We will schedule a meeting if we find you as an optimal candidate."]
    ],
    [
        r"quit",
        ["Thank you for using our intelligence services"]
    ],
    

]

def chat():
    print("Hey there! I am Smile at your service")
    chat = Chat(pairs)
    chat.converse()

if __name__== "__main__":
    chat()