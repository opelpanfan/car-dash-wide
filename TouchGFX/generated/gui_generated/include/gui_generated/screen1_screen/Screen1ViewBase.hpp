/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/Gauge.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Image image1;
    touchgfx::Image indLeft;
    touchgfx::Image indRight;
    touchgfx::Image indHigh;
    touchgfx::Image indFuel;
    touchgfx::Image indOil;
    touchgfx::Image indBatt;
    touchgfx::Image indPark;
    touchgfx::Image indDTC;
    touchgfx::Image indECT;
    touchgfx::Image indLow;
    touchgfx::TextAreaWithOneWildcard map_value;
    touchgfx::TextAreaWithOneWildcard map_label;
    touchgfx::TextAreaWithOneWildcard map_units;
    touchgfx::TextAreaWithOneWildcard batt_value;
    touchgfx::TextAreaWithOneWildcard batt_label;
    touchgfx::TextAreaWithOneWildcard batt_units;
    touchgfx::TextAreaWithOneWildcard tps_value;
    touchgfx::TextAreaWithOneWildcard tps_label;
    touchgfx::TextAreaWithOneWildcard tps_units;
    touchgfx::TextAreaWithOneWildcard lambda_value;
    touchgfx::TextAreaWithOneWildcard lambda_label;
    touchgfx::TextAreaWithOneWildcard lambda_units;
    touchgfx::TextAreaWithOneWildcard ect_value;
    touchgfx::TextAreaWithOneWildcard ect_label;
    touchgfx::TextAreaWithOneWildcard ect_units;
    touchgfx::TextAreaWithOneWildcard iat_value;
    touchgfx::TextAreaWithOneWildcard iat_label;
    touchgfx::TextAreaWithOneWildcard iat_units;
    touchgfx::TextAreaWithOneWildcard oilp_value;
    touchgfx::TextAreaWithOneWildcard oilp_label;
    touchgfx::TextAreaWithOneWildcard oilp_units;
    touchgfx::TextAreaWithOneWildcard fuelp_value;
    touchgfx::TextAreaWithOneWildcard fuelp_label;
    touchgfx::TextAreaWithOneWildcard fuelp_units;
    touchgfx::Gauge gauge1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t MAP_VALUE_SIZE = 32;
    touchgfx::Unicode::UnicodeChar map_valueBuffer[MAP_VALUE_SIZE];
    static const uint16_t MAP_LABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar map_labelBuffer[MAP_LABEL_SIZE];
    static const uint16_t MAP_UNITS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar map_unitsBuffer[MAP_UNITS_SIZE];
    static const uint16_t BATT_VALUE_SIZE = 32;
    touchgfx::Unicode::UnicodeChar batt_valueBuffer[BATT_VALUE_SIZE];
    static const uint16_t BATT_LABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar batt_labelBuffer[BATT_LABEL_SIZE];
    static const uint16_t BATT_UNITS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar batt_unitsBuffer[BATT_UNITS_SIZE];
    static const uint16_t TPS_VALUE_SIZE = 32;
    touchgfx::Unicode::UnicodeChar tps_valueBuffer[TPS_VALUE_SIZE];
    static const uint16_t TPS_LABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar tps_labelBuffer[TPS_LABEL_SIZE];
    static const uint16_t TPS_UNITS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar tps_unitsBuffer[TPS_UNITS_SIZE];
    static const uint16_t LAMBDA_VALUE_SIZE = 32;
    touchgfx::Unicode::UnicodeChar lambda_valueBuffer[LAMBDA_VALUE_SIZE];
    static const uint16_t LAMBDA_LABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar lambda_labelBuffer[LAMBDA_LABEL_SIZE];
    static const uint16_t LAMBDA_UNITS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar lambda_unitsBuffer[LAMBDA_UNITS_SIZE];
    static const uint16_t ECT_VALUE_SIZE = 32;
    touchgfx::Unicode::UnicodeChar ect_valueBuffer[ECT_VALUE_SIZE];
    static const uint16_t ECT_LABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ect_labelBuffer[ECT_LABEL_SIZE];
    static const uint16_t ECT_UNITS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ect_unitsBuffer[ECT_UNITS_SIZE];
    static const uint16_t IAT_VALUE_SIZE = 32;
    touchgfx::Unicode::UnicodeChar iat_valueBuffer[IAT_VALUE_SIZE];
    static const uint16_t IAT_LABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar iat_labelBuffer[IAT_LABEL_SIZE];
    static const uint16_t IAT_UNITS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar iat_unitsBuffer[IAT_UNITS_SIZE];
    static const uint16_t OILP_VALUE_SIZE = 32;
    touchgfx::Unicode::UnicodeChar oilp_valueBuffer[OILP_VALUE_SIZE];
    static const uint16_t OILP_LABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar oilp_labelBuffer[OILP_LABEL_SIZE];
    static const uint16_t OILP_UNITS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar oilp_unitsBuffer[OILP_UNITS_SIZE];
    static const uint16_t FUELP_VALUE_SIZE = 32;
    touchgfx::Unicode::UnicodeChar fuelp_valueBuffer[FUELP_VALUE_SIZE];
    static const uint16_t FUELP_LABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar fuelp_labelBuffer[FUELP_LABEL_SIZE];
    static const uint16_t FUELP_UNITS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar fuelp_unitsBuffer[FUELP_UNITS_SIZE];

private:

};

#endif // SCREEN1VIEWBASE_HPP