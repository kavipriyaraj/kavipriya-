#include <iostream>
#include <string>

using namespace std;

// Structure to represent weather information
struct WeatherInfo {
    string location;
    string date;
    string weatherCondition;
    double temperature;
    double rainPossibility;
    double humidity;
};

// Function to display weather information
void displayWeatherInfo(const WeatherInfo& info) {
    cout << "Location: " << info.location << endl;
    cout << "Date: " << info.date << endl;
    cout << "Weather Condition: " << info.weatherCondition << endl;
    cout << "Temperature: " << info.temperature << "°C" << endl;
    cout << "Rain Possibility: " << info.rainPossibility << "%" << endl;
    cout << "Humidity: " << info.humidity << "%" << endl;
    cout << endl;
}

int main() {
    string name, collegeName;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your college name: ";
    getline(cin, collegeName);

    WeatherInfo today, yesterday, tomorrow, weekReport, monthWeather;

    // Get today's weather information
    today.location = "Your Location";
    today.date = "Today's Date";
    today.weatherCondition = "Cloudy";
    today.temperature = 25.5;
    today.rainPossibility = 20.0;
    today.humidity = 70.0;

    // Get yesterday's weather information
    yesterday.location = "Your Location";
    yesterday.date = "Yesterday's Date";
    yesterday.weatherCondition = "Rain";
    yesterday.temperature = 22.3;
    yesterday.rainPossibility = 80.0;
    yesterday.humidity = 75.0;

    // Get tomorrow's weather information
    tomorrow.location = "Your Location";
    tomorrow.date = "Tomorrow's Date";
    tomorrow.weatherCondition = "Thunderstorm";
    tomorrow.temperature = 27.8;
    tomorrow.rainPossibility = 60.0;
    tomorrow.humidity = 80.0;

    // Get weekly weather report
    weekReport.location = "Your Location";
    weekReport.date = "Weekly Report";
    weekReport.weatherCondition = "Mixed";
    weekReport.temperature = 24.0;
    weekReport.rainPossibility = 40.0;
    weekReport.humidity = 65.0;

    // Get monthly weather information
    monthWeather.location = "Your Location";
    monthWeather.date = "Monthly Report";
    monthWeather.weatherCondition = "Heatwaves";
    monthWeather.temperature = 30.0;
    monthWeather.rainPossibility = 10.0;
    monthWeather.humidity = 50.0;

    // Display weather information
    cout << endl;
    cout << "Weather App" << endl;
    cout << "Name: " << name << endl;
    cout << "College: " << collegeName << endl;
    cout << endl;

    cout << "Today's Weather" << endl;
    displayWeatherInfo(today);

    cout << "Yesterday's Weather" << endl;
    displayWeatherInfo(yesterday);

    cout << "Tomorrow's Weather" << endl;
    displayWeatherInfo(tomorrow);

    cout << "Weekly Weather Report" << endl;
    displayWeatherInfo(weekReport);

    cout << "Monthly Weather" << endl;
    displayWeatherInfo(monthWeather);

    return 0;
}