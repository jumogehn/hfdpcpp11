//===--- weather_data.hpp - -------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_OBSERVER_WEATHER_DATA_HPP_
#define _HFDP_CPP_OBSERVER_WEATHER_DATA_HPP_


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <list>
//Other libraries' .h files.
//Your project's .h files.
#include "observer.hpp"
#include "subject.hpp"

namespace headfirst {


  class WeatherData : public Subject {

    mutable std::list< Observer* > observers_;
    float temperature_;
    float humidity_;
    float pressure_;

    // Disable copy constructor and assignment operator
    WeatherData(const WeatherData&) = delete;
    void operator=(const WeatherData&) = delete;

  public:
    WeatherData();
    void RegisterObserver(Observer* o);
    void RemoveObserver(Observer* o);
    void NotifyObservers() const;
    void MeasurementsChanged();
    void SetMeasurements(float temperature, float humidity, float pressure);

    // other WeatherData methods here

    float GetTemperature() const;
    float GetHumidity() const;
    float GetPressure() const;
  };

} //namespace headfirst
#endif
