import requests

def fetch_joke():
    api_url = "https://official-joke-api.appspot.com/random_joke"

    try:
        response = requests.get(api_url)
        response.raise_for_status()  # Check for HTTP errors

        data = response.json()
        print("\nHere's a random joke:\n")
        print(f"{data['setup']}")
        print(f"{data['punchline']}")
    
    except requests.RequestException as error:
        print("Error fetching joke:")
        print(error)

if __name__ == "__main__":
    fetch_joke()
