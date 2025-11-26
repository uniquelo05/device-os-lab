// Add a logging category for power consumption
#define LOG_CATEGORY_POWER_CONSUMPTION "power_consumption"

// Existing logging categories
#define LOG_CATEGORY_ERROR "error"
#define LOG_CATEGORY_WARNING "warning"
#define LOG_CATEGORY_INFO "info"
#define LOG_CATEGORY_DEBUG "debug"

// Macro to log power consumption messages
#define LOG_POWER_CONSUMPTION(message) LogMessage(LOG_CATEGORY_POWER_CONSUMPTION, message)

// Existing logging function
void LogMessage(const char* category, const char* message) {
    // ...implementation for logging messages...
}