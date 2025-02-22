#ifndef PATIENTWINDOW_H
#define PATIENTWINDOW_H

#include <QDialog>

namespace Ui {
class PatientWindow;
}

class PatientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PatientWindow(QWidget *parent = nullptr);
    ~PatientWindow();

private slots:
    void on_btnBookAppointment_clicked();

    void on_btnFillMedicalRecord_clicked();

    void on_btnMessageHealthcareProvider_clicked();

    void on_btnPastAppointments_clicked();

private:
    Ui::PatientWindow *ui;
};

#endif // PATIENTWINDOW_H
