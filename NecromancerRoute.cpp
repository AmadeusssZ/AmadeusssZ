#include <iostream>
using namespace std;
#include "NecromancerDeathRoute.cpp"
#include "NecromancerRedemptionRoute.cpp"
void NecromancerRoute(){
    int NecromancerRouteChoice;
    cout<<"You've made up your mind? Splendid."<<endl;
    cout<<"You decide to become a Necromancer from the depths of Hades."<<endl;
    cout<<"You've been stuck here for what seems like an eternity."<<endl;
    cout<<"Your flesh has rotted and all that remains is a skeleton and a robe you've fashioned out of cobwebs."<<endl;
    cout<<"Why are you still alive?"<<endl;
    cout<<"Hades hasn't been kind to you."<<endl;
    cout<<"From the moment you've landed in this wretched place you've been plagued with illusions."<<endl;
    cout<<"You look down upon your hands, knowing that escape is nigh on impossible."<<endl;
    cout<<"You can't remember why you're here, it's been too long."<<endl;
    cout<<"Your old sword lies in the corner, you're no longer able to lift it."<<endl;
    cout<<"You yearn for something different, for this to end."<<endl;
    cout<<"Suddenly you see the door in front of you open."<<endl;
    cout<<"Your boney jaw gapes open as the first thing you've seen move in an eternity."<<endl;
    cout<<"Out of the gate emerges a being made of pure light."<<endl;
    cout<<"Is it, an angel?"<<endl;
    cout<<"???: Fear not. For I have come to offer you an ultimatum once more."<<endl;
    cout<<"Once more? From when? You don't have time to question it, you simply listen."<<endl;
    cout<<"???: I cannot elaborate. You know what you want."<<endl;
    cout<<"Do you?"<<endl;
    cout<<"1. Redemption"<<endl;
    cout<<"2. The Sweet Release of Death"<<endl;
    cin>>NecromancerRouteChoice;
    switch (NecromancerRouteChoice){
        case 1:
            NecromancerRedemptionRoute();
            break;
        case 2:
            NecromancerDeathRoute();
            break;
    }
}