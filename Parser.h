#ifndef PARSER_H
#define PARSER_H
#include<cstdlib>
#include<string>
#include<fstream>
#include<iostream>
#include<vector>
#include"Location.h"
using namespace std;
vector<Location*> locationParser(string filename, vector<Route*> routes){
    fstream locations(filename.c_str());
    string country;
    string city;
    string latitude;
    string longitude;
    vector<Location*> cities;
    Location* node;
    string header;
    getline(locations, header);
    while(getline(locations, country, ',')){
        getline(locations, city, ',');
        getline(locations, latitude, ',');
        getline(locations, longitude);
        node = new Location(country, city, atof(latitude.c_str()), atof(longitude.c_str()));
        vector<Route*>::iterator it = routes.begin();
        while(it != routes.end()){
            if((*it)->originS == node->capital){
                (*it)->origin = node;
                node->routes.push_back((*it));
            }
            else if((*it)->destinationS == node->capital){
                (*it)->destination = node;
            }
            ++it;
        }
        cities.push_back(node);
    }
    return cities;
}
vector<Route*> routeParser(string filename){
    fstream routes(filename.c_str());
    string originS;
    string destinationS;
    Location* origin = new Location();
    Location* destination = new Location();
    string type;
    string time;
    string cost;
    string note;
    vector<Route*> allRoutes;
    Route* edge;
    string header;
    getline(routes, header); 
    while(getline(routes, originS, ',')){
        getline(routes, destinationS, ',');
        getline(routes, type, ',');
        getline(routes, time, ',');
        getline(routes, cost, ',');
        getline(routes, note);
        edge = new Route(origin, destination, type, atof(time.c_str()), atof(cost.c_str()), note);
        edge->originS = originS;
        edge->destinationS = destinationS;
        allRoutes.push_back(edge);
    }
    return allRoutes;
}
#endif
