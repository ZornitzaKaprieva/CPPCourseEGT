#include "Workstation.h"

std::ostream& operator<<(std::ostream& os, const Workstation& workstation)
{

    os << "Building: " << workstation.building << " / Floor: " << workstation.floor << " / Desk: " << workstation.desk << std::endl;

    return os;
}

Workstation::Workstation(int building, int floor, int desk)
{
    setBuilding(building);
    setFloor(floor);
    setDesk(desk);
}

Workstation* Workstation::parseWorkstationNode(pugi::xml_node workstation)
{
    // read attributes values from Workstation node
    int building = workstation.attribute("Building").as_int();;
    int floor = workstation.attribute("Floor").as_int();;
    int desk = workstation.attribute("Desc").as_int();;

    // create Workstation object
    return new Workstation(building, floor, desk);
}

void Workstation::createWorkstationNode(pugi::xml_node& workstationNode, Workstation workstation)
{
    // add attributes to Workstation node
    workstationNode.append_attribute("Building") = workstation.getBuilding();
    workstationNode.append_attribute("Floor") = workstation.getFloor();
    workstationNode.append_attribute("Desk") = workstation.getDesk();
}

void Workstation::setBuilding(int building)
{
    this->building = building;
}

void Workstation::setFloor(int floor)
{
    this->floor = floor;
}

void Workstation::setDesk(int desk)
{
    this->desk = desk;
}

int Workstation::getBuilding()
{
    return this->building;
}

int Workstation::getFloor()
{
    return this->floor;
}

int Workstation::getDesk()
{
    return this->desk;
}

Workstation::~Workstation()
{
}
