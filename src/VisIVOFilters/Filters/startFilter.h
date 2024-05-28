/***************************************************************************
 *   Copyright (C) 2008 by Marco Comparato   *
 *   marco.comparato@oact.inaf.it   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef STARTFILTER_H
#define STARTFILTER_H

/**
        @author Marco Comparato <marco.comparato@oact.inaf.it>
 */

#include <map>
#include <string>

#ifdef VSMPI
#include "mpi.h" 
#endif

class startFilter
{
  public:
    
    const char* m_opName;

#ifdef VSMPI
    MPI_Comm m_VS_COMM;
    startFilter(std::map<std::string,std::string> appParameters,MPI_Comm newcom=MPI_COMM_WORLD);
#else
   startFilter(std::map<std::string,std::string> appParameters);
#endif
};

#endif
