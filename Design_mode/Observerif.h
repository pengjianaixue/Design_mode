#pragma once
#include "Subjectif.h"
class SubjectIF;
class ObserverIF
{
public:
	ObserverIF();
	virtual ~ObserverIF();
	void virtual update(SubjectIF *subjectinstance);

private:


};

ObserverIF::ObserverIF()
{

}

ObserverIF::~ObserverIF()
{

}

inline void ObserverIF::update(SubjectIF *subjectinstance)
{

}
