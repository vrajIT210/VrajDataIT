import requests

def get_random_joke():
    url = "https://official-joke-api.appspot.com/random_joke"
    
    try:
        response = requests.get(url)
        response.raise_for_status()  # Raise an exception for HTTP errors
        
        joke = response.json()
        print("\nHere's a random joke for you:\n")
        print(f"{joke['setup']}")
        print(f"{joke['punchline']}")
        
    except requests.RequestException as e:
        print("An error occurred while fetching the joke:")
        print(e)

if __name__ == "__main__":
    get_random_joke()
