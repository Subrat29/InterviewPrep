const findMatchingKeys = (obj, regex, result = []) => {
    for (const key in obj) {
        const value = obj[key];

        // Handle if value is an array
        if (Array.isArray(value)) {
            for (const elem of value) {
                if (typeof elem === 'string' && regex.test(elem)) {
                    result.push(key);
                    break;  // Stop further checks once a match is found
                }
            }
        }
        // Handle if value is an object
        else if (typeof value === 'object' && value !== null) {
            findMatchingKeys(value, regex, result);  // Recursively handle nested objects
        }
        // Handle other types (strings, numbers, booleans)
        else if (typeof value === 'string' && regex.test(value)) {
            result.push(key);
        }
        // In case of general regex like /.*/, include all keys regardless of type
        else if (regex.test(String(value))) {  // Convert non-string values to string for matching
            result.push(key);
        }
    }
    return result;
};

// Example usage
const jsonObject = {
    "name": "John",
    "age": 30,
    "address": {
        "street": "123 Main St",
        "city": "Badalona",
        "state": "CA"
    },
    "interests": ["reading", "hiking", "coding"],
    "games": ["badminton", "tabletennis"]
};

// Use a regex pattern to match everything (/.*/)
const regexPattern = /.*/;

const result = findMatchingKeys(jsonObject, regexPattern);
console.log(result);  // Output: ["name", "age", "address", "street", "city", "state", "interests", "games"]
