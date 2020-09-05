#ifndef BLE_GUI_DATAWIDGET_H_
#define BLE_GUI_DATAWIDGET_H_

#include <iostream>
#include <memory>

#include <QWidget>

#include "modelDataWidget.hpp"

namespace ble_gui {

class DataWidget : public QWidget {
	Q_OBJECT
	
	public:
		DataWidget(QWidget* parent = nullptr);
		~DataWidget() {}

		ModelDataWidget* ModelData;
};

}

#endif
