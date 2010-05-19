/*
 *  Date.cpp
 *  v1dtimi1
 *
 *  Created by Davíð Halldór Lúðvíksson on 5/18/10.
 *  Copyright 2010 Síminn hf. All rights reserved.
 *
 */
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date( const Date& rhs )
{
	// Hér þarf að smíða tilvik út frá gögnunum í rhs.
	// Munum að this tilvikið er spánýtt, þ.e. það er verið
	// að smíða það frá grunni, og inniheldur því engin gögn!
	// TODO: afrita gögn úr rhs yfir í klasabreytur!
	m_nYear = rhs.m_nYear;
	m_nMonth = rhs.m_nMonth;
	m_nDay = rhs.m_nDay;
}

Date& Date::operator = ( const Date& rhs )
{
	// Í þessu tilfelli er búið að smíða tilvikið sem this
	// bendir á, og það gæti innihaldið gögn sem þyrfti að 
	// skila/hreinsa upp.
	if ( &rhs != this )
	{
		// TODO: afrita memberbreytur!
		m_nYear = rhs.m_nYear;
		m_nMonth = rhs.m_nMonth;
		m_nDay = rhs.m_nDay;
	}
	
	return *this;
}

Date::Date( int y, int m, int d )
{
	m_nYear  = y;
	m_nMonth = m;
	m_nDay   = d;
}

Date::Date()
{
	cout << "hello world";
}

void Date::print()
{
	cout << m_nYear << endl;
	cout << m_nMonth << endl;
	cout << m_nDay << endl;
}