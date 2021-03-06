/**
 ******************************************************************************
 * @file       picocgadgetfactory.h
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2014
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup PicoCGadgetPlugin PicoC Gadget Plugin
 * @{
 * @brief A gadget to edit PicoC scripts
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef PICOCGADGETFACTORY_H_
#define PICOCGADGETFACTORY_H_

#include <coreplugin/iuavgadgetfactory.h>
#include "picoc_global.h"

namespace Core {
class IUAVGadget;
class IUAVGadgetFactory;
}

using namespace Core;

class PICOC_EXPORT PicoCGadgetFactory : public IUAVGadgetFactory
{
    Q_OBJECT
public:
    PicoCGadgetFactory(QObject *parent = 0);
    ~PicoCGadgetFactory();

    IUAVGadget *createGadget(QWidget *parent);
};

#endif // PICOCGADGETFACTORY_H_
