#pragma once
#include "Observerif.h"
#include <iostream>
#include "Subjectif.h"
class DataRecvier : public ObserverIF
{
public:
	DataRecvier(std::string ClassInfo):m_strClassInfo(ClassInfo){};
	~DataRecvier(){};
	void update(SubjectIF *subjectinstance)
	{
		std::cout << m_strClassInfo << ":"<< subjectinstance->GetNotifyMessage() << std::endl;
	};
private:
	std::string m_strClassInfo;

};

