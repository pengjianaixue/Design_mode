#pragma once
#include "Subjectif.h"
#include "Observerif.h"
#include <list>
class DataSender :public SubjectIF
{
public:
	DataSender(){};
	~DataSender() {};
	bool Attach(ObserverIF *observerob) 
	{
		Observerlist.push_back(observerob);
		return true;
	};
	bool Detach(ObserverIF *observerob)
	{
		auto item = Observerlist.begin();
		for (; item!= Observerlist.end(); item++)
		{
			if ((*item) == observerob)
			{
				Observerlist.erase(item);
				return true;
			}
		}
		return false;
		
	};
	void notify()
	{
		for (auto &Observeritem: Observerlist)
		{
			Observeritem->update(dynamic_cast<SubjectIF*>(this));
		}
	};
	inline std::string GetNotifyMessage() const
	{
		return std::string("Data have Coming");
	}

private:
	std::list<ObserverIF*> Observerlist;
	



};

