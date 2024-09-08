#include <QtTest/QtTest>
#include "../MyApp02/calculator.h"  // Include the header file of the class you are testing

class TestCalculator : public QObject {
    Q_OBJECT

private slots:
    void testAddition();
    void testSubtraction();
};

void TestCalculator::testAddition() {
    Calculator calc;
    QCOMPARE(calc.add(2, 3), 5); // Check if 2 + 3 equals 5
}

void TestCalculator::testSubtraction() {
    Calculator calc;
    QCOMPARE(calc.subtract(5, 3), 2); // Check if 5 - 3 equals 2
}

QTEST_MAIN(TestCalculator)
#include "tst_test_calculator.moc"
