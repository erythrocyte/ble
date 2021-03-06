#ifndef BLEGUI_FRAMES_QVERTICALLABEL_H
#define BLEGUI_FRAMES_QVERTICALLABEL_H

#include <QLabel>

namespace ble_gui
{
    namespace frames
    {
        class QVerticalLabel : public QLabel
        {
            Q_OBJECT

        public:
            explicit QVerticalLabel(QWidget *parent = 0);
            explicit QVerticalLabel(const QString &text, QWidget *parent = 0);

        protected:
            void paintEvent(QPaintEvent *);
            QSize sizeHint() const;
            QSize minimumSizeHint() const;
            void setTextColor(QColor color);

        private:
            QColor _textColor = Qt::white;
        };
    } // namespace frames
} // namespace ble_gui

#endif // VERTICALLABEL_H