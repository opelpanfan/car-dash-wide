/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase()
{

    __background.setPosition(0, 0, 1024, 600);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(1, 1, 1024, 600);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(1, -8);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_RACE_DASH_ID));

    indLeft.setXY(263, 32);
    indLeft.setBitmap(touchgfx::Bitmap(BITMAP_INDLEFT_ID));

    indRight.setXY(725, 32);
    indRight.setBitmap(touchgfx::Bitmap(BITMAP_INDRIGHT_ID));

    indHigh.setXY(394, 285);
    indHigh.setBitmap(touchgfx::Bitmap(BITMAP_INDHIGH_ID));

    indFuel.setXY(563, 213);
    indFuel.setBitmap(touchgfx::Bitmap(BITMAP_INDFUEL_ID));

    indOil.setXY(410, 344);
    indOil.setBitmap(touchgfx::Bitmap(BITMAP_INDOIL_ID));

    indBatt.setXY(425, 215);
    indBatt.setBitmap(touchgfx::Bitmap(BITMAP_INDBATT_ID));

    indPark.setXY(496, 186);
    indPark.setBitmap(touchgfx::Bitmap(BITMAP_INDPARK_ID));

    indDTC.setXY(495, 232);
    indDTC.setBitmap(touchgfx::Bitmap(BITMAP_INDDTC_ID));

    indECT.setXY(451, 377);
    indECT.setBitmap(touchgfx::Bitmap(BITMAP_INDECT_ID));

    indLow.setXY(452, 287);
    indLow.setBitmap(touchgfx::Bitmap(BITMAP_INDLOW_ID));

    map_value.setXY(942, 0);
    map_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    map_value.setLinespacing(0);
    Unicode::snprintf(map_valueBuffer, MAP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_1H44).getText());
    map_value.setWildcard(map_valueBuffer);
    map_value.resizeToCurrentText();
    map_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LQYM));

    map_label.setXY(889, 100);
    map_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    map_label.setLinespacing(0);
    Unicode::snprintf(map_labelBuffer, MAP_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_FXL2).getText());
    map_label.setWildcard(map_labelBuffer);
    map_label.resizeToCurrentText();
    map_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W2NZ));

    map_units.setXY(779, 100);
    map_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    map_units.setLinespacing(0);
    Unicode::snprintf(map_unitsBuffer, MAP_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_13X6).getText());
    map_units.setWildcard(map_unitsBuffer);
    map_units.resizeToCurrentText();
    map_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G76O));

    batt_value.setXY(942, 148);
    batt_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    batt_value.setLinespacing(0);
    Unicode::snprintf(batt_valueBuffer, BATT_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_TSMP).getText());
    batt_value.setWildcard(batt_valueBuffer);
    batt_value.resizeToCurrentText();
    batt_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_391O));

    batt_label.setXY(888, 247);
    batt_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    batt_label.setLinespacing(0);
    Unicode::snprintf(batt_labelBuffer, BATT_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_RUP7).getText());
    batt_label.setWildcard(batt_labelBuffer);
    batt_label.resizeToCurrentText();
    batt_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4QE0));

    batt_units.setXY(831, 247);
    batt_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    batt_units.setLinespacing(0);
    Unicode::snprintf(batt_unitsBuffer, BATT_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_F7I8).getText());
    batt_units.setWildcard(batt_unitsBuffer);
    batt_units.resizeToCurrentText();
    batt_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6YBF));

    tps_value.setXY(942, 299);
    tps_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tps_value.setLinespacing(0);
    Unicode::snprintf(tps_valueBuffer, TPS_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_AYOA).getText());
    tps_value.setWildcard(tps_valueBuffer);
    tps_value.resizeToCurrentText();
    tps_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MP7X));

    tps_label.setXY(888, 400);
    tps_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tps_label.setLinespacing(0);
    Unicode::snprintf(tps_labelBuffer, TPS_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_VMJT).getText());
    tps_label.setWildcard(tps_labelBuffer);
    tps_label.resizeToCurrentText();
    tps_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_L5WH));

    tps_units.setXY(813, 399);
    tps_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tps_units.setLinespacing(0);
    Unicode::snprintf(tps_unitsBuffer, TPS_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_L3HM).getText());
    tps_units.setWildcard(tps_unitsBuffer);
    tps_units.resizeToCurrentText();
    tps_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RPXE));

    lambda_value.setXY(942, 448);
    lambda_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    lambda_value.setLinespacing(0);
    Unicode::snprintf(lambda_valueBuffer, LAMBDA_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2H8W).getText());
    lambda_value.setWildcard(lambda_valueBuffer);
    lambda_value.resizeToCurrentText();
    lambda_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TLZY));

    lambda_label.setXY(888, 547);
    lambda_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    lambda_label.setLinespacing(0);
    Unicode::snprintf(lambda_labelBuffer, LAMBDA_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_JQKX).getText());
    lambda_label.setWildcard(lambda_labelBuffer);
    lambda_label.resizeToCurrentText();
    lambda_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RLOQ));

    lambda_units.setXY(699, 547);
    lambda_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    lambda_units.setLinespacing(0);
    Unicode::snprintf(lambda_unitsBuffer, LAMBDA_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_J843).getText());
    lambda_units.setWildcard(lambda_unitsBuffer);
    lambda_units.resizeToCurrentText();
    lambda_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KCKH));

    ect_value.setXY(31, 0);
    ect_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ect_value.setLinespacing(0);
    Unicode::snprintf(ect_valueBuffer, ECT_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_6GW0).getText());
    ect_value.setWildcard(ect_valueBuffer);
    ect_value.resizeToCurrentText();
    ect_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LD25));

    ect_label.setXY(34, 97);
    ect_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ect_label.setLinespacing(0);
    Unicode::snprintf(ect_labelBuffer, ECT_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_P413).getText());
    ect_label.setWildcard(ect_labelBuffer);
    ect_label.resizeToCurrentText();
    ect_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4T7D));

    ect_units.setXY(173, 97);
    ect_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ect_units.setLinespacing(0);
    Unicode::snprintf(ect_unitsBuffer, ECT_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_NFMY).getText());
    ect_units.setWildcard(ect_unitsBuffer);
    ect_units.resizeToCurrentText();
    ect_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ERKY));

    iat_value.setXY(31, 148);
    iat_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    iat_value.setLinespacing(0);
    Unicode::snprintf(iat_valueBuffer, IAT_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_H85L).getText());
    iat_value.setWildcard(iat_valueBuffer);
    iat_value.resizeToCurrentText();
    iat_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Z15X));

    iat_label.setXY(34, 246);
    iat_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    iat_label.setLinespacing(0);
    Unicode::snprintf(iat_labelBuffer, IAT_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_K94Y).getText());
    iat_label.setWildcard(iat_labelBuffer);
    iat_label.resizeToCurrentText();
    iat_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_S5UQ));

    iat_units.setXY(114, 246);
    iat_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    iat_units.setLinespacing(0);
    Unicode::snprintf(iat_unitsBuffer, IAT_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_S9CZ).getText());
    iat_units.setWildcard(iat_unitsBuffer);
    iat_units.resizeToCurrentText();
    iat_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XBZK));

    oilp_value.setXY(31, 299);
    oilp_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    oilp_value.setLinespacing(0);
    Unicode::snprintf(oilp_valueBuffer, OILP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_DHUY).getText());
    oilp_value.setWildcard(oilp_valueBuffer);
    oilp_value.resizeToCurrentText();
    oilp_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GFHB));

    oilp_label.setXY(34, 400);
    oilp_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    oilp_label.setLinespacing(0);
    Unicode::snprintf(oilp_labelBuffer, OILP_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_9VHS).getText());
    oilp_label.setWildcard(oilp_labelBuffer);
    oilp_label.resizeToCurrentText();
    oilp_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BVOP));

    oilp_units.setXY(137, 400);
    oilp_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    oilp_units.setLinespacing(0);
    Unicode::snprintf(oilp_unitsBuffer, OILP_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_9IGG).getText());
    oilp_units.setWildcard(oilp_unitsBuffer);
    oilp_units.resizeToCurrentText();
    oilp_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R7A4));

    fuelp_value.setXY(31, 448);
    fuelp_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    fuelp_value.setLinespacing(0);
    Unicode::snprintf(fuelp_valueBuffer, FUELP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_C87O).getText());
    fuelp_value.setWildcard(fuelp_valueBuffer);
    fuelp_value.resizeToCurrentText();
    fuelp_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0AFA));

    fuelp_label.setXY(34, 547);
    fuelp_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    fuelp_label.setLinespacing(0);
    Unicode::snprintf(fuelp_labelBuffer, FUELP_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_4VJ9).getText());
    fuelp_label.setWildcard(fuelp_labelBuffer);
    fuelp_label.resizeToCurrentText();
    fuelp_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MPLH));

    fuelp_units.setXY(247, 547);
    fuelp_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    fuelp_units.setLinespacing(0);
    Unicode::snprintf(fuelp_unitsBuffer, FUELP_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_L52U).getText());
    fuelp_units.setWildcard(fuelp_unitsBuffer);
    fuelp_units.resizeToCurrentText();
    fuelp_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_INAE));

    gauge1.setPosition(229, -1, 600, 600);
    gauge1.setCenter(300, 300);
    gauge1.setStartEndAngle(0, 240);
    gauge1.setRange(0, 8000);
    gauge1.setValue(0);
    gauge1.setNeedle(BITMAP_NEEDEL_ID, 16, 16);
    gauge1.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);

    add(__background);
    add(box1);
    add(image1);
    add(indLeft);
    add(indRight);
    add(indHigh);
    add(indFuel);
    add(indOil);
    add(indBatt);
    add(indPark);
    add(indDTC);
    add(indECT);
    add(indLow);
    add(map_value);
    add(map_label);
    add(map_units);
    add(batt_value);
    add(batt_label);
    add(batt_units);
    add(tps_value);
    add(tps_label);
    add(tps_units);
    add(lambda_value);
    add(lambda_label);
    add(lambda_units);
    add(ect_value);
    add(ect_label);
    add(ect_units);
    add(iat_value);
    add(iat_label);
    add(iat_units);
    add(oilp_value);
    add(oilp_label);
    add(oilp_units);
    add(fuelp_value);
    add(fuelp_label);
    add(fuelp_units);
    add(gauge1);
}

void Screen1ViewBase::setupScreen()
{

}
