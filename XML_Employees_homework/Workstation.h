#pragma once

#include <string>
#include <ostream>
#include "pugixml.h"

class Workstation
{
    friend std::ostream& operator<<(std::ostream& os, const Workstation& workstation);

public:
    Workstation(int building, int floor, int desk);

    static Workstation* parseWorkstationNode(pugi::xml_node workstation);
    static void createWorkstationNode(pugi::xml_node& workstationNode, Workstation workstation);

    void setBuilding(int building);
    void setFloor(int floor);
    void setDesk(int desk);

    int getBuilding();
    int getFloor();
    int getDesk();

    ~Workstation();
private:
    int building;
    int floor;
    int desk;

};

