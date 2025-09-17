def find_itinerary(tickets):
    start = None
    reverse_map = {v: k for k, v in tickets.items()}
    for src in tickets.keys():
        if src not in reverse_map:
            start = src
            break
    result = []
    while start in tickets:
        result.append((start, tickets[start]))
        start = tickets[start]
    return result

if __name__ == "__main__":
    tickets = {
        "Chennai": "Banglore",
        "Bombay": "Delhi",
        "Goa": "Chennai",
        "Delhi": "Goa"
    }
    print(find_itinerary(tickets))
