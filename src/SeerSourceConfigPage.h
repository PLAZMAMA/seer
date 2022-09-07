#pragma once

#include <QtWidgets/QWidget>
#include <QtCore/QString>
#include <QtCore/QStringList>

#include "ui_SeerSourceConfigPage.h"

class SeerSourceConfigPage : public QWidget, public Ui::SeerSourceConfigPage {

    Q_OBJECT

    public:
        explicit SeerSourceConfigPage (QWidget* parent = 0);
       ~SeerSourceConfigPage ();

        void                                setAlternateDirectories                 (const QStringList& alternateDirectories);
        QStringList                         alternateDirectories                    () const;

        void                                setIgnoreDirectories                    (const QStringList& ignoreDirectories);
        QStringList                         ignoreDirectories                       () const;

        void                                reset                                   ();

    protected slots:
        void                                handleAddAlternateButtonClicked         ();
        void                                handleUpAlternateButtonClicked          ();
        void                                handleDownAlternateButtonClicked        ();
        void                                handleDeleteAlternateButtonClicked      ();

        void                                handleAddIgnoreButtonClicked            ();
        void                                handleDeleteIgnoreButtonClicked         ();

    private:
};

