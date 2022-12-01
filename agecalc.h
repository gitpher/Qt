#ifndef AGECALC_H
#define AGECALC_H

#include <QObject>

class AgeCalc : public QObject
{
    Q_OBJECT
public:
    explicit AgeCalc(QObject *parent = nullptr);

    // Getter & Setter for m_age
    int age() const;
    void setAge(int newAge);

    // Getter & Setter for m_name
    const QString &name() const;
    void setName(const QString &newName);

    int dogYears();
    int catYears();
    int humanYears();

signals:

private:
    int m_age;
    QString m_name;

};

#endif // AGECALC_H
