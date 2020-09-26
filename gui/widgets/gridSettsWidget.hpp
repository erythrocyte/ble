#ifndef BLEGUI_WIDGETS_GRIDSETTSWIDGET_H_
#define BLEGUI_WIDGETS_GRIDSETTSWIDGET_H_

#include <iostream>
#include <memory>

#include <QComboBox>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QWidget>

#include "uis/ui_gridSettsWidget.hpp"

namespace ble_gui {
namespace widgets {
    class GridSettsWidget : public QWidget, public UI::GridSetts {
        Q_OBJECT
    public:
        GridSettsWidget(QWidget* parent = nullptr);
        ~GridSettsWidget() { delete ui; }

        double getLenght();
        int getCellCount();

    private:
        UI::GridSetts* ui;
    };
} // namespace widgets
} // namespace ble_gui

#endif