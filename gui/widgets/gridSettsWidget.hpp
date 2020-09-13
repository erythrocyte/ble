#ifndef BLEGUI_WIDGETS_GRIDSETTSWIDGET_H_
#define BLEGUI_WIDGETS_GRIDSETTSWIDGET_H_

#include <iostream>
#include <memory>

#include <QWidget>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QComboBox>

namespace ble_gui
{
    namespace widgets
    {
        class GridSettsWidget : public QWidget
        {
            Q_OBJECT
        public:
            GridSettsWidget(QWidget *parent = nullptr);
            ~GridSettsWidget() {}

            QDoubleSpinBox *Length;
            QSpinBox *CellCount;
            QComboBox *GridType;
        };
    } // namespace widgets
} // namespace ble_gui

#endif