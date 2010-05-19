/*
 *  Date.h
 *  v1dtimi1
 *
 *  Created by Davíð Halldór Lúðvíksson on 5/18/10.
 *  Copyright 2010 Síminn hf. All rights reserved.
 *
 */

// Yfirlýsing á smiðum í .h skrá:
class Date
{
public:
    Date( ); // frumstillir t.d. á ógilda dagsetningu
    Date( const Date& rhs ); // copy constructor
    Date& operator = ( const Date& rhs );
    Date( int y, int m, int d );
	// TODO: bæta við fleiri smiðum eftir því sem þarf,
    // t.d. sem tekur inn ár, mánuð og dag
	
    // Þetta fall kemur smiðum ekkert við, en er notað
    // í dæmum hér á eftir – static fall sem skilar
    // dagsetningunni í dag:
    static Date Current( );
	void print();
	
private:
    int m_nYear;
    int m_nMonth;
    int m_nDay;
};