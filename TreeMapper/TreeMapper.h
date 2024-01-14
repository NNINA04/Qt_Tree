#pragma once

class Custom_View
    : public QGraphicsView
{
    Q_OBJECT;
public:
    using QGraphicsView::QGraphicsView;

    void wheelEvent(QWheelEvent* event)
    {
        setTransformationAnchor(AnchorUnderMouse);
        setDragMode(ScrollHandDrag);

        double scaleFactor = 1.5;
        if (event->angleDelta().y() > 0) // up Wheel
        {
            scale(scaleFactor, scaleFactor);
        }
        else if (event->angleDelta().y() < 0) //down Wheel
        {
            scale(1 / scaleFactor, 1 / scaleFactor);
        }
    }
};

class TreeMapper
    : public Custom_View
{
    Q_OBJECT;
    QGraphicsScene* _scene;
    QTextEdit* _text;
public:
    TreeMapper(QWidget* parent = nullptr)
        : Custom_View(parent)
    {
        this->setGeometry(500, 500, 500, 500);

        _scene = new QGraphicsScene(0, 0, 10000, 10000);
        _text = new QTextEdit(this);


        //_scene->addItem();

        this->setScene(_scene);
    }
};
