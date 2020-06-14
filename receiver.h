#ifndef RECEIVER_H
#define RECEIVER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLabel;
class QUdpSocket;
QT_END_NAMESPACE

class Receiver : public QWidget
{
    Q_OBJECT
public:
    explicit Receiver(QWidget *parent = nullptr);

private slots:
    void processPendingDatagrams();

private:
    QLabel *statusLabel = nullptr;
    QUdpSocket *udpSocket = nullptr;
};

#endif // RECEIVER_H
