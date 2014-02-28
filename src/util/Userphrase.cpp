/*
 * chewing-editor: Chewing userphrase editor
 * Copyright (C) 2014 ChangZhuo Chen

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "Userphrase.h"

Userphrase::Userphrase(std::string&& phrase, std::string&& bopomofo)
    :phrase_(phrase)
    ,bopomofo_(bopomofo)
    ,display_()
{
    display_ = QString("%1 (%2)")
        .arg(QString::fromStdString(phrase_))
        .arg(QString::fromStdString(bopomofo_));
}

Userphrase::Userphrase(QString&& phrase, QString&& bopomofo)
    :phrase_(phrase.toStdString())
    ,bopomofo_(bopomofo.toStdString())
    ,display_()
{
    display_ = QString("%1 (%2)").arg(phrase).arg(bopomofo);
}