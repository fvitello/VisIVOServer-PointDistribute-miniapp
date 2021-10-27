/***************************************************************************
 *   Copyright (C) 2008 by Ugo Becciani   *
 *   ugo.becciani@oact.inaf.it   *
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
#ifndef __VSSTATISTICOP_H
#define __VSSTATISTICOP_H

#include "vstableop.h"

/**
	@author Ugo Becciani <ugo.becciani@oact.inaf.it>
*/
class VSStatisticOp: public VSTableOp
{
  static const unsigned int MAX_NUMBER_TO_REDUCE_ROW;
  static const unsigned int MIN_NUMBER_OF_ROW;
  float **m_fArray;
  float *m_maxValue;
  float *m_minValue;
  float *m_sumValue;
  float *m_averageValue;
  unsigned long long int **m_histogram;
  int m_numberOfHisto;

  unsigned int m_nOfCol;
  unsigned int m_nOfRow;
  int m_numberOfListParams;

  bool allocateArray();

public:
    VSStatisticOp();

    ~VSStatisticOp();
    void printHelp();
    bool getRange(unsigned int parElement, float &max, float &min,  float &avg, float &sum);//! gives the range max min average for the --list parameter. parElement=0 is the first element of the --list parameters.
    unsigned long long int **getHisto() {return m_histogram;};
    bool execute();
};

#endif
