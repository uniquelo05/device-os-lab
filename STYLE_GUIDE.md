This is the beginning of the style guide for the Particle Device OS repository.
It's presently just an outline, and will be fleshed out over time.

Note that it will be easy to find violations of these guidelines in the existing codebase.
Over time, these will be rectified as automated checks for style consistency are introduced.

## Formatting

- indentation at 4 spaces
- braces on the next line for function bodies
- single statement bodies (`if`/`for` etc..) should always have braces, even though they are not strictly required. This is to reduce errors due to missing braces for multi-line bodies when the code is extended. 
- functions/methods should generally be smaller than 40 lines and avoid nesting deeper than 6 levels

### Example: Proper Brace Usage

**Good:**
```cpp
if (condition)
{
    doSomething();
}
```

**Avoid:**
```cpp
if (condition) doSomething();
```

### Example: Function Formatting

**Good:**
```cpp
void calculateSum(int a, int b)
{
    int result = a + b;
    Serial.println(result);
}
```

**Note:** Function opening brace should be on the next line.

## doc-comments
- using doxygen format
- focus on the intent of the function/class - the view from the outside
- implementation details can be given inline in the code itself.

### Function Comments
- Use `@brief` to provide a concise description of the function.
- Document all parameters with `@param`.
- Specify the return value with `@return`.
- Use proper grammar and punctuation.

## classes
- names using CamelCase
- data members first and then any constructors
- private/protected methods appear after public methods
- use `override` for virtual functions in derived classes

### Example: Class Structure

```cpp
class DeviceManager
{
private:
    int deviceId;
    String deviceName;

public:
    DeviceManager(int id, String name);
    
    void initialize();
    int getDeviceId() const;
    
protected:
    void internalUpdate();
};
```

## Variable Naming Conventions

To ensure consistency and readability, follow these conventions when naming variables:

### General Guidelines
- Use descriptive and meaningful names.
- Avoid single-character names, except for loop counters (e.g., `i`, `j`).
- Use camelCase for variables and functions (e.g., `userName`, `calculateSum`).
- Use PascalCase for class names (e.g., `UserManager`, `DataProcessor`).
- Use UPPER_SNAKE_CASE for constants (e.g., `MAX_CONNECTIONS`, `DEFAULT_TIMEOUT`).

### Specific Rules
- Prefix boolean variables with `is`, `has`, or `can` (e.g., `isActive`, `hasPermission`, `canExecute`).
- Use singular names for single items (e.g., `user`, `item`) and plural names for collections (e.g., `users`, `items`).
- Avoid abbreviations unless they are widely understood (e.g., `id` for identifier).

### Examples

**Good:**
```cpp
int userAge;
bool isLoggedIn;
std::vector<std::string> userNames;
const int MAX_RETRIES = 5;
```

**Avoid:**
```cpp
int a;
bool flag;
std::vector<std::string> vec;
const int maxRetries = 5;
```

## Code Examples
- Ensure all code examples are properly formatted and include necessary headers.
- Follow the existing style for indentation and comments.

Code should be written to be legible, comprehensible and testable. Writing unit tests in tandem with writing the product code can help highlight design issues early on, leading to early refactoring and a cleaner design.

The code guidelines [here](http://stroustrup.com/JSF-AV-rules.pdf) offer some good advice and we will in time be writing up which of these rules are applicale or not applicable to this codebase.

### Documentation Guidelines
- Ensure all troubleshooting guides are clear and concise.
- Include code examples where applicable.
- Follow the existing style for headings and formatting.

### Memory Optimization Tips

- **Avoid Dynamic Memory Allocation**: Use static or stack memory whenever possible to reduce fragmentation.
- **Minimize Global Variables**: Excessive use of global variables can lead to higher memory usage and harder debugging.
- **Use Smaller Data Types**: Choose the smallest data type that can hold your data (e.g., `uint8_t` instead of `int` for small values).
- **Free Unused Memory**: Ensure that dynamically allocated memory is freed when no longer needed.
- **Optimize Data Structures**: Use memory-efficient data structures like bitfields or unions where applicable.
- **Profile Memory Usage**: Regularly profile your application to identify memory bottlenecks and optimize accordingly.

## Commit Message Style

- Use the present tense ("Fix bug" not "Fixed bug").
- Use the imperative mood ("Add feature" not "Adds feature").
- Limit the subject line to 72 characters.
- Include references to issues or pull requests when applicable.
