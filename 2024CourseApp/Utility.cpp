#include "Utility.h"
#include <string>

string Utility::toString(Department department)
{
	switch (department)
	{
	case Department::ComputerScience:
		return "��T�u�{�t";
	case Department::ElectricalEngineering:
		return "�q���u�{�t";
	case Department::ElectronicEngineering:
		return "�q�l�u�{�t";
	case Department::InformationManagement:
		return "��T�޲z�t";
	default:
		return "";
	}
}

string Utility::toString(ClassName className)
{
	switch (className)
	{
	case ClassName::_1A:
		return "�@��";
	case ClassName::_1B:
		return "�@�A";
	case ClassName::_2A:
		return "�G��";
	case ClassName::_2B:
		return "�G�A";
	case ClassName::_3A:
		return "�T��";
	case ClassName::_3B:
		return "�T�A";
	case ClassName::_4A:
		return "�|��";
	case ClassName::_4B:
		return "�|�A";
	default:
		return "";
	}
}