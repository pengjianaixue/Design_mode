#pragma once
#include <string>
class ObserverIF;
class SubjectIF
{
public:
	SubjectIF(){};
	~SubjectIF() {};
	std::string  virtual GetNotifyMessage() const;
private:

};
inline std::string SubjectIF::GetNotifyMessage() const
{
	return std::string();
}
