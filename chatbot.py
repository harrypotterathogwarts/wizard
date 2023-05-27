# Function to process user input and generate a response
def process_input(user_input):
    user_input = user_input.lower()
    
    # Define the bot's rules and corresponding responses
    rules = {
        "hello": "Hello! How can I assist you today?",
        "goodbye": "Goodbye! Have a great day!",
        "how are you": "I'm good, thank you! How about you?",
        "fine": "That's great to hear!",
        "help": "Sure, I'm here to help. What do you need assistance with?",
        "default": "I'm sorry, I didn't understand. Can you please rephrase?"
    }
    
    # Check if the user input matches any of the defined rules
    for pattern in rules:
        if pattern in user_input:
            return rules[pattern]
    
    # If no matching rule is found, return the default response
    return rules["default"]

# Main conversation loop
print("Bot: Hello! How can I assist you today?")

while True:
    user_input = input("User: ")
    response = process_input(user_input)
    print("Bot: " + response)
    
    if user_input.lower() == "goodbye":
        break

