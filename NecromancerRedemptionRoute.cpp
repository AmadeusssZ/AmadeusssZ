#include <iostream>
#include "GoblinNecro.cpp"
#include "ApparitionNecro.cpp"
#include "NecroPaladin.cpp"
using namespace std;
void NecromancerRedemptionRoute(){
    int UselessChoice4;
    int Door;
    cout<<"???: So it is redemption you seek? So be it. Continue down the path on the left."<<endl;
    cout<<"The being vanishes in an instant."<<endl;
    cout<<"It is time for you to gain your redemption."<<endl;
    cout<<"You travel down the path on the left in eerie silence."<<endl;
    cout<<"Only interrupted by the occasional ghastly scream."<<endl;
    cout<<"Par for the course in Hades I suppose."<<endl;
    cout<<"You begin to wonder how exactly you knew what you wanted."<<endl;
    cout<<"It's as if you've been waiting an eternity for this moment."<<endl;
    cout<<"You feel a sense of excitement, the first time in several eternities."<<endl;
    cout<<"You begin to feel a pattern emerging, a set of 3 trials maybe."<<endl;
    cout<<"Sure enough, before you the first trial appears."<<endl;
    cout<<"A memory of yours it seems, but from when? I guess it's time to find out."<<endl;
    cout<<"Are you... No. You've been ready for this moment."<<endl;
    cin>>UselessChoice4;
    GoblinNecro();
    cout<<"You can't seem to recall where you saw that creature."<<endl;
    cout<<"It seemed all too familiar however."<<endl;
    cout<<"You feel pity for the poor creature."<<endl;
    cout<<"Throughout your longlong life I suppose you have gotten some sense of remorse haven't you?"<<endl;
    cout<<"You keep on walking now, it could be another eternity before you find what you're actually meant to find."<<endl;
    cout<<"Anything is better than that blasted room I suppose."<<endl;
    cout<<"Your boney feet start to ache from trampling all over these bones."<<endl;
    cout<<"They rattle as if trying to tell you something."<<endl;
    cout<<"Rattling. I guess this would mean..."<<endl;
    cout<<"Before you know it, another phantasm memory appears before you."<<endl;
    cout<<"Prepare yourself."<<endl;
    cin>>UselessChoice4;
    ApparitionNecro();
    cout<<"That one seemed to give you the chills."<<endl;
    cout<<"When could you have seen something so terrifying?"<<endl;
    cout<<"You carry on after defeating the being, unsure of what lies ahead."<<endl;
    cout<<"2/3 completed, you remember the pattern."<<endl;
    cout<<"You know it's only a matter of time before you find your final trial."<<endl;
    cout<<"Sure enough the ground begins to shake."<<endl;
    cout<<"You fall down a mound of bones."<<endl;
    cout<<"You raise your head to find the final phantasm before you."<<endl;
    cout<<"You have no time to waste. This is it."<<endl;
    cout<<"Your final trial."<<endl;
    NecroPaladin();
    cout<<"That foe was terrifying, yet you managed to persevere."<<endl;
    cout<<"You have completed all 3 trials."<<endl;
    cout<<"You know all that lies ahead is your final decision."<<endl;
    cout<<"Why do you know this so well?"<<endl;
    cout<<"Perhaps you've done this very thing before already."<<endl;
    cout<<"Who can tell. Not you, that's for sure."<<endl;
    cout<<"You keep walking and walking."<<endl;
    cout<<"You know without a doubt that at the end of this path lies all that you've been waiting for."<<endl;
    cout<<"And. Sure enough."<<endl;
    cout<<"You are faced with 2 doors."<<endl;
    cout<<"The one on the left gleams the brightest light from underneath."<<endl;
    cout<<"The one on the right is filled with the darkest screams."<<endl;
    cout<<"This is it. What door do you pick?"<<endl;
    cout<<"1. Left"<<endl;
    cout<<"2. Right"<<endl;
    cin>>Door;
    switch (Door){
        case 1:
            cout<<"You pick the door on the left."<<endl;
            cout<<"What lies ahead? Who knows."<<endl;
            cout<<"Do you want to find out?"<<endl;
            cout<<"1. Yes"<<endl;
            cout<<"2. No"<<endl;
            cin>>UselessChoice4;
            cout<<"???: It is not up to you."<<endl;
            cout<<"???: You are not worthy of seeing that which Theseus has gotten for himself."<<endl;
            cout<<"???: Theseus has suffered enough, it ends here."<<endl;
            cout<<"???: I know you are curious as to what happens to him."<<endl;
            cout<<"???: But you have done enough."<<endl;
            cout<<"???: If you truly wish to find out what happens to Theseus."<<endl;
            cout<<"???: Return to me with an omniscient knowledge, to a place where your journey began."<<endl;
            cout<<"???: For now, you will remain in the dark."<<endl;
            cout<<"???: Begone."<<endl;
            cin>>UselessChoice4;
            cout<<"Ending 9/12 None of your Concern."<<endl;
            cout<<"[xxxx-xxxx-6xxx]"<<endl;
            Credits();
            break;
        case 2:
            cout<<"You pick the door on the right."<<endl;
            cout<<"Screams echo everywhere."<<endl;
            cout<<"You open it."<<endl;
            cout<<"Lo and behold. There they are."<<endl;
            cout<<"You've fought for redemption, but now you're here. The very place you wanted to avoid."<<endl;
            cout<<"The souls of all that you've slaughtered lie before you."<<endl;
            cout<<"You try to escape."<<endl;
            cout<<"Their hands grab onto you."<<endl;
            cout<<"They drag you into this pit with them, they will ensure you suffer for an infinite amount of eternities."<<endl;
            cout<<"Karma. It's a b#### aint it?"<<endl;
            cout<<"Ending 10/12 Retribution"<<endl;
            cout<<"[xxxx-xxxx-x9xx]"<<endl;
            cout<<"⣿⣿⣿⣿⡿⢛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣙⣧⡙⣿⣧⠆⠠⢐⢤⠀⠀⠉⠁⠿⣸⣿⣿⣧⢙⡿⠃⢸⡟⠀⠆⣿⡿⣿⣿⡟⡵⡵⡘⡥⠔⠈⣱⡾⢿⣿⣻⣿⣿⣿⣿⣿⣿⣻⡻⢿⣿⢷⣌⣪⡹⣿⣿⢿⣯⣿⣿⣿⣧⡊⠁⠘⠉⠿⣿⣿⡿⣿⡿⡟⣽⣽⢲⡓⡰⢉⠦⣿⣌⠿⣿⣿⣿⣿⣿⣿⣿⡽⣣⡱⢦⠆⢠⠒⠸"<<endl;
            cout<<"⣿⣿⣿⠿⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢣⣘⠗⣋⠹⣷⡂⠙⢦⠀⠑⠀⠀⣀⡵⠏⢹⠿⣛⡄⠀⠋⣈⣠⣔⣾⢛⣽⣿⢏⡿⢫⡮⢊⠀⠠⢚⣵⣿⣿⣏⣿⣿⣶⣿⣿⣿⣿⣟⣛⠷⣞⣟⣻⣆⢻⣜⣿⣿⣿⣿⣿⣿⣧⢲⡭⢮⣽⣷⡶⢬⣽⠯⣼⠻⢵⣞⡁⡄⠀⣠⢏⡷⣿⡄⢿⣿⣿⣿⣿⢟⡹⣦⡻⡿⠊⠡⠀⠈⠀"<<endl;
            cout<<"⣿⣿⣿⡀⣿⣿⣿⣿⣿⣿⣿⣟⠷⡞⠻⢿⣿⢿⡟⢌⡎⢏⠐⡌⠇⣹⣷⠧⣬⠧⢤⡤⠮⢿⣯⣶⣾⣶⣔⠊⣢⣴⣿⣿⣫⣾⠉⣿⢿⡞⣱⠿⡴⢁⡤⠔⠉⣩⣤⣭⣭⣭⣝⣿⣿⣿⣿⣿⣿⣿⣿⣬⡙⢷⣮⠣⡹⣿⣻⡟⣹⣿⣿⣯⣿⣝⣟⣾⣿⣑⢮⣧⣾⣿⠘⢆⡳⢑⡌⣦⡈⣈⡿⢫⣿⣿⢻⣟⣻⣏⢼⣿⡔⡙⢎⠦⡰⠀⠀⠠"<<endl;
            cout<<"⣿⣿⣿⣧⢻⣿⣿⣿⣿⣿⣿⠡⢿⣿⣷⣧⢾⠋⢤⣾⣇⢌⠂⢞⢼⡰⣇⣷⣖⣾⣷⣦⣭⡃⢨⣻⡛⠻⣿⣷⣮⠫⣿⢼⣿⡯⣜⣿⣟⣚⡫⢼⣰⠉⢀⡠⣰⢗⣛⣻⣻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⢵⣜⢧⠘⡟⠻⢀⣿⣿⣿⣿⣿⣾⣿⣿⣇⣾⣿⣿⣿⣾⣆⠁⢳⡈⣞⣳⣦⣟⣞⡱⢪⣟⣰⣿⣵⣿⣿⣽⡃⣤⡾⣶⣿⡆⡁⢶"<<endl;
            cout<<"⣿⣿⣿⣿⠦⠹⣿⣿⣿⣁⣘⠀⠁⠚⠉⠀⡇⣠⢻⣾⣽⢸⠂⢈⠆⢱⣷⣿⣿⣿⡟⣻⣿⣿⣄⣿⡉⢫⣽⣙⣛⠳⣼⣿⡴⢿⣿⢻⣯⡟⡟⡷⣌⡺⢎⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣝⣽⢧⠣⠹⢀⡿⣿⣿⣿⣿⣿⣿⣿⣿⢠⣛⠟⠹⠿⣧⡘⢀⢠⢣⠘⠰⢒⢴⢠⡯⠜⠈⠹⢿⡿⢯⣿⡏⡇⠟⢻⣹⡟⣯⢱⣫"<<endl;
            cout<<"⣿⡿⢻⣼⢲⣱⣿⣿⣟⣽⣿⣿⣿⡀⠀⠀⡤⣯⣄⣿⣿⡆⢃⠘⢷⢰⡏⡬⠉⠉⠙⣛⠿⢿⣿⣿⣿⣾⣿⣥⣭⣽⣿⣾⣿⣷⣟⡿⣾⣽⣽⡿⢋⣵⢦⣙⢿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡫⢧⢷⣰⡍⣶⣭⣛⣿⣿⣿⣿⣿⠠⢧⣎⣳⡀⠸⣇⡸⡇⠀⠀⠹⢬⣶⢿⢳⣗⡞⣿⡟⡐⢧⠈⡹⡆⢀⣾⣳⡽⠏⡞⠉"<<endl;
            cout<<"⣿⣟⣟⣮⢳⣿⣿⣿⣿⣿⠟⣿⣧⠻⣛⠸⣟⡋⢉⠙⠞⣿⠆⠀⠀⡾⣿⣷⣦⣤⡫⣿⢀⠈⣹⣿⣿⣾⣽⣿⣭⣛⢯⡿⣿⢟⣿⡷⣿⡿⢋⣴⡯⣗⣻⡿⢷⣮⣭⣭⣭⣵⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣌⢪⠻⣡⣿⣾⣿⣿⣽⣿⣿⣿⡇⢹⡞⣧⠗⠴⠿⣿⣷⣦⠂⠀⡠⠃⢿⣾⡿⣹⢿⣼⠿⣭⢧⠈⠆⣮⠷⠣⠒⠜⠐⠀"<<endl;
            cout<<"⣿⠻⢿⣇⣻⣿⣿⣿⡿⠃⣴⠟⠉⢠⣟⣷⣿⣿⣿⡿⢦⣈⠂⡀⢰⢱⣿⣿⣿⣿⠻⣿⣿⣶⣧⣙⣯⣛⠶⣯⣭⣿⣿⡻⣷⣿⡿⣾⠟⣰⣿⣯⣚⣿⠧⣞⣟⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣟⣶⣙⢬⣻⠿⡿⢟⡿⢟⡿⣿⣿⡺⠍⣹⣧⠾⢶⣦⣿⣿⠀⠀⠑⢀⠀⠈⠃⡍⠛⢼⡿⢽⣆⣷⠀⣼⢁⡀⠣⡄⣶⢻"<<endl;
            cout<<"⣈⡤⢀⣿⣿⣿⣿⣟⢃⡆⣽⣧⡀⠾⠉⢈⣿⣿⣿⣿⡷⡎⠀⢠⢫⡽⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣝⣿⣿⣿⣿⣿⣿⡏⣼⣿⢋⣽⡟⠠⣭⣽⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⡾⣿⣿⣯⣿⣿⣿⣿⣿⣿⠿⣓⣮⣯⠞⢁⣢⣘⣿⣼⣿⣿⡼⣿⣿⣶⣶⣽⣿⣿⡏⠐⢈⠎⠀⠀⠀⠈⠆⠊⣴⣲⣿⣿⣸⡏⠀⠐⠶⢱⣮⠟"<<endl;
            cout<<"⣷⣷⣾⣿⣿⣿⣿⡟⢻⠁⢨⣿⣿⣤⣴⣿⣿⣿⣿⠚⢻⣧⠀⡜⢹⣥⣤⡖⡅⡄⠙⢻⣿⣶⣶⣤⣬⡝⢻⣿⣿⣿⣿⢻⡟⣿⣿⢹⣿⣿⠂⠀⢹⣴⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⡟⣿⣿⡗⣿⣿⣿⣿⣿⣿⣿⡏⣵⣿⣿⡟⢳⣤⣿⣿⣿⣿⣿⣧⣿⢻⣿⣿⢹⣿⣿⣿⣿⣧⠈⡏⠀⠀⡆⠀⠀⣿⣧⣿⢳⣽⣿⣿⣿⣦⡄⠀⣼⡏⠀"<<endl;
            cout<<"⣿⣾⣿⣿⣿⣿⣹⣍⣦⡗⣸⣿⣿⣿⣿⣿⣟⠡⠀⠙⢳⣿⣮⣼⣿⣿⣿⣷⣾⣷⣿⣷⣿⣽⣯⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣻⣾⣿⡟⠀⠠⣽⣿⣿⣿⣿⡟⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⢩⣿⣿⣿⣿⣧⣾⣾⠿⣷⣽⠿⠋⠬⡹⣟⢿⣿⠫⢿⣿⣿⣿⣿⣌⡍⢀⠀⠀⠀⠞⣡⢼⣿⡟⣿⣙⣿⣿⣿⣿⣿⣿⡧⢘"<<endl;
            cout<<"⣿⣿⣿⣿⣿⣿⡻⠿⣟⢣⢸⣿⣿⣿⣿⢳⣭⠋⠻⣿⣿⣇⡿⣿⣿⣿⣿⣿⡿⢗⣼⣿⣿⣿⣿⣿⣟⣯⣭⣷⣿⣿⣿⣿⣿⣷⣯⣿⣿⣿⠀⣼⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣟⣿⣿⣻⣿⣿⣿⣾⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⢹⣿⣿⣷⣿⣧⣄⣀⣴⣿⣿⣷⡝⢮⡂⠝⠻⣿⣿⣿⡀⠘⠀⢰⡶⢮⣸⣾⣿⣿⡿⢿⡟⠻⣿⣿⣿⣿⣷⣾"<<endl;
            cout<<"⣿⣿⣿⣿⣿⣧⢬⢦⠈⠁⢨⣿⣿⣿⢡⠂⢧⠀⠀⠘⢿⣿⡯⣿⣿⣿⣿⣿⣾⣿⣿⣷⢿⣛⣩⣵⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⢼⣿⣷⣿⣿⣿⣿⢿⣿⣿⣿⢿⣿⡟⣾⣿⣯⣿⣿⣿⣿⡇⣿⣿⣿⣿⣏⣾⣿⣿⣿⣻⣿⣿⣿⣿⣳⣾⣽⣿⣿⣿⣿⣿⡿⠦⠬⠮⢀⣿⣿⣿⡟⠂⠀⢸⣿⣮⣿⣿⣿⡻⢤⣫⣀⣽⠟⣿⣿⣿⣿⣿"<<endl;
            cout<<"⣿⣿⠙⠁⣉⢛⠺⣧⢷⠀⣼⣿⣿⠏⡀⠌⠉⠀⡀⠀⠘⣿⣇⢿⣿⣿⠟⣑⣻⣿⣿⡾⠿⠟⠛⠛⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣽⡻⠿⣿⣿⣿⡿⣾⣽⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣷⣹⣿⣿⣿⣿⣿⣿⣿⡻⣿⣿⣿⣿⠷⣿⣽⣿⣿⣿⣿⡿⠋⡤⢭⣯⣱⣦⣭⢹⣿⣷⠀⠀⣼⣿⣿⣿⣿⢃⡥⠊⠀⠍⠁⠴⢿⣿⣿⣿⣿"<<endl;
            cout<<"⣿⣿⣀⣴⣡⣦⣧⣈⣁⣴⠿⢿⠿⠂⡁⠀⢀⣀⣓⠆⢠⣿⣿⣺⡿⣣⡾⢛⡯⢋⣀⠸⠿⠿⣿⣷⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣜⣻⣿⣿⣿⣿⣿⢹⣿⣿⢯⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣟⣿⣿⣿⣿⠿⢛⣯⣄⣠⣴⣿⣿⣿⣿⣿⣞⢿⢿⡄⢀⣿⣿⠏⣿⣿⠁⠀⠁⠀⠀⠀⠀⠈⣿⣿⣿⣿"<<endl;
            cout<<"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⣋⡵⠞⣉⠀⠀⢀⣐⣂⣔⣠⣌⣍⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢽⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣧⣿⣿⣿⣿⣿⣿⣷⣾⢯⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣶⣿⣻⣿⣿⣽⣿⣿⣶⣶⣵⣾⣿⣷⣶⣿⣿⣿⣿⣿"<<endl;
            cout<<"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢫⣿⠋⣰⢋⠔⠈⣁⣀⣄⣤⣤⣤⣄⣀⣈⣉⡽⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣞⢿⣿⣿⣿⢿⣿⣿⣿⣮⣟⠾⠽⡿⢟⣭⣭⣽⣻⣿⣿⣿⣟⣷⣾⣿⣿⣯⣿⣷⣾⣿⣿⣿⣻⣟⠻⠿⢯⣽⣛⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿"<<endl;
            cout<<"⣿⣿⡿⣿⣿⡿⣿⣻⢿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢋⡟⡡⢈⠕⣁⣤⣾⣻⣭⣭⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣯⢿⢿⣿⣿⣿⣿⣿⡿⣯⣻⣿⣿⣯⣟⣟⡶⠴⠾⢭⢿⣿⣿⢿⣿⣿⣟⢋⡙⣛⣛⣛⣟⣯⣭⡷⣶⣶⣿⣾⣟⣉⠩⣙⠻⠿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣾⣽⡿"<<endl;
            cout<<"⣿⣳⡿⣽⣳⣿⣳⡿⢿⣹⣾⣿⣿⣟⡾⣇⣿⡿⣿⣿⢣⠊⠀⠀⣡⣾⣿⣿⣿⣿⣿⣿⣿⣯⠷⣛⠻⣻⢞⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣷⣿⣟⣿⢿⠿⣿⣽⣟⠷⣯⣷⣮⣝⢿⣽⣟⣿⣿⣣⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⣯⣭⣴⣶⢲⡿⠟⢛⢋⣍⡤⠖⠒⠋⠑⠒⠬⣉⡛⠛⠻⠿⣷⣝⡻⢿⣿"<<endl;
            cout<<"⣟⡷⡽⣏⣷⡯⣟⣽⣿⡿⣟⣿⢳⣭⡿⣾⡭⣟⣟⠾⣧⣳⢀⣾⣿⣿⣿⡿⢿⢋⡽⣋⢴⡿⢓⡇⡒⣩⢚⠲⢻⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⡿⢿⣿⣟⣿⣿⣷⣷⣯⣷⣎⢻⣿⡟⢸⣿⣿⣿⣷⣭⣿⣿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⡿⢋⣼⠾⠛⠉⠀⠀⡈⢁⠀⢀⠀⠀⠀⢉⠛⠿⣦⣄⡙⠻⡷⣬"<<endl;
            cout<<"⣯⡽⢯⣽⣾⢿⣻⢟⣾⣿⢻⣞⣿⣿⣿⢷⣻⢿⣾⣟⣷⣿⠸⣿⣿⡿⢋⠮⠖⣛⣹⢿⠟⡰⣫⠤⠵⠤⣇⣩⠢⣌⡉⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⡿⣯⣾⣿⣿⣮⣭⣭⣭⣿⣿⣿⣯⣿⣷⣾⣿⣿⣿⣿⣿⣿⣏⣥⠴⢚⡩⢀⣀⣠⢠⠰⣎⣡⣦⠶⣷⣞⡶⢯⣝⣾⡵⣮⣝⢿⣦⠘⣷"<<endl;
            cout<<"⣷⣽⡿⣿⣹⣯⣷⡿⣿⢾⣿⣿⣿⣾⣿⣳⢭⡟⣶⣿⡿⣝⣷⠞⣉⣤⠔⣒⡽⣵⡻⣡⣞⡿⠛⠁⢐⠒⠠⡀⠈⠉⠙⠉⠉⣙⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣹⣿⣿⣿⢻⣗⠿⠿⢿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢟⣛⡭⠴⠚⠁⢂⡍⠈⢲⡶⣻⢞⡽⣞⡟⣷⣾⣽⣟⣾⣳⣿⣯⣿⣳⣝⣷⢸"<<endl;
            cout<<"⣟⢯⡽⣖⡻⢼⡯⣿⢞⣯⣟⢧⣳⡞⣵⡹⢮⣽⣿⠯⢛⣻⡷⠟⠋⢀⣀⣀⣮⣿⠾⢉⠉⠉⠉⠓⡂⡈⠂⠀⠀⠀⠀⠀⠠⣮⣯⢷⣶⠉⣙⡻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⣿⣿⣷⣾⣿⣷⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠛⢋⣥⠞⠉⠙⢶⣬⠅⢂⢷⡹⢏⡐⠻⣵⣯⡿⣽⣾⣳⢾⣻⣽⣯⣿⢷⣿⣿⣿⣿⣿⡎"<<endl;
            cout<<"⣯⢳⡽⢎⣷⣛⡾⣭⢟⡳⣎⢷⡳⣽⢣⣿⠿⣫⣔⠛⠩⠃⣀⣠⣴⣷⣿⣿⣿⣿⠿⣲⠨⠀⠀⠀⠈⢬⡂⠀⠀⠀⢀⣤⣾⣿⡾⣿⣿⣿⣗⠂⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣛⠯⠄⠂⢀⠤⠊⠅⢂⣀⠀⢀⣰⣿⠏⠘⣏⢶⣌⠛⢆⡙⢿⣿⣿⣷⣿⣿⣻⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷"<<endl;
            cout<<"⡞⣧⣡⢞⣶⢯⡷⣯⢾⣻⡝⣾⣱⢟⣋⣥⡾⠋⣟⠿⢠⣿⣿⣿⣿⣿⣿⣋⣿⣍⠀⠀⠸⠀⠀⠀⠆⣄⢸⠀⢀⣼⣿⣿⣿⣿⣿⡿⣿⣿⣿⡟⢷⡀⠀⠀⢻⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣻⠿⠟⠛⠛⡿⠋⣭⠢⡄⡄⠀⢠⠀⡀⠀⡠⢊⡱⢬⢄⡀⠄⣻⣅⢷⣿⣿⢀⠀⢱⡁⠍⠻⣦⠃⠄⠝⡻⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"<<endl;
            cout<<"⣽⢲⡝⣮⣽⣮⣷⡿⢿⣖⣫⡵⣶⣻⣯⣿⢁⣾⠃⢀⣾⣿⣿⣿⣿⣿⣿⣿⡿⣛⠙⠲⠁⠀⠀⠀⢸⠃⣆⣴⣿⣿⣿⣿⣿⣿⣿⣿⣳⣿⣿⣿⠈⣥⠀⠀⠘⣿⣯⢽⣻⣿⣿⣿⣿⣳⢯⡟⠀⢐⣾⡿⠁⡐⣢⢖⣽⣶⣷⣿⣿⣻⡾⣔⣒⣶⣖⣲⣿⣿⣿⣤⣽⢯⣽⣿⠀⢸⣿⡬⢤⣿⣷⡠⢄⡀⠊⠝⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣣"<<endl;
            cout<<"⣎⣧⡻⣵⢫⡞⢉⣭⣤⣶⣾⣿⣿⣿⣿⠇⣼⠃⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⡟⠋⠅⠒⠀⠀⢠⢀⢏⣼⣿⣿⣿⣿⣿⣿⣿⡿⣾⣿⣳⣿⣿⣷⣿⢙⣉⡀⠀⢿⣏⡞⣽⢿⣯⣗⣻⣟⡿⠁⢠⣿⡿⢁⠊⣰⡇⣸⣿⣿⣿⣷⣶⣷⡇⡐⠈⢁⢚⣿⣿⣿⣿⣿⣿⣿⣿⡗⠀⠸⢣⢉⣿⣿⣥⣯⣍⣒⣄⠀⠀⠨⣙⣿⣿⣿⣿⣿⣿⣿⣿⣷"<<endl;
            cout<<"⣞⢶⣹⠾⢋⣴⣻⣾⣿⣿⣿⣿⣿⢿⡯⢼⣽⣤⢤⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⣴⡄⠁⠀⠀⢸⣮⣿⣿⣿⣿⣿⡿⣿⠿⣟⠿⣳⢯⣷⣿⣿⣿⣿⢻⡆⠈⠓⡘⣿⣻⣌⣟⣷⡺⣷⠟⢀⣰⣿⢿⠃⠀⠐⠈⣻⣿⣿⣿⣿⣿⣿⣿⠇⡀⠀⠌⣼⣿⣼⣿⣿⣿⣿⣿⣿⢁⠀⠀⡘⢸⣿⣿⣿⣿⣿⣯⣻⣏⠄⠀⠀⢽⣿⣿⣿⣿⣿⣿⣿⣿"<<endl;
            cout<<"⡬⠟⢅⣴⣿⣾⣿⣿⣿⡿⢣⣟⣵⡿⣥⣾⠂⣏⣿⣿⣿⣿⣿⡿⣾⣿⢟⠤⠀⠊⣷⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣯⣿⣟⣿⣿⡜⣧⠀⠀⠘⣼⣷⣿⣶⣿⣿⣿⣧⣼⣿⣿⣿⠐⠂⠀⠠⣿⣿⣿⣿⣿⣿⣿⣿⠀⠁⡀⠌⣿⣽⣿⣿⣿⣿⣿⣿⣿⠌⠀⠀⡅⣼⣿⣿⣿⣿⣷⣼⣿⣿⡂⠀⠀⢸⣿⣛⡿⣿⣿⣭⡹⢞"<<endl;
            cout<<"⢀⣿⣿⣼⣿⣿⣿⣿⠟⣠⣿⣿⡿⣻⠿⢻⡄⣿⣿⣿⣿⣿⣿⣿⣿⡇⣛⠄⡀⢀⣿⠀⠀⢠⢻⣧⣿⣿⣿⣿⣿⣿⣿⡿⣼⣿⣧⡿⣿⣟⣿⡜⣿⣿⣿⣤⣄⣄⣸⢻⠘⢿⣿⣿⠠⡇⣿⢻⣼⣿⢿⣿⡿⢿⣿⣿⣿⣿⣿⣿⡤⡟⢀⠠⢃⠟⣻⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠠⠃⣿⣿⣿⣿⣿⣿⣿⣿⣧⡧⠠⡜⢸⡿⣿⣻⡜⣻⢿⣼⣛"<<endl;
            cout<<"⣼⣿⣿⡿⢟⡿⠟⣡⣾⣿⣿⡿⣵⢭⡔⣒⠏⣿⣿⣿⣿⠟⣜⣳⣿⣯⡽⠭⠭⠞⠉⠀⣠⣿⣿⣿⣿⣻⠹⣻⣿⣿⣿⣿⣿⡿⣿⣽⣿⣽⡿⣿⣝⡻⠿⢿⣮⠡⢀⢈⠇⠀⠈⠻⣦⠀⢡⣯⣗⣻⣷⣼⣿⣧⡻⣿⣿⣿⣟⣿⡾⣇⢺⣭⣯⣭⣿⣾⣿⣿⣿⣿⣿⣿⣆⣀⣤⣔⣸⣿⣿⣿⣿⣿⣿⣿⣿⡿⢡⠁⢺⡖⣿⣧⡟⣿⡽⢺⠿⣾"<<endl;
            cout<<"⣿⡿⠃⣤⣯⢖⡟⣽⣿⣿⣿⡶⣟⡏⢩⣏⣼⣿⣿⣿⡟⡾⣭⣿⢿⣌⠳⡶⢶⣢⣠⣾⣿⣿⣿⣿⣿⣿⣷⣤⡙⠛⠿⣿⣿⣿⣗⡿⣞⣯⣿⡽⣟⡿⣶⣶⣶⢶⠓⠁⠀⠀⠀⠀⠘⢿⡄⢸⡞⠘⡻⣿⣯⡙⡕⢏⣿⣿⣯⢿⢻⣿⣱⣮⣽⣿⣿⣿⣿⣿⠿⣷⣻⡿⡱⢫⢴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠈⢦⣨⣿⢿⣾⢯⣗⡻⢯⣛⢶"<<endl;
            cout<<"⢋⣴⢞⠛⣰⢫⣾⡿⣽⢟⣽⣇⠻⣿⣿⣿⣿⣿⣿⣙⢚⣽⣿⣷⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⡉⠛⠛⠻⢿⣿⣻⢾⣻⣯⣟⣯⡿⣭⢿⣿⣷⣤⣄⡀⠀⠀⠀⠙⢮⣞⢡⡷⣹⣿⣷⣾⣾⣿⡿⠿⣝⠺⣿⠋⠨⢽⣽⣿⣿⡟⣿⣟⣼⣟⠔⢛⢻⣿⣿⣿⣿⣿⢿⣿⡻⣽⣿⠃⡠⢚⠟⡻⢭⡓⣾⣻⣝⣯⣏⡟⣮"<<endl;
            cout<<"⡏⡞⣠⢾⣵⣿⡿⣵⢫⣿⡿⣿⢶⣄⣉⣥⡞⣹⠥⣘⢮⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣤⣄⣈⣉⣉⡛⠓⠻⠯⣿⣝⣯⢳⡝⣟⢯⣽⣳⣄⡀⢄⠀⠙⢶⣛⣼⠈⡿⢿⣿⠿⣯⣹⡼⡵⣻⣦⣀⣸⣿⣿⣷⢻⣧⣿⣿⣿⣤⣤⣿⣿⣿⣷⣝⢢⢏⡻⢿⡽⣾⡿⣶⡡⢹⡜⣩⠳⣦⠗⣞⠿⣝⢿⡳"<<endl;
            cout<<"⣚⣴⣾⣿⡻⣝⡞⣹⣿⣟⡟⣵⡿⢘⡲⡗⣼⡓⡼⡝⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣦⣭⣙⠻⢾⣹⢞⡼⣳⣿⣿⣦⣥⢤⣀⠙⠿⣄⣍⠈⢿⡇⢻⡇⣿⣵⣻⠹⣿⣿⡏⣿⣿⡷⣿⣗⣿⢿⣯⠻⣿⢯⣿⣿⣮⢷⡩⠖⡹⢿⣬⠳⣄⠉⠑⣖⢥⣋⠽⣾⣌⠳⣎⡳⣽"<<endl;
            cout<<"⣾⣿⡿⣭⣳⢯⣽⣯⣿⠏⣴⢛⠭⡽⢝⡜⢣⠰⣝⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣿⡎⢟⣷⣮⣍⠻⣷⢯⣿⣾⣯⣻⣻⣶⢦⡈⠛⢦⣚⢣⠈⣿⣾⡿⣿⢷⣿⠈⢷⡘⣿⡇⢿⣿⡟⡎⣿⣇⠙⢎⣿⣞⣿⣷⣟⢧⠱⡘⢮⣷⡍⢦⡀⠈⢗⣄⠣⠽⢿⡗⡎⠳⣜"<<endl;
            cout<<"⣿⠿⣵⣻⣎⡿⣳⡟⢥⢾⡋⣜⢪⢜⡾⣸⣧⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡓⣾⣾⣷⡿⣿⣦⡙⠺⣽⣿⣷⣿⣿⡽⣾⣱⢄⠉⠺⢄⣷⢱⡱⠺⡈⣿⡄⠸⣧⠘⣿⡈⢷⣷⣹⠘⣿⡕⢄⠁⡙⣿⣻⣿⣞⡷⣱⢂⠝⣿⣄⠒⢄⠀⠱⢽⣍⢳⡚⣬⢳⢌"<<endl;
            cout<<"⣏⠟⣵⣳⡯⣿⠋⡲⡏⢥⠫⣴⣧⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⢺⣿⡭⣞⣿⢻⠉⢳⣌⠹⢿⣿⣿⣿⣷⣯⣯⣓⠶⣄⡉⠺⣾⡱⡇⢻⢻⣄⠘⡅⣹⢳⡍⣯⣿⡆⢸⣷⠈⠆⠰⡌⢷⣟⣿⣿⣧⣯⢲⡌⢻⣷⣘⡢⠀⠈⠾⡑⡜⢎⡳⣎"<<endl;
            cout<<"⠭⣞⣽⢏⡞⠄⣖⢽⣸⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣭⣾⢫⠀⠸⠈⢻⢦⣙⠿⣿⣿⣿⣿⣿⣿⣾⣼⣣⣄⠻⣿⡄⠈⣯⡄⠸⠘⡿⣯⡘⣯⢿⡄⢻⡵⡀⠀⢻⡈⢿⣾⣿⣿⡵⣋⠾⣄⡹⣻⣝⣷⠄⠀⠈⢪⠄⡹⢞"<<endl;
            Credits();
            break;
    }
}