#include <iostream>
#include "SmallAngel.cpp"
#include "Lucifer.cpp"
#include "Azrael.cpp"
using namespace std;
void DemonPowerRoute(){
    int EndHimOne;
    int EndHimTwo;
    int EndHimThree;
    int ViewYourStatsOne;
    int ViewYourStatsTwo;
    int ViewYourStatsThree;
    int ContractChoice;
    int KillAzrael;
    float aba;
    cout<<"So it is power that you seek..."<<endl;
    cout<<"Very well then, go forth and receive that which you desire."<<endl;
    cout<<"You are barely given a second to think before you feel your entire body black out."<<endl;
    cout<<"It feels as if you are ascending, going towards the sky at speeds unachievable by any mortal being."<<endl;
    cout<<"Your body begins to burn, you don't belong here."<<endl;
    cout<<"You feel the piercing gazes of millions on your red skin."<<endl;
    cout<<"You can feel the judgement as millions of unknown beings stare at your horns."<<endl;
    cout<<"You began to think, could you be in?"<<endl;
    cout<<"No, there's no doubt."<<endl;
    cout<<"You're in heaven."<<endl;
    cout<<"A demon's worst nightmare, and now you're living in it."<<endl;
    cout<<"The place reeks, it smells of honey and rain dew."<<endl;
    cout<<"It's too bright, the trumpets are too loud."<<endl;
    cout<<"You see people frolicking and smiling, an absolutely disgusting display of happiness."<<endl;
    cout<<"It isn't long before you are approached by an angel."<<endl;
    cout<<"Before they can even get out a word you are engulfed by rage and strike."<<endl;
    cout<<"Now tell me, are you ready to kill for what you believe?"<<endl;
    cout<<"1. End him"<<endl;
    cout<<"2. End him"<<endl;
    cin>>EndHimOne;
    switch (EndHimOne){
        case 1:
            SmallAngel();
            break;
        case 2:
            SmallAngel();
            break;
    }
    cout<<"It is over. The angel's blood stains the ground."<<endl;
    cout<<"It's crimson color is a stark contrast to the golden roads of heaven."<<endl;
    cout<<"You hear the trumpets grow silent as the angels corpse lays there rotting."<<endl;
    cout<<"A large smile creeps onto your face as you begin to think of how much stronger you can get being here."<<endl;
    cout<<"You can hardly control your excitement, you can smell the blood of the innocent."<<endl;
    cout<<"All that you care about now is ending the rest of them, whatever it takes."<<endl;
    cout<<"You feel power surging through your devilish veins."<<endl;
    cout<<"I suppose this is what game developers would call a level up?"<<endl;
    cout<<"*Your stats increase*"<<endl;
    cout<<"Would you like to view them?"<<endl;
    cout<<"1. Yes"<<endl;
    cout<<"2. No"<<endl;
    cin>>ViewYourStatsOne;
    switch (ViewYourStatsOne){
        case 1:
            cout<<"Hit Points = 150"<<endl;
            cout<<"Attack = 15"<<endl;
            cout<<"Defense = 15"<<endl;
            cout<<"Agility = 6"<<endl;
            cout<<"Magic Attack = 15"<<endl;
            cout<<"Magic Defense = 15"<<endl;
            cout<<"Magic Total = 5"<<endl;
            break;
        case 2:
            cout<<"Very well then."<<endl;
            break;
    }
    cout<<"You hear the rumbling footsteps of a being unknown to you in the distance.";
    cout<<"You clench your fists in anticipation, drool streams down your jaw."<<endl;
    cout<<"Your bloodlust is insatiable, the very thought of cutting down another angel feels you with absolute glee."<<endl;
    cout<<"The Fallen Angel Lucifer now stands before you, towering over."<<endl;
    cout<<"Are you prepared?"<<endl;
    cout<<"1. End his life"<<endl;
    cout<<"2. Exterminate him."<<endl;
    cin>>EndHimTwo;
        switch (EndHimTwo){
        case 1:
            Lucifer();
            break;
        case 2:
            Lucifer();
            break;
    }
    cout<<"That makes two."<<endl;
    cout<<"Two angels lie at your feet, your jaws drip blood onto the golden pathway."<<endl;
    cout<<"You can hardly contain your bloodlust as you sprint down the golden roads."<<endl;
    cout<<"You slash down anything in your way with a newfound power."<<endl;
    cout<<"Perhaps killing a fallen angel has given you a power you were unaware you had?"<<endl;
    cout<<"*Your stats increase*"<<endl;
    cout<<"Would you like to view them?"<<endl;
    cout<<"1. Yes"<<endl;
    cout<<"2. No"<<endl;    
        cin>>ViewYourStatsTwo;
    switch (ViewYourStatsTwo){
        case 1:
            cout<<"Hit Points = 200"<<endl;
            cout<<"Attack = 20"<<endl;
            cout<<"Defense = 20"<<endl;
            cout<<"Agility = 7"<<endl;
            cout<<"Magic Attack = 20"<<endl;
            cout<<"Magic Defense = 20"<<endl;
            cout<<"Magic Total = 5"<<endl;
            break;
        case 2:
            cout<<"Very well then."<<endl;
            break;
    }
    cout<<"You can barely catch your breath before another angel appears before you."<<endl;
    cout<<"Azrael the angel of death stands before you."<<endl;
    cout<<"He wields his blade before you in an attempt to strike you down once and for all."<<endl;
    cout<<"You don't even hesitate before you show your fangs."<<endl;
    cout<<"'Have you no shame'? The contract you've signed calls this a treason of the highest order."<<endl;
    cout<<"You stare in confusion, what contract is he referring to?"<<endl;
    cout<<"1. What contract do you speak of?"<<endl;
    cout<<"2. Forget it, END him."<<endl;
    cin>>ContractChoice;
    switch (ContractChoice){
        case 1:
            cout<<"Azrael: You act clueless as if you weren't the one who intiated the contract."<<endl;
            cout<<"You: I know nothing of any contract!"<<endl;
            cout<<"Azrael: The contract to end the slaughter of angels by demons in exchange for peace."<<endl;
            cout<<"You: I signed no such thing."<<endl;
            cout<<"Azrael: Whether you believe me or not is of no importance, even if I am to fall here the entirety of hell will be vanquished."<<endl;
            cout<<"You: I shall reward your insolence with a death worse than a thousand beheadings!"<<endl;
            cout<<"Azrael: As the Archangel of Death Azrael, I will strike you down. If I am to fall, then Helios God of all things shall surely end you and your reign of terror."<<endl;
            cout<<"You: Your blood will pair nicely with my BLADE."<<endl;
            Azrael();
            break;
        case 2:
            Azrael();
            break;
    }
    cout<<"Azrael: You fool, surely you know what lies ahead. Yet you continue so foolishly?"<<endl;
    cout<<"You: I fear no God nor Angel."<<endl;
    cout<<"Azrael: Everything you've worked so hard for, is this what Delilah would have wanted?"<<endl;
    cout<<"You feel your heart sink."<<endl;
    cout<<"You know the name Delilah, but you're not sure from where."<<endl;
    cout<<"You stare down onto Azrael's dying body."<<endl;
    cout<<"1. Who is Delilah?"<<endl;
    cout<<"2. Crush his skull beneath your feet."<<endl;
    cin>>KillAzrael;
    switch (KillAzrael){
        case 1:
            cout<<"Azrael: You jest, you can't have forgotten your darling beloved Delilah."<<endl;
            cout<<"You: I, I'm not sure."<<endl;
            cout<<"You try so hard to remember, but every time you end up drawing a blank."<<endl;
            cout<<"Ever since the day has begun you haven't been able to remember a thing."<<endl;
            cout<<"It's as if you are no longer Theseus the God of Blood."<<endl;
            cout<<"What are you now?"<<endl;
            cout<<"These choices have not been yours."<<endl;
            cout<<"Azrael: Theseus, do you rem-"<<endl;
            cout<<"Before Azrael is able to mutter his final words, you feel your sole crush his skull into dust."<<endl;
            cout<<"You're scared."<<endl;
            cout<<"You begin to tremble."<<endl;
            cout<<"Tears stream down your red face."<<endl;
            cout<<"You are no longer Theseus."<<endl;
            cout<<"You are something far more abominable, far more heinous."<<endl;
            cout<<"You feel your legs involuntarily move forward, you can't handle it."<<endl;
            cout<<"You no longer want this, you don't want power."<<endl;
            cout<<"No, there is no longer a you. There is a Theseus, and then there's YOU."<<endl;
            cout<<"Without a second thought Theseus draws his blade and plunges it into his chest."<<endl;
            cout<<"Theseus lets out a bloodcurdling scream as he falls to the ground and begins to rot."<<endl;
            cout<<"You have ended Theseus. A once proud warrior who fought to protect the souls of the underworld."<<endl;
            cout<<"You have gotten what you came for."<<endl;
            cout<<"You have found power, power to end a life that did not belong to you."<<endl;
            cout<<"Well, at the end of the day. This is just a world where your actions mean nothing."<<endl;
            cout<<"Isn't it?"<<endl;
            cout<<"Your journey draws to an end."<<endl;
            cout<<"Ending 1/12, Power but at what cost?"<<endl;
            cout<<"[1xxx-xxxx-xxxx]"<<endl;
            cout<<"The End."<<endl;
            Credits();

            break;
        case 2:
            cout<<"You crush Azrael's skull to dust without a second thought."<<endl;
            cout<<"You feel a jolt go through your brain."<<endl;
            cout<<"You feel the unbearable weight of your sins begin to fall upon you."<<endl;
            cout<<"It's as if the very world is on top of your shoulders."<<endl;
            cout<<"You can barely lift your neck from the heaviness you feel."<<endl;
            cout<<"You finally lift your neck and you can barely believe what stands before you."<<endl;
            cout<<"..."<<endl;
            cin>>aba;
            cout<<"⢹⡌⠆⠀⠀⠀⠠⠀⢠⡯⠂⢖⡐⢰⣿⠧⡯⢽⣹⡻⡟⣵⣿⣽⣦⡌⠒⢴⢪⡻⢛⢿⣭⢻⣷⣧⠈⢷⡌⢆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠄⠀⠀⠀⠀⠀⠠⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠄⠀⠀⠄⠀⠀⠠⠀⠀⠀⠀⣴⡏⣴⣿⣿⢹⣿⠏⢭⣎⢢⠔⢉⣴⣾⣿⣢⠻⣯⣻⡙⢮⠵⢿⠀⠒⡄⢺⣇⢀⠀⠠⠀⠀⡜⣰⠁"<<endl;
            cout<<"⣒⢻⡘⡦⠤⣌⣀⣀⣺⢥⣍⣄⣴⠞⠏⠒⠦⡬⢔⣞⡽⠽⠟⠛⢿⣿⣿⣤⡙⠣⣎⠈⣻⣧⢻⣿⣷⠈⣿⡈⢣⠀⡀⠐⡐⠂⠐⠂⠐⠠⠒⠀⠂⠂⠐⠀⠂⠐⠐⠀⠂⠒⠀⠂⠂⠐⠐⠂⠐⠐⠂⠐⠒⠂⢄⣿⠁⡴⢁⡿⠅⣼⣿⠿⣼⡿⡇⢸⡤⠋⣠⣾⣿⡿⠛⠛⠯⠷⡙⣦⢭⢴⠒⠝⢷⡌⢬⡤⢽⣀⣀⡠⡤⠴⢡⠗⡒"<<endl;
            cout<<"⡈⡉⣷⠹⡿⠓⠿⠟⠶⠶⡶⣞⣳⠮⣭⡻⢖⡖⡱⢯⡙⠙⠳⣲⡦⣝⠾⡽⣿⣆⢈⠛⠤⡻⣿⡜⣿⣇⠸⡹⡄⢳⡐⠀⠀⠀⠀⠀⢀⠀⠀⠀⡀⢀⠀⠄⠀⢠⠠⠄⠄⢀⠀⢀⠀⠀⠄⠀⢀⠀⠀⠀⠀⡀⠀⠀⡜⢁⡾⡍⣰⣿⢯⣻⡟⡤⠓⡡⣰⣼⡿⡻⢪⣤⣶⠾⠋⢛⣹⢎⢲⡖⡞⡭⢵⡺⠶⡶⠶⠛⠿⠛⢿⢃⡟⣉⢡"<<endl;
            cout<<"⡉⠓⠚⣧⢻⡭⡷⣖⣈⣥⠤⠘⠛⠃⠉⣱⢪⠼⢙⡒⣻⣷⣤⣜⣁⡈⡟⠻⣶⣿⣷⣤⣦⡈⠛⣿⣼⣿⢢⣅⢳⡀⣱⡀⠀⠌⠀⠀⠀⠈⠀⠡⠀⡠⠐⠨⣐⠁⡊⢢⠈⠠⠌⠤⠀⢁⠀⠀⠀⠀⠀⠈⠀⢀⠈⡼⠁⡼⣠⡥⣿⣯⣷⠟⡁⣤⣭⣴⣿⣷⠟⢻⡏⣀⣻⣤⢴⣏⡓⡉⠳⡑⣌⢩⡘⠛⠡⢤⣉⣰⢮⢭⡏⡿⠓⠋⢉"<<endl;
            cout<<"⠒⠒⠒⠚⣗⢧⡠⠬⠉⣀⣋⠙⠶⢒⠞⣵⣿⣵⣡⣖⣂⡤⢄⣉⡙⣛⠷⣶⣤⣬⣻⣿⣽⣿⣦⢾⣿⣏⣷⣽⣳⢷⢴⡇⠀⠐⠈⠀⠐⠀⠁⡔⡚⠅⠊⣐⠲⠌⠧⠠⠔⢥⡰⡂⠃⣄⣂⠠⠀⠁⠀⠂⠁⠂⠸⣧⢶⣟⣯⣵⣻⣿⡿⣠⣾⣿⣿⣛⣩⣤⡶⠾⢝⡓⣉⠨⣄⣒⣲⣌⣮⣟⣎⢲⠒⠟⠉⣓⠉⠤⢀⣼⣺⠓⠒⠒⠛"<<endl;
            cout<<"⠦⠭⠉⢙⠚⠋⠻⣶⣖⣒⣲⣒⣶⣛⣺⣦⣤⠭⠵⢷⢾⣝⡿⣶⣾⣤⣍⣢⡄⣉⣑⣛⣿⡿⣿⢻⣿⣟⡿⣿⣍⢿⡑⢧⠀⠀⠐⡀⢀⠂⡜⠎⣀⠴⢋⠁⠂⡀⡐⠠⢀⠂⠉⠳⣗⡌⣧⢣⠀⠄⡐⠀⠄⡀⣰⠒⣿⢋⣾⣿⣿⣙⣿⢿⢿⣟⣛⣋⣉⢰⣤⣉⣴⣴⣾⢟⣯⠷⠾⠮⢭⣤⣶⣗⣻⣖⣳⣒⣒⣶⠟⠓⠛⠛⠻⠭⠶"<<endl;
            cout<<"⠀⠀⠂⠄⢠⣴⣦⣤⣬⣭⣭⣭⣭⣭⣍⣉⣉⣉⣍⣋⣉⣛⣛⣛⣛⣓⣒⣻⡞⠋⠭⢩⣭⣽⣿⣳⣿⣻⣿⣿⣿⣮⠷⡘⡆⠡⢀⠀⡀⢰⠃⡆⣜⠐⡀⡐⢀⢀⠀⡐⠀⣐⠠⢀⠘⣇⡼⣇⡇⠀⠀⡈⠀⢠⢇⡾⢱⣿⣿⡧⣟⣿⣿⣼⣿⣭⡭⠉⠝⢻⣒⣚⣚⣛⣛⣛⣋⣛⣉⣉⣉⣉⣉⣍⣭⣭⣭⣭⣭⣤⣤⣦⡅⠂⠠⠠⠀"<<endl;
            cout<<"⠛⢻⢟⡛⣿⡱⠯⠝⠣⠏⠳⠝⠞⠶⠹⠼⣽⢿⣿⢻⢿⡯⠽⣯⡻⢍⣻⢽⣻⣷⣶⣶⠿⡯⣤⣍⢓⡶⠾⠽⠿⣿⣦⡙⠹⡄⠄⠈⠁⡼⡞⣅⡏⠌⡐⠠⠁⠄⠃⠌⠐⠠⠐⢈⠴⢸⣸⢃⣼⠀⠁⠀⢃⡞⡚⣰⣿⡿⠽⠷⠾⠚⢋⣥⣬⡿⣷⣶⣾⣿⣯⣛⡹⢏⣿⣯⢻⣟⡟⣿⡿⣯⠳⠎⠶⠝⠮⠓⠯⠳⠽⣎⢿⡻⢿⠛⠛"<<endl;
            cout<<"⠈⢸⢋⣞⣽⣯⣭⣭⣭⢶⣦⠶⣐⣂⣐⣂⣿⠀⢷⣿⡦⡽⠚⢉⣽⢿⡶⣟⣫⢷⣺⠽⢿⣽⣷⣻⣷⣒⡒⣌⣡⣬⣝⣿⣦⡙⡄⢐⠠⢿⠠⣽⡡⣛⡟⣿⣶⣦⢉⢰⣴⣷⣟⣛⣏⡛⡏⢤⣿⡀⠌⢠⢞⣤⣾⣿⣅⣰⣘⢒⣒⣲⣿⣿⣾⡿⠻⣗⡾⣿⡻⣷⡾⣯⣍⠑⢻⢴⢿⡿⠁⣿⣐⣒⣂⣒⡴⣦⢮⣭⣤⣽⣯⢻⡳⠀⠀"<<endl;
            cout<<"⢶⠼⣯⠾⠁⡂⠀⢀⠀⠄⢈⡩⡩⠝⣩⡿⠟⡋⢁⣀⣀⣤⡶⠟⢋⣡⣶⣟⣋⣭⣷⢶⣿⣿⣿⣽⠋⢙⣭⢟⣿⣏⠉⠉⠛⠻⢾⡌⣀⢻⢈⣾⡟⣿⣿⡿⠟⡛⡰⢌⡻⢿⣿⣿⡿⣿⣿⢸⣿⣇⠀⣿⠟⠛⠉⠉⢩⣿⡻⣭⡋⠛⢯⣻⣿⣿⡷⣶⣭⣝⣻⣷⣌⡙⠻⢶⣦⣀⣒⡈⠙⠻⢿⣙⠭⡩⡐⠀⠀⠐⠀⡑⠜⢷⡻⢴⠺"<<endl;
            cout<<"⣢⢌⡙⠿⣶⢤⣠⠔⠋⠠⠁⢂⣤⡾⠏⣀⣤⡾⠟⠩⡍⢵⣦⣶⠿⠛⠅⢠⣿⢛⣨⣿⣿⣿⣟⠅⡼⣛⡼⠛⠉⠀⠂⠀⢁⣂⣈⣣⣹⢎⢴⣿⡗⢬⠡⠜⣡⠱⣁⢊⡜⠰⢌⢭⡒⣧⣿⣸⠿⣭⣌⣁⣐⡀⠠⠁⠀⠉⠙⢷⡹⢦⡀⣿⣿⣿⣿⣞⡜⣿⡂⠌⡙⠿⣷⣦⣮⠍⡭⠹⢷⣥⡀⠻⣖⣄⡨⠁⠌⠓⣄⡤⣶⠿⠃⣠⡰"<<endl;
            cout<<"⠚⢭⣻⣿⣦⡙⣮⣝⡲⣴⡾⢻⣉⣥⠾⠛⠡⢐⣐⣥⣾⡿⢛⠡⢘⣠⣴⡿⢡⣳⣿⣿⣯⣗⣯⡟⠒⠛⠁⠄⠐⠠⠁⠂⠄⠙⢯⡿⡟⣭⣿⣿⣏⢧⡙⡆⢆⠻⣿⡿⢏⡜⣊⢲⡍⣿⢺⣇⡷⣿⡟⣯⠟⠁⠀⠈⠂⠄⠀⠀⠛⢒⠻⣿⣹⣞⣿⣿⣞⡜⢻⣶⣌⡐⠨⣙⠯⣷⣮⣄⡒⠈⠛⢷⣌⣫⢿⢶⡴⡛⣽⢋⣴⣿⣗⠭⠊"<<endl;
            cout<<"⡴⠊⠅⠙⢯⣿⣝⣷⣉⣡⡶⠛⢋⣥⢒⣺⣟⣯⡿⢛⡥⢚⣥⡶⢟⣹⡏⢡⣿⣿⡿⢋⠔⣻⡿⠀⠀⠄⠀⠀⠀⠄⠀⠀⠂⠡⠀⣹⢲⣟⣷⣿⣿⢲⡱⢎⣬⣶⣷⣿⣶⣬⢓⡵⣚⣿⣿⣿⣺⣿⡏⠁⠀⠄⠂⠀⠀⢀⠀⠁⢀⠀⠄⢻⣯⠆⣍⢻⣿⣿⡌⢹⣏⠻⢷⣤⣓⠮⣛⠿⣽⣯⣗⢲⣌⡛⠷⣮⣉⣵⣿⣾⡿⠉⠈⠳⢄"<<endl;
            cout<<"⣇⠀⢀⣧⡾⢿⣿⣿⡿⢟⣥⣾⢟⣿⣿⣿⣿⣯⣿⣯⣿⡿⠛⡟⣼⣿⢣⣿⣿⣿⡇⣫⣾⣿⠃⠀⡀⠆⠀⠀⢀⠀⠀⠀⠃⠰⣰⣟⣾⢿⣿⣿⣿⣿⣟⣿⣏⡿⢿⢿⣿⣯⣿⣷⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⢀⠀⠀⡈⠀⠀⠈⡀⠀⠘⣿⣷⣽⢸⣿⣿⣿⣬⢿⣧⢮⡟⠿⣷⣿⣳⣿⣻⣿⣿⣟⢿⣦⣟⢿⣿⣿⡿⢷⣄⠰⢀⣼"<<endl;
            cout<<"⢾⣷⡟⢣⠁⠀⠙⢿⣿⣯⣧⣷⣿⢿⣯⣿⢻⣾⡿⠹⣿⡆⠇⣼⡿⣿⣿⣿⣿⡿⠸⣿⡿⠁⠀⠀⠁⠀⠀⠀⠈⠀⠘⠀⠃⢰⣿⣿⡏⣿⡇⣿⣿⣿⣿⣷⡿⢻⡾⢿⡽⢾⢰⡝⠿⣿⣿⣾⣿⡿⣯⢷⡄⠀⠈⠀⠀⠁⠀⠀⠀⠙⠀⢣⠈⢿⣯⢧⢻⣿⣿⣿⣾⣿⣷⡄⠃⣾⠟⡿⣿⡿⣿⣿⠻⣷⣧⣯⣿⣿⠋⠀⠎⠙⢣⣿⠞"<<endl;
            cout<<"⠀⠻⣯⡀⠄⠀⠁⢈⢿⣯⣿⢿⣻⡿⣿⣶⡿⠁⡰⢑⡿⢀⡾⣯⣿⢻⢷⣟⡿⡑⣱⣟⡇⠀⠀⠂⠀⠠⠐⠀⠀⠂⠠⠀⡐⢸⢻⣞⡇⣿⣧⣿⣯⣿⠿⡛⠛⢋⡈⢉⣩⠩⢳⣎⣖⡬⢻⣿⣿⣽⡹⣞⡅⠀⠐⠀⠀⠂⠀⠠⠀⠀⡀⢀⠠⢸⣿⣮⠘⣿⣻⡞⣟⣿⣽⢷⡄⣹⡎⢔⠈⢿⣾⣿⢿⣿⡿⣯⡻⣁⠀⠀⠁⣰⡿⠋⠀"<<endl;
            cout<<"⠀⠀⠀⠻⣦⡠⣺⣵⠟⢻⣽⡟⡜⣷⣿⣸⡇⢮⠐⣼⣠⢟⣵⡟⣬⡟⣿⣿⠍⣴⡿⣯⣧⡀⠀⠐⠀⠀⢀⠀⠀⠈⠀⢀⠀⣜⣸⣼⣃⣿⣿⣻⠟⣉⠦⣵⣾⣶⣾⣿⣿⣾⣂⠹⣿⢺⣽⡜⣿⣷⣏⡟⣇⠀⢀⠀⢀⠀⠀⡀⠀⢀⠀⠀⠀⣸⣿⣻⣧⠘⣿⣿⢻⣦⢹⣷⡹⣆⣽⠠⡃⢸⡇⣿⡾⡸⣽⣻⠹⢾⢕⢤⣴⠏⠀⡀⠀"<<endl;
            cout<<"⠀⠀⣢⡶⠟⢾⣪⠠⡢⠙⣷⡷⠓⢀⣿⣿⣓⣶⡶⣾⣫⡾⣏⠖⣿⣻⡿⣋⢼⣟⣯⡧⣿⣆⠁⠀⠌⠁⢀⠈⠄⠁⠈⠀⢰⡟⣸⣯⣿⡿⠋⡕⢒⣥⣾⣿⣿⣿⣿⡿⡛⢿⣿⠆⣻⣿⣸⣿⣜⡿⠷⢾⣻⣌⠀⠀⠁⠈⠀⠀⠁⢀⠀⠈⢰⣻⢿⣼⣽⣆⣽⢿⣿⣿⠸⡜⣻⣜⣿⡶⣶⣚⣧⣿⡀⠳⣾⡏⢵⡢⡹⡷⠫⢦⣄⠁⠀"<<endl;
            cout<<"⣔⠜⠉⡠⠀⠌⢻⡏⠄⠠⢹⣿⠬⢻⣇⡿⠉⣨⡟⣹⢯⡹⣸⠈⣿⣿⣁⣶⣿⣿⣾⡟⣜⣿⡄⠀⠀⠂⣠⣴⣚⡛⡹⢋⣛⣽⠿⠛⡡⢠⠵⣡⣿⣿⣿⣿⢿⣷⢭⣴⠖⣼⣿⣿⣦⣻⣿⣯⣻⣽⠐⠀⠄⠠⢈⡉⠍⡑⠒⣲⡶⢦⣤⣤⣿⣯⠾⣷⣿⢻⣶⣈⢿⣾⠇⡵⢣⢻⣧⢻⣇⠉⣿⢻⠺⢶⣿⢁⠀⢈⡿⠁⠁⠀⠉⠑⠀"<<endl;
            cout<<"⠁⠀⠀⢠⠀⠂⠀⢻⡌⢀⠈⡿⣧⣼⣽⡷⠞⠋⣰⣯⡝⢰⡹⡀⢿⡏⣿⡝⢿⡰⣹⢿⣿⢎⠿⣦⣠⠞⠓⢑⣚⣻⠿⠟⣫⠐⢢⠍⣦⡳⣟⣿⣿⠽⢻⣯⣏⢁⡉⠉⠉⢭⡍⡁⠻⣿⣿⣿⣿⣿⣶⣣⢆⡁⠸⣿⣄⣶⡀⢣⠐⣈⠺⢿⡏⢉⠛⢏⣆⡿⣛⣿⢿⣿⠐⣰⢡⢳⣽⣄⠛⠳⣿⣼⣦⡾⡏⠀⠀⡾⠁⠀⡀⠐⠀⡀⠀"<<endl;
            cout<<"⠀⠈⢀⠀⠀⠂⠁⠈⣷⡠⣞⡿⣿⡯⢝⢻⢞⣿⣿⢧⠩⢦⠇⠡⢸⣿⠻⣟⡦⢽⣛⣎⣿⠿⣿⡿⠓⣺⠟⠩⣁⠒⣩⢌⡹⣌⣶⢻⡞⣽⣿⠅⠁⠂⣼⣿⣿⡆⢂⣴⡂⢂⣍⠀⢃⢡⢻⣿⣿⣿⢾⡵⣫⡝⣥⣢⣽⡝⡃⠄⠢⠄⣂⠘⣙⠢⠘⡀⢫⢥⣽⡿⢺⡞⠈⡞⡟⣄⢿⢿⣿⡳⣏⡫⢿⣟⣟⠦⣼⠇⠀⠀⠀⠀⠀⠀⠀"<<endl;
            cout<<"⠀⠈⠀⠄⠂⠀⣀⣴⠟⣏⠁⣿⣿⡅⢼⢃⣼⢿⣏⠆⡗⢸⢬⠘⢈⣾⣩⠜⡓⡉⠍⣀⣠⣴⠋⠔⣸⠏⠠⠅⣂⢮⡱⣮⢳⣝⣿⣿⣿⣟⣷⠖⣱⣾⣿⣿⣵⡷⡏⢛⣿⣿⢚⣼⡸⣴⣭⣽⣿⣿⣿⣷⣻⣼⡹⣟⡏⢶⣝⣩⠶⣉⣤⡑⠔⡥⢢⢔⡘⣿⡏⡅⣿⠇⠦⡁⣇⢚⢨⢻⣯⣷⠱⡅⡿⣯⡇⠹⡞⢦⡀⠀⠀⠀⠀⠀⠄"<<endl;
            cout<<"⠀⠐⠈⠀⠀⠞⠋⠀⠀⣿⠀⣿⣟⢴⢏⣾⢻⡼⣿⠦⠍⢸⠠⠝⣀⡟⠁⡄⡰⢀⡾⡟⢿⠀⣱⠿⢋⢠⣴⣾⣙⣎⣷⣼⣿⣿⠿⣏⡟⠹⢀⣼⣿⣿⡷⣽⣿⣽⣿⡄⢺⣯⣾⣿⣿⣌⠹⣟⣿⣿⣿⣿⣿⣾⣿⣝⣾⣳⢮⣵⣫⠷⣮⣹⣷⣜⢧⣋⡶⣿⢱⠸⡿⠐⡤⠐⢹⠨⢃⣿⣧⢻⣧⢳⣩⣿⡇⣸⠇⠂⠈⠁⠀⠀⠀⠀⠀"<<endl;
            cout<<"⠀⠐⠈⢀⠁⠈⡀⠀⠁⣿⣈⣿⣏⣞⡾⣏⡟⢀⣿⠟⠉⠉⢉⠻⣼⠲⣄⡴⢲⠈⠄⠒⠠⣽⡟⣠⠧⣟⣿⣿⣯⣿⣿⣿⣿⣷⡶⣈⣤⣾⡿⡛⣾⣷⣧⢻⣿⣿⣿⣏⣩⣿⣿⠢⡝⢿⣶⢿⣿⣿⡿⣿⠿⣿⣿⣿⣾⣽⣻⣶⣿⣿⣿⣽⡷⣯⣿⡿⠟⡧⠃⢂⡇⢇⡖⠩⠉⢉⠚⣿⡄⢳⣻⣧⢟⣿⣇⣾⠀⠂⠀⠄⠀⠀⠀⠀⠁"<<endl;
            cout<<"⠀⠐⠈⢀⠀⠀⠄⠁⠂⣼⢻⣿⡟⣾⢱⣛⣷⠟⠉⠀⡀⠁⠂⠀⢼⣦⢿⣄⣯⣐⠭⣒⢍⡛⣛⢧⣛⣼⣿⡿⣟⣻⣿⣿⡿⣿⣱⣿⡿⢣⠹⡐⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⠱⡊⢥⠻⣶⣶⣿⣿⣻⡷⣻⣟⣶⣿⣫⣝⣳⢛⣻⠟⣛⣛⠫⠵⡰⣹⡇⣰⢸⣳⡎⠀⠄⠁⠠⠀⠈⠻⣿⣳⠜⣏⣿⣮⢻⡄⠀⠈⠀⠀⠈⠀⠀⠀"<<endl;
            cout<<"⠀⠈⠐⠀⠠⠀⠂⠠⠀⡧⢸⡿⣽⣇⠯⣼⠏⠀⠀⠂⠄⠀⠄⠂⠹⣿⣿⣽⣾⢬⡿⡜⣮⡝⣥⣳⡾⠻⣥⢞⣋⣿⣿⣿⣻⣷⡿⡟⠥⢂⠳⡀⣿⣿⣿⣿⣿⣿⣿⡇⢿⣿⡇⠗⠀⡇⠸⢻⣼⣿⡿⣟⣿⣅⢻⡼⡽⣆⠧⢪⣞⡱⢋⢤⢣⠵⣏⢠⣿⢃⡟⡿⡼⠁⢀⠐⠀⠀⠂⠄⡀⢹⣏⠯⣽⣼⣿⠨⡇⠀⠀⠄⠀⠀⠀⠀⠀"<<endl;
            cout<<"⠀⡈⠠⠈⢀⠀⣀⠠⠀⡷⣼⢗⠛⣿⢲⡟⠀⢀⠠⠀⠀⠀⠠⡀⠠⠙⢻⢿⣾⣿⣶⣽⣶⠽⡛⠅⢞⡱⣩⢓⡞⣽⣿⣿⣽⣿⢰⡍⠞⣈⠒⡠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣁⢰⠃⢾⣟⣿⣿⡽⣧⣿⣯⢳⣱⣹⡞⡵⢢⣙⢪⣦⢏⢰⡇⣼⡏⣸⣿⡿⠁⠀⡀⠀⢀⠀⢀⠀⠄⠀⢿⡸⣗⠧⢿⣴⡇⡀⠀⠀⠀⠀⠀⠀⠀"<<endl;
            cout<<"⠀⢀⠐⠠⠀⠀⠀⠀⠁⡷⡟⡸⢂⣹⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⢀⠂⠀⢣⢻⡄⣿⡀⢹⡜⡰⠹⡌⢆⠣⡟⣥⣿⢪⣿⢽⣯⢣⠜⡃⠌⡁⠆⣿⣿⣿⢿⣿⣿⣿⣿⡟⣿⠃⢁⠊⡄⠣⢹⣿⠟⣿⣽⣿⡟⢽⣎⡵⡏⢽⡐⠧⢠⡟⡍⢂⡿⠀⣿⢃⣿⡸⠁⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠘⣿⡇⠸⡼⡗⡆⠀⠀⠀⠀⠀⠀⠀⠂"<<endl;
            cout<<"⠀⠠⠀⠐⠀⠠⠁⠈⢀⣿⠇⠇⢼⣿⠁⠀⠀⠁⠀⠀⠀⠁⠀⠀⠀⡐⠠⠀⢻⣧⢹⡇⠀⢣⡤⠕⢾⡌⣼⢓⣾⣯⣿⢥⣾⣿⢧⢚⠡⢂⣾⢘⣿⡟⢿⡿⣿⣿⣿⣿⢱⡿⡜⣸⣧⠂⣹⡖⣿⣟⣯⢿⣿⣿⡘⣿⢶⢻⣥⢏⡡⣮⠔⢤⡟⡁⢰⡿⢸⡿⠁⠀⠈⠀⠀⠀⠈⠀⠀⠀⠁⠂⠄⠸⣷⡀⢧⢿⡇⠀⠈⠀⠀⠀⠀⠀⠀"<<endl;
            cout<<"⠀⠐⠈⠠⠀⠠⠀⠄⢸⡞⡜⢀⣿⠏⠀⠀⠂⠀⠀⠂⠀⠐⠀⠄⠀⠄⠠⢀⡈⣿⡘⣧⠀⡜⠠⠀⠌⠓⢺⢱⢿⣿⠇⣾⣿⣿⣌⢧⢒⢠⣿⡠⢿⣣⢿⠇⣿⣿⣿⣧⣾⡟⠵⣹⣿⡰⣸⣷⣝⣿⣟⣾⡿⣿⣷⡙⣾⢻⡎⣟⠚⠁⠠⢀⢳⠀⣾⡇⣿⠃⠀⠠⠁⠀⠄⠀⠐⠀⠠⠀⠀⠄⠂⠀⢻⣧⢘⡞⣷⠠⠀⠀⠀⠀⠀⠀⠂"<<endl;
            cout<<"⠀⠐⠈⢀⠀⢀⠁⠀⣿⢺⠁⣾⠏⠀⠐⠀⠀⠀⡀⠀⠀⢀⠀⠂⢈⠀⡀⠄⠀⢸⡷⣻⣠⠇⠂⠀⠂⠠⠈⣾⣧⠏⣾⣿⣿⣿⣿⣦⣿⣼⣿⢿⢿⡝⣿⢀⣿⣿⣿⣿⣿⣏⢳⣿⣻⢿⢿⣿⢿⣿⣿⣿⣿⣿⡟⣷⡸⣼⣷⠃⠀⠁⢀⠀⠘⡆⣿⣼⡷⠐⠀⡀⢀⠀⠀⠐⠀⡀⠀⢀⠀⠀⢈⠐⠀⢿⣎⢹⡽⡄⠀⠠⠀⠀⠀⠀⠀"<<endl;
            cout<<"⠀⢈⠀⠂⠀⠂⠈⣸⢯⢃⢼⡟⠀⠀⡈⠀⠀⠀⠀⢈⠐⠀⠂⣼⡀⠄⠀⠠⠈⠈⣷⠽⣿⡀⠁⠀⠁⢁⠀⢸⣿⣾⣿⣟⣿⣿⣿⣿⣿⣿⣻⣷⣿⣿⣿⣦⣿⣿⣿⣿⣿⣿⣿⣿⣻⣯⣿⣻⣿⣿⣿⣿⣿⣿⢷⡿⣗⣽⣏⠀⠈⠈⠀⠠⠁⣷⡟⣼⠃⠀⠁⠐⠀⠀⣷⡈⠀⠀⠀⠀⠀⠀⠀⠄⠀⠈⣿⠤⣛⣧⠀⠀⠁⠀⠀⠀⠀"<<endl;
            cout<<"⠀⠠⠀⢁⠂⠐⢠⣿⠇⣌⡾⠃⠀⠐⠀⠀⠄⠀⠀⢂⠠⠐⣰⣿⡇⠐⠀⠐⡀⠂⠸⣟⣼⣇⠐⠀⢁⠂⢠⡟⢹⣷⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣻⣿⣧⣿⣿⣻⣽⣿⣿⣿⣿⣿⣿⣭⣿⣿⣯⣿⣿⣿⣿⡇⢹⡄⢀⠂⠈⠄⢸⣿⡙⡏⠀⠀⠀⠀⠀⢸⣿⣧⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠻⣖⡘⣿⡆⠀⠀⠀⠀⠀⠀"<<endl;
            cout<<"⠀⡐⠈⠀⡄⢠⣿⠏⢼⠞⠁⠀⡀⠄⠀⢀⠀⣀⠀⠄⠠⢠⡿⣿⣷⠀⠠⠀⡀⠄⠀⣯⠾⣿⢀⠀⠄⢰⢻⢁⣾⣿⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣟⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⡀⠯⢆⢠⠀⠀⣾⡷⣹⠀⢀⠂⠀⠀⠁⣾⣿⢻⣆⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣖⡜⣿⡄⠀⠀⠀⠀⠀"<<endl;
            cout<<"⠀⠀⠄⠁⢠⣿⠏⡼⠋⠀⠀⡀⠀⠀⠀⠀⠀⠀⡀⠀⣠⣿⡜⢻⣿⠀⠀⡀⠀⠀⠁⢸⣣⣿⠀⢀⠂⠃⣄⣾⡿⣿⣸⣿⣿⣿⡱⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢯⣿⣿⣿⣷⣏⣿⣷⡜⠌⡀⠀⠁⣷⠯⡝⠀⠀⡀⠀⠁⠀⣿⢽⠳⣽⣆⠠⠀⠀⠀⢀⠀⠀⠀⠂⠀⠈⢷⢚⣽⡄⠀⡀⠀⠀"<<endl;
            cout<<"⠀⠈⠀⢠⡿⣣⠞⠁⠀⠂⠀⠀⠀⠂⠀⠁⠈⠄⣤⣶⡽⡋⣤⣿⠟⠀⠐⠀⠑⠀⡁⢸⣣⠿⠈⢀⠀⣡⣯⡟⣐⣷⢿⣿⣿⣷⡹⣾⣿⣿⡟⣿⡿⣽⣿⣿⣷⣿⡿⣿⣿⣿⣿⣿⠽⣿⡿⢿⣿⣿⣼⣿⣳⣿⣿⡿⢿⣜⠻⣟⣦⠐⠀⠂⢸⣏⡇⠀⠀⠀⠁⠂⡀⠙⣿⣬⠘⢯⣷⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣜⣿⡄⠀⠐⠀"<<endl;
            cout<<"⠀⠀⣰⣿⠟⠁⠀⠀⠂⠀⠐⠀⠠⠀⠠⠀⠄⠀⣽⣿⡗⣱⡟⠁⠀⠠⠐⠠⠠⠀⣀⢸⣹⠇⠄⣠⢞⡿⣋⣴⣿⣷⢞⣻⣿⣷⣽⣹⣿⣷⢫⣿⣾⣥⣿⣿⣿⣷⡧⡷⣷⣿⣽⣯⣿⣾⢿⣫⣿⣾⣿⣿⣿⣿⡟⡻⣾⡿⣦⡙⢿⣳⣄⠀⠘⣇⡇⠀⠠⠀⠀⠀⠀⠀⠈⢻⣧⢫⣿⣫⡀⠄⠠⠁⠀⠄⠀⠀⠀⠀⠀⢈⠻⣻⡄⠂⠀"<<endl;
            cout<<"⠀⡴⠋⢀⠀⡀⠂⠀⠀⠀⠠⠀⠀⠀⡀⠀⠈⡼⣿⢿⣧⣿⠃⡀⠀⠄⠀⡀⢀⠀⡀⢸⡜⣀⣾⣕⣋⣴⣿⢿⣟⡍⡶⠠⣿⣿⣾⡿⣿⣯⣻⢼⣻⣿⣿⣿⢿⣯⣴⣽⣿⢿⣿⣿⣿⡟⣎⢷⣿⡿⣿⣿⣿⡟⡇⢧⡹⡻⣿⣿⣶⣜⣍⣿⣄⢹⡇⠀⠀⠄⡀⠀⠀⠀⠀⡀⣿⡟⣯⢷⣳⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠂⠀⠈⠻⣄⠀"<<endl;
            cout<<"⠈⠀⠀⠠⠀⠀⠀⠀⠀⠈⠀⠀⠀⠁⠐⠀⣼⣿⣟⣿⡟⣯⣇⠀⠀⠀⠀⠐⠈⠀⠀⣸⣾⢿⣿⣿⢟⡝⣦⢟⢎⣼⢃⠹⠡⣿⣿⣽⠳⠽⢏⢾⣹⣿⣿⡿⣿⣿⣿⣿⣿⡿⣿⣷⣯⡛⣯⠿⡝⣻⢿⣿⣿⢡⢫⠌⢷⡙⣝⣦⠳⣝⢿⣿⡿⢷⣵⠠⠀⠂⠀⠁⠂⠀⠁⢠⡿⣇⣿⣻⣏⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠈⢀⠠⠀⠀"<<endl;
            cout<<"Helios the God of all things stands before you."<<endl;
            cout<<"He stares down upon you as if you were nothing but an ant."<<endl;
            cout<<"His eyes that have known,know and will know all stare upon your pitiful figure."<<endl;
            cout<<"He watches you squirm."<<endl;
            cout<<"You drop your blade out of fear."<<endl;
            cout<<"Helios: Why have you come here Theseus."<<endl;
            cout<<"Theseus? You know noone by this name."<<endl;
            cout<<"Helios: You are a dishonorable warrior, you who once stood so proudly as a hero now stand before me as a coward."<<endl;
            cout<<"Tears stream down your face. Why? Isn't this what you wanted?"<<endl;
            cout<<"Theseus: Forgive me Helios, I."<<endl;
            cout<<"Helios: Speak no more Theseus, for I understand."<<endl;
            cout<<"Helios: This is what you wanted. Therefore you shall claim your reward."<<endl;
            cout<<"Helios: You wanted power. Therefore I will grant you the power that you seek."<<endl;
            cout<<"Theseus grabs his blade and plunges it into his stomach."<<endl;
            cout<<"His viscera paints the ground in a magnificent display of red."<<endl;
            cout<<"Helios: Are you satisfied? Have you gotten what you came for?"<<endl;
            cout<<"Helios: You who stand before me, not as Theseus. But You. Begone from here, I no longer wish to have such scum in my presence."<<endl;
            cout<<"Helios vanishes in an instant."<<endl;
            cout<<"You stand before an empty abyss. The world is yours. But what are you going to do with a world emptier than limbo?"<<endl;
            cout<<"Ending 2/12, Limbo"<<endl;
            cout<<"[x6xx-xxxx-xxxx]"<<endl;
            cout<<"The End."<<endl;
            Credits();
            break;
    }


}