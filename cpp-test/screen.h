#ifndef SCREEN_H
#define SCREEN_H

#include <QWidget>
#include <QTimer>
#include <QLabel>
#include <QSystemTrayIcon>  // Make sure this is included

class ScreenManager : public QWidget {
    Q_OBJECT
public:
    ScreenManager(QWidget *parent = nullptr);
    ~ScreenManager();
private slots:
    void toggleVisibility();
    void updateCountdown();
private:
    QTimer* timer;  // Main timer for triggering visibility
    QTimer* countdownTimer;  // Timer for updating the countdown display
    QLabel* countdownLabel;  // Label to display the remaining time
    QSystemTrayIcon* trayIcon;  // Declare the tray icon here
    int remainingTime;  // Time remaining in seconds
    const int intervalMs = 600000;  // 10 minutes in milliseconds
    const int visibleDurationMs = 10000;  // 10 seconds in milliseconds
};

#endif // SCREEN_H
