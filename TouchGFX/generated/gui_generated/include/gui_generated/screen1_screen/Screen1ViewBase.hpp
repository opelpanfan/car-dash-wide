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
    touchgfx::Box Background;
    touchgfx::Box alert_L4;
    touchgfx::Box alert_L3;
    touchgfx::Box alert_L2;
    touchgfx::Box alert_L1;
    touchgfx::Box alert_R4;
    touchgfx::Box alert_R3;
    touchgfx::Box alert_R2;
    touchgfx::Box alert_R1;
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
    touchgfx::TextAreaWithOneWildcard value_4;
    touchgfx::TextAreaWithOneWildcard label_4;
    touchgfx::TextAreaWithOneWildcard unit_4;
    touchgfx::TextAreaWithOneWildcard value_5;
    touchgfx::TextAreaWithOneWildcard label_5;
    touchgfx::TextAreaWithOneWildcard unit_5;
    touchgfx::TextAreaWithOneWildcard value_6;
    touchgfx::TextAreaWithOneWildcard label_6;
    touchgfx::TextAreaWithOneWildcard unit_6;
    touchgfx::TextAreaWithOneWildcard value_7;
    touchgfx::TextAreaWithOneWildcard label_7;
    touchgfx::TextAreaWithOneWildcard unit_7;
    touchgfx::TextAreaWithOneWildcard value_0;
    touchgfx::TextAreaWithOneWildcard label_0;
    touchgfx::TextAreaWithOneWildcard unit_0;
    touchgfx::TextAreaWithOneWildcard value_1;
    touchgfx::TextAreaWithOneWildcard label_1;
    touchgfx::TextAreaWithOneWildcard unit_1;
    touchgfx::TextAreaWithOneWildcard value_2;
    touchgfx::TextAreaWithOneWildcard label_2;
    touchgfx::TextAreaWithOneWildcard unit_2;
    touchgfx::TextAreaWithOneWildcard value_3;
    touchgfx::TextAreaWithOneWildcard label_3;
    touchgfx::TextAreaWithOneWildcard unit_3;
    touchgfx::Gauge gauge1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t VALUE_4_SIZE = 32;
    touchgfx::Unicode::UnicodeChar value_4Buffer[VALUE_4_SIZE];
    static const uint16_t LABEL_4_SIZE = 32;
    touchgfx::Unicode::UnicodeChar label_4Buffer[LABEL_4_SIZE];
    static const uint16_t UNIT_4_SIZE = 32;
    touchgfx::Unicode::UnicodeChar unit_4Buffer[UNIT_4_SIZE];
    static const uint16_t VALUE_5_SIZE = 32;
    touchgfx::Unicode::UnicodeChar value_5Buffer[VALUE_5_SIZE];
    static const uint16_t LABEL_5_SIZE = 32;
    touchgfx::Unicode::UnicodeChar label_5Buffer[LABEL_5_SIZE];
    static const uint16_t UNIT_5_SIZE = 32;
    touchgfx::Unicode::UnicodeChar unit_5Buffer[UNIT_5_SIZE];
    static const uint16_t VALUE_6_SIZE = 32;
    touchgfx::Unicode::UnicodeChar value_6Buffer[VALUE_6_SIZE];
    static const uint16_t LABEL_6_SIZE = 32;
    touchgfx::Unicode::UnicodeChar label_6Buffer[LABEL_6_SIZE];
    static const uint16_t UNIT_6_SIZE = 32;
    touchgfx::Unicode::UnicodeChar unit_6Buffer[UNIT_6_SIZE];
    static const uint16_t VALUE_7_SIZE = 32;
    touchgfx::Unicode::UnicodeChar value_7Buffer[VALUE_7_SIZE];
    static const uint16_t LABEL_7_SIZE = 32;
    touchgfx::Unicode::UnicodeChar label_7Buffer[LABEL_7_SIZE];
    static const uint16_t UNIT_7_SIZE = 32;
    touchgfx::Unicode::UnicodeChar unit_7Buffer[UNIT_7_SIZE];
    static const uint16_t VALUE_0_SIZE = 32;
    touchgfx::Unicode::UnicodeChar value_0Buffer[VALUE_0_SIZE];
    static const uint16_t LABEL_0_SIZE = 32;
    touchgfx::Unicode::UnicodeChar label_0Buffer[LABEL_0_SIZE];
    static const uint16_t UNIT_0_SIZE = 32;
    touchgfx::Unicode::UnicodeChar unit_0Buffer[UNIT_0_SIZE];
    static const uint16_t VALUE_1_SIZE = 32;
    touchgfx::Unicode::UnicodeChar value_1Buffer[VALUE_1_SIZE];
    static const uint16_t LABEL_1_SIZE = 32;
    touchgfx::Unicode::UnicodeChar label_1Buffer[LABEL_1_SIZE];
    static const uint16_t UNIT_1_SIZE = 32;
    touchgfx::Unicode::UnicodeChar unit_1Buffer[UNIT_1_SIZE];
    static const uint16_t VALUE_2_SIZE = 32;
    touchgfx::Unicode::UnicodeChar value_2Buffer[VALUE_2_SIZE];
    static const uint16_t LABEL_2_SIZE = 32;
    touchgfx::Unicode::UnicodeChar label_2Buffer[LABEL_2_SIZE];
    static const uint16_t UNIT_2_SIZE = 32;
    touchgfx::Unicode::UnicodeChar unit_2Buffer[UNIT_2_SIZE];
    static const uint16_t VALUE_3_SIZE = 32;
    touchgfx::Unicode::UnicodeChar value_3Buffer[VALUE_3_SIZE];
    static const uint16_t LABEL_3_SIZE = 32;
    touchgfx::Unicode::UnicodeChar label_3Buffer[LABEL_3_SIZE];
    static const uint16_t UNIT_3_SIZE = 32;
    touchgfx::Unicode::UnicodeChar unit_3Buffer[UNIT_3_SIZE];

private:

};

#endif // SCREEN1VIEWBASE_HPP
