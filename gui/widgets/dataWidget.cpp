#include "dataWidget.hpp"

#include <QVBoxLayout>

namespace ble_gui::widgets {

DataWidget::DataWidget(QWidget* parent)
    : QWidget(parent)
{
}

void ble_gui::widgets::DataWidget::set_view_objects(std::shared_ptr<models::DataWidgetComponentsDto> components)
{
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setMargin(0);
    layout->setSpacing(0);
    // 	_modelDataWidget = modelData;

    // 	QVBoxLayout *layout = new QVBoxLayout(this);
    // 	layout->setMargin(0);
    // 	layout->setSpacing(0);

    // 	PhysData = new PhysDataWidget();
    // 	layout->addWidget(PhysData);

    // 	// ModelData = new ModelDataWidget();
    // 	layout->addWidget(_modelDataWidget.get());

    // 	SaturSolverSetts = new SaturSolverSettsWidget();
    // 	layout->addWidget(SaturSolverSetts);

    layout->addWidget(components->gridset_view.get());

    // auto ShockFrontSetts = new ShockFrontSettsWidget();
    // layout->addWidget(ShockFrontSetts);

    this->setLayout(layout);
}
}
