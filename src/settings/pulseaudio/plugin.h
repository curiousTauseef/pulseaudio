/****************************************************************************
 * This file is part of System Preferences.
 *
 * Copyright (c) 2011-2012 Pier Luigi Fiorini
 *
 * Author(s):
 *    Pier Luigi Fiorini <pierluigi.fiorini@gmail.com>
 *
 * $BEGIN_LICENSE:GPL$
 *
 * System Preferences is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * System Preferences is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with System Preferences.  If not, see <http://www.gnu.org/licenses/>.
 *
 * $END_LICENSE$
 ***************************************************************************/

#ifndef PLUGIN_H
#define PLUGIN_H

#include <VPreferencesModulePlugin>

class VPreferencesModule;

class SoundPlugin : public VPreferencesModulePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.maui.Vibe.VPreferencesModuleFactoryInterface" FILE "sound.json")
public:
    explicit SoundPlugin(QObject *parent = 0);

    virtual QStringList keys() const;
    virtual VPreferencesModule *create(const QString &key) const;
};

#endif // PLUGIN_H
