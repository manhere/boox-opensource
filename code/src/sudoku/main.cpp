/***********************************************************************
 *
 * Copyright (C) 2009 Graeme Gott <graeme@gottcode.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***********************************************************************/
/// Modified by bean, onyx-international.com



#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "onyx/base/base.h"
#include "onyx/screen/screen_proxy.h"
#include "onyx/sys/sys_status.h"
#include "simsu.h"
int main(int argc, char **argv) {
    using namespace onyx::simsu;
    sys::SysStatus::instance().setSystemBusy(false);
    QApplication app(argc, argv);
    app.setApplicationName("Simsu");
    app.setApplicationVersion("1.2.1");
    app.setOrganizationDomain("gottcode.org");
    app.setOrganizationName("GottCode");
    QTranslator translator;
    translator.load(":/simsu_" + QLocale::system().name());
    app.installTranslator(&translator);
    Simsu simsuwin;
    simsuwin.show();
    return app.exec();
}