#ifndef FLAPPYBIRD_H
#define FLAPPYBIRD_H

#include <QWidget>
#include "scene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class FlappyBird; }
QT_END_NAMESPACE

class FlappyBird : public QWidget
{
    Q_OBJECT

public:
    FlappyBird(QWidget *parent = nullptr);
    ~FlappyBird();

private slots:
    void on_startGameButton_clicked();

private:
    Ui::FlappyBird *ui;

    Scene * scene;
};
#endif // FLAPPYBIRD_H
