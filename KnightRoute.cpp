#include <iostream>
#include "KnightDelilahRoute.cpp"
#include "KnightRichesRoute.cpp"
using namespace std;
void KnightRoute(){
        int KnightRouteChoice;
        cout<<"You've made up your mind? Splendid."<<endl;
        cout<<"You decide to enter the world as a novice knight."<<endl;
        cout<<"A place of mystical wonder, a place where wine and bread is the only kind of food."<<endl;
        cout<<"A place where a couple gold coins can keep you going for months."<<endl;
        cout<<"The kind of place where dragons are slain by mighty warriors."<<endl;
        cout<<"Yet you stand here at the precipice of a new adventure, awaiting to see what awaits you."<<endl;
        cout<<"You run to the adventurer's guild to see what kind of jobs are being offered."<<endl;
        cout<<"You pass faces old and new, you greet neither as you're far too excited."<<endl;
        cout<<"You kick open the doors ready to face the world."<<endl;
        cout<<"As you're about to question the guildmaster, you're approached by a friend you haven't seen in ages."<<endl;
        cout<<"He explains to you that your childhood friend Delilah has been captured by the Orcs, and it's up to you to save her."<<endl;
        cout<<"As he's explaining all of this you overhear the guildmaster in the background speaking of untold riches."<<endl;
        cout<<"Riches hidden behind a corrupt king's fortress, the kind of riches you'll never find again."<<endl;
        cout<<"You're faced with an ultimatum, your childhood friend Delilah, or untold riches."<<endl;
        cout<<"The Choice is yours."<<endl;
        cout<<"1. Rescue Delilah"<<endl;
        cout<<"2. Riches are far more important"<<endl;
        cin>>KnightRouteChoice;
        switch (KnightRouteChoice){
            case 1:
                KnightDelilahRoute();
                break;
            case 2:
                KnightRichesRoute();
                break;
        }
}
