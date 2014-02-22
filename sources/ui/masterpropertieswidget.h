/*
	Copyright 2006-2014 The QElectroTech Team
	This file is part of QElectroTech.

	QElectroTech is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	QElectroTech is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with QElectroTech.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MASTERPROPERTIESWIDGET_H
#define MASTERPROPERTIESWIDGET_H

#include <QWidget>
#include <qetgraphicsitem/element.h>

namespace Ui {
	class MasterPropertiesWidget;
}

class MasterPropertiesWidget : public QWidget
{
	Q_OBJECT

	public:
	explicit MasterPropertiesWidget(Element *elmt, QWidget *parent = 0);
	~MasterPropertiesWidget();

	private:
	void buildInterface();

	private slots:
	void on_link_button_clicked();
	void on_unlink_button_clicked();

	private:
	Ui::MasterPropertiesWidget *ui;
	Element *element_;
};

#endif // MASTERPROPERTIESWIDGET_H
