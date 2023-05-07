#include "flappybird.h"
#include "ui_flappybird.h"
#include <QGraphicsPixmapItem>

FlappyBird::FlappyBird(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FlappyBird)
{
    ui->setupUi(this);
    scene = new Scene(this);
    scene->setSceneRect(-250,-300,500,600);

    QGraphicsPixmapItem * pixItem = new QGraphicsPixmapItem(QPixmap(":/images/sky.png"));
    scene->addItem(pixItem);
    pixItem->setPos(QPointF(0,0) - QPointF(pixItem->boundingRect().width()/2,
                                            pixItem->boundingRect().height()/2));
    ui->graphicsView->setScene(scene);
    scene->addBird();
}

FlappyBird::~FlappyBird()
{
    delete ui;
}


void FlappyBird::on_startGameButton_clicked()
{
    scene->startGame();
}
