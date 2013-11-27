// -*- Mode:C++ -*-

/************************************************************************\
*                                                                        *
* This file is part of AVANGO.                                           *
*                                                                        *
* Copyright 1997 - 2010 Fraunhofer-Gesellschaft zur Foerderung der       *
* angewandten Forschung (FhG), Munich, Germany.                          *
*                                                                        *
* AVANGO is free software: you can redistribute it and/or modify         *
* it under the terms of the GNU Lesser General Public License as         *
* published by the Free Software Foundation, version 3.                  *
*                                                                        *
* AVANGO is distributed in the hope that it will be useful,              *
* but WITHOUT ANY WARRANTY without even the implied warranty of         *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the           *
* GNU General Public License for more details.                           *
*                                                                        *
* You should have received a copy of the GNU Lesser General Public       *
* License along with AVANGO. If not, see <http://www.gnu.org/licenses/>. *
*                                                                        *
\************************************************************************/

#if !defined(AVANGO_TOOLS_CONFIG_H)
#define AVANGO_TOOLS_CONFIG_H

/**
 * \file
 * \ingroup av_tools
 */

#if _AVANGO_TOOLS_DEBUG
#define AVANGO_TOOLS_DEBUG 1
#else
#undef AVANGO_TOOLS_DEBUG
#endif

#if _AVANGO_TOOLS_GUA_SUPPORT
#define AVANGO_TOOLS_GUA_SUPPORT 1
#else
#undef AVANGO_TOOLS_GUA_SUPPORT
#endif

#define AVANGO_TOOLS_VERSION_MAJOR _AVANGO_TOOLS_VERSION_MAJOR
#define AVANGO_TOOLS_VERSION_MINOR _AVANGO_TOOLS_VERSION_MINOR
#define AVANGO_TOOLS_VERSION_MAINT _AVANGO_TOOLS_VERSION_MAINT

#endif // #if !defined(AVANGO_TOOLS_CONFIG_H)