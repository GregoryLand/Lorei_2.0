
#include "test.h"
// QT Stuff
#include "LoreiLib.h"
#include <QtWidgets>
#include <QtGui>
#include <qfont.h>

int main( int argc, char** argv )
{
	// Basic stuff
	QApplication mainApp( argc, argv );
	QMainWindow mainWindow;
	
	// Layouts
	QWidget     topLevelWidget;
	QVBoxLayout topLevelLayout;
	QHBoxLayout UpperBox;
	QHBoxLayout LowerBox;

	// UI Components
	QLabel enabledLabel( "Disabled" );
	QLabel lastRecognizedPhrase( "No Speech Yet" );
	QPushButton enableButton( "Enable/Disable" );
	
	// Setup Enable Button
	enableButton.setMinimumWidth( 260 );	
	enableButton.setMinimumHeight( 55 );
	QFont temp = enableButton.font();
	temp.setPointSize( 12 );
	temp.setStyleStrategy( QFont::StyleStrategy::PreferAntialias );
	enableButton.setFont( temp );

	// Setup EnableLabel
	QFont temp2 = enabledLabel.font();
	temp2.setPixelSize( 44 );
	temp2.setStyleStrategy( QFont::StyleStrategy::PreferAntialias );
    enabledLabel.setFont( temp2 );
	
	// Setup the Upper Ui
	UpperBox.addWidget( &enabledLabel, 0, Qt::AlignmentFlag::AlignVCenter | Qt::AlignmentFlag::AlignHCenter );
	UpperBox.addWidget( &enableButton, 0, Qt::AlignmentFlag::AlignVCenter | Qt::AlignmentFlag::AlignRight );

	// Setup Lower Ui
	LowerBox.addSpacing( 20 );
	LowerBox.addWidget( &lastRecognizedPhrase, 0, Qt::AlignmentFlag::AlignLeft );

	// Place the Upper and lower box inside the vertical box
	topLevelLayout.addLayout( &UpperBox, Qt::AlignmentFlag::AlignCenter );
	topLevelLayout.addLayout( &LowerBox, Qt::AlignmentFlag::AlignCenter );
	topLevelWidget.setLayout( &topLevelLayout );

	// Add the layouts to the window
	mainWindow.setCentralWidget( &topLevelWidget );
	mainWindow.setWindowTitle( QString::fromStdString(Lorei::ProgramName()) );
	mainWindow.setMinimumWidth( 490 );
	mainWindow.setMinimumHeight( 100 );
	
	// Display the window
	mainWindow.show();
	
	// Kick off the main loop
	return mainApp.exec();
}
