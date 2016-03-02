#ifndef SIMON_H
#define SIMON_H

#include <QObject>

class Simon : public QObject
{
    Q_OBJECT
public:
    explicit Simon(QObject *parent = 0);

signals:

public slots:
    void Hello();
};

#endif // SIMON_H
