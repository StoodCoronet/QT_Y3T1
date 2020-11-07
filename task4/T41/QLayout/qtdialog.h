#ifndef QTDIALOG_H
#define QTDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class QTDialog; }
QT_END_NAMESPACE

class QTDialog : public QDialog
{
    Q_OBJECT

public:
    QTDialog(QWidget *parent = nullptr);
    ~QTDialog();

private:
    Ui::QTDialog *ui;
};
#endif // QTDIALOG_H
