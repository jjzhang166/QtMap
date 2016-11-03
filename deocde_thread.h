#ifndef DEOCDE_THREAD_H
#define DEOCDE_THREAD_H

#include <QObject>

class Deocde_Thread : public QObject
{
    Q_OBJECT
public:
    explicit Deocde_Thread(QObject *parent = 0);

signals:

public slots:
};

#endif // DEOCDE_THREAD_H