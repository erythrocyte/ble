#include "bleapp.hpp"

#include <QApplication>
#include <QWidget>

#include "bleFrame.hpp"
#include "ibleFrame.hpp"
#include "presenters/bleFramePresenter.hpp"
#include "widgets/presenters/fluidParamWidgetPresenter.hpp"

namespace ble {

BleApplication::BleApplication()
{
    Hypodermic::ContainerBuilder builder;

    builder.registerType<ble_gui::views::BleFrame>().as<ble_gui::views::IBleFrame>();
    builder.registerType<ble_gui::views::presenters::BleFramePresenter>();
    builder.registerType<ble_gui::widgets::FluidParamsVisualWidget>();
    builder.registerType<ble_gui::widgets::presenters::FluidParamWidgetPresenter>();

    m_container = builder.build();
}

BleApplication::~BleApplication()
{
}

void BleApplication::run(int argc, char** argv)
{
    QApplication qapp(argc, argv);

    auto mainPresenter = m_container->resolve<ble_gui::views::presenters::BleFramePresenter>();
    mainPresenter->run();

    qapp.exec();
}

}
