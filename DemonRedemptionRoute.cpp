#include <iostream>
#include "YoungDemon.cpp"
#include "TheApparition.cpp"
#include "BloodGolem.cpp"
#include "CerberusLose.cpp"
#include "CerberusWin.cpp"
using namespace std;
void DemonRedemptionRoute(){
    int PayUp;
    int OpenWallet;
    int Company;
    int Help;
    int Cerberuswin;
    int Quip;
    int Ready;
    float Door;
    cout<<"So it is redemption that you seek?"<<endl;
    cout<<"Very well then, let your redemption begin."<<endl;
    cout<<"You set your eyes upon a distant mountain."<<endl;
    cout<<"Therein lies the guardian of the underworld, a menace that has plagued the place for aeons."<<endl;
    cout<<"Cerberus, the three headed hound dog."<<endl;
    cout<<"You grab your mighty blade and begin your trek towards its foreboding lair."<<endl;
    cout<<"You're barely a couple miles into your adventure before a demon interrupts you."<<endl;
    cout<<"Young Demon: Hey you! You're not from these parts are ya?"<<endl;
    cout<<"Young Demon: You need some manners, can't be walkin' round these parts and not paying the fee heeheeheee"<<endl;
    cout<<"Young Demon: You look confused, I need the fee for crossing this here road, now pay up before I make you pay up."<<endl;
    cout<<"1. Pay Up."<<endl;
    cout<<"2. I'd rather die."<<endl;
    cin>>PayUp;
    switch (PayUp){
        case 1:
            cout<<"Young Demon: Woa wait you're actually paying?"<<endl;
            cout<<"Young Demon: Quick quick open your wallet quick quick type- I mean do something!"<<endl;
            cin>>OpenWallet;
            cout<<"Young Demon: Hey wait a minute you're flat broke! Why I oughtta!"<<endl;
            YoungDemon();
            break;
        case 2:
            cout<<"Young Demon: Hey now wait a minute I didn't mean it like that we don't HAVE to fight."<<endl;
            cout<<"Young Demon: ...."<<endl;
            cout<<"Young Demon: Please don't hit me too hard...."<<endl;
            cout<<"Young Demon: Go on, throw the first punch! I can take it! Typ- Do something!"<<endl;
            cin>>OpenWallet;
            YoungDemon();
    }
    cout<<"Young Demon Salazar: Owowowowow!!! Did you have to hit me that hard?"<<endl;
    cout<<"Young Demon Salazar: I know I might look tough but I'm not invincible man!"<<endl;
    cout<<"You apologize to the Young Demon for spectacularly kicking his, well we can't say that word."<<endl;
    cout<<"Young Demon Salazar: Well at least you didn't kill me..."<<endl;
    cout<<"Young Demon Salazar: Lucky for you I'm a nice guy. So I'll accompany you throughout the underworld, awesome dontcha think?"<<endl;
    cout<<"1. I'd appreciate the help!"<<endl;
    cout<<"2. I'd much prefer I never see you again."<<endl;
    cin>>Company;
    switch (Company){
        case 1:
            cout<<"Young Demon: Hah! You won't regret it man!"<<endl;
            break;
        case 2:
            cout<<"Young Demon: Heh, funny guy you are. Ok let's get goin!"<<endl;
            break;
    }
    cout<<"You find yourself a companion, whether you wanted him here or not."<<endl;
    cout<<"He runs ahead of you showing you the sights of the underworld."<<endl;
    cout<<"It's a disjointed adventure you find yourself in as the Young Demon points at every bit of cool items you might find."<<endl;
    cout<<"It isn't long before you start nearing your next trial."<<endl;
    cout<<"The air gets murkier, and ahead of you lies a pitch black forest."<<endl;
    cout<<"The once red and orange palette now engulfed in pitch black shadows."<<endl;
    cout<<"The Young Demon is nowhere to be found."<<endl;
    cout<<"You are alone."<<endl;
    cout<<"Or so it seems at the very least..."<<endl;
    cout<<"You hear the cracks of branches echo around you."<<endl;
    cout<<"It's as if someone is breathing right down your neck."<<endl;
    cout<<"You turn back and see noone."<<endl;
    cout<<"What now?"<<endl;
    cout<<"1. Scream for Help"<<endl;
    cout<<"2. Give up."<<endl;
    cout<<"3. Set the place ablaze."<<endl;
    cin>>Help;
    switch (Help){
        case 1:
            cout<<"You scream and you scream for help."<<endl;
            cout<<"Your throat begins to dry, it's a hopeless effort."<<endl;
            cout<<"Yet you continue to scream, in the hopes that someone might hear."<<endl;
            cout<<"In your panic you see something beginning to approach you."<<endl;
            cout<<"A tall lanky figure now stands before you."<<endl;
            cout<<"It seems to be at least 12 feet tall."<<endl;
            cout<<"It stares down upon your pitiful attempt to escape."<<endl;
            cout<<"It pities you."<<endl;
            cout<<"It begins to walk off as if it's disappointed, was it expecting something more?"<<endl;
            cout<<"Nevertheless you seem to have avoided a gruesome fate."<<endl;
            cout<<"You can't help but feel that you messed up somehow..."<<endl;
            cout<<"The forest dissipates."<<endl;
            Cerberuswin=0;
            break;
        case 2:
            cout<<"You fall to your knees and give up all hope."<<endl;
            cout<<"You can't help but think that you could've done more."<<endl;
            cout<<"You stare into your hands, hands that have slaughtered thousands."<<endl;
            cout<<"Once a mighty warrior brought to his knees by a being he can't even see."<<endl;
            cout<<"You hear a crack in the distance."<<endl;
            cout<<"There before you lies a 12 foot tall Apparition."<<endl;
            cout<<"It looks down upon you with disgust."<<endl;
            cout<<"Your very presence irritates the being."<<endl;
            cout<<"You start to stand, but the disadvantageous position you've put yourself in allows the figure to get in a cheeky strike."<<endl;
            cout<<"Its claws are plunged into your chest, the last thing you see before fading away into unconciousness."<<endl;
            cout<<"Is it's mangled face, filled with utter disgust for your very existence."<<endl;
            cout<<"Could it have been different if you were just a little bit more courageous?"<<endl;
            cout<<"Oh well, too late now. You fade to black and your journey ends with a whimper."<<endl;
            cout<<"██╗░░░██╗░█████╗░██╗░░░██╗  ██████╗░██╗███████╗██████╗░ ██████╗░░█████╗░██████╗░  ███████╗███╗░░██╗██████╗░"<<endl;
            cout<<"╚██╗░██╔╝██╔══██╗██║░░░██║  ██╔══██╗██║██╔════╝██╔══██╗ ██╔══██╗██╔══██╗██╔══██╗  ██╔════╝████╗░██║██╔══██╗"<<endl;
            cout<<"░╚████╔╝░██║░░██║██║░░░██║  ██║░░██║██║█████╗░░██║░░██║ ██████╦╝███████║██║░░██║  █████╗░░██╔██╗██║██║░░██║"<<endl;
            cout<<"░░╚██╔╝░░██║░░██║██║░░░██║  ██║░░██║██║██╔══╝░░██║░░██║ ██╔══██╗██╔══██║██║░░██║  ██╔══╝░░██║╚████║██║░░██║"<<endl;
            cout<<"░░░██║░░░╚█████╔╝╚██████╔╝  ██████╔╝██║███████╗██████╔╝ ██████╦╝██║░░██║██████╔╝  ███████╗██║░╚███║██████╔╝"<<endl;
            cout<<"░░░╚═╝░░░░╚════╝░░╚═════╝░  ╚═════╝░╚═╝╚══════╝╚═════╝░ ╚═════╝░╚═╝░░╚═╝╚═════╝░  ╚══════╝╚═╝░░╚══╝╚═════╝░ "<<endl;
            exit(0);
            break;
        case 3:
            cout<<"Giving up and screaming are for cowards, real men light forests ablaze."<<endl;
            cout<<"You spew flames across the entire forest."<<endl;
            cout<<"The once black area now brims with an orange gleam."<<endl;
            cout<<"You see a 12 foot tall Apparition emerge from the flames."<<endl;
            cout<<"It has a smile etched onto its face."<<endl;
            cout<<"It screams 'THAT'S MORE LIKE IT'"<<endl;
            cout<<"You feel a surge of excitement, and you prepare to face this unknown being."<<endl;
            cout<<"Are you ready?"<<endl;
            cout<<"1. Absolutely."<<endl;
            cout<<"2. Let's end this"<<endl;
            cin>>Quip;
            switch (Quip){
                case 1:
                    cout<<"You ready your blade for this fight."<<endl;
                    cout<<"It is time."<<endl;
                    TheApparition();
                    cout<<"The Apparition lies before you dying."<<endl;
                    cout<<"All it takes is one final plunge of your blade into it's chest before it finally leaves this world."<<endl;
                    cout<<"The forest arround you dissipates leaving only your memory as a memento of what that being was."<<endl;
                    cout<<"You feel as if though you've done the world a favor by ridding it of such a nuisance."<<endl;
                    cout<<"You look down one last time at the Apparition's dying body and notice its horn shining brightly."<<endl;
                    cout<<"You take it into your hands and save it for later"<<endl;
                    cout<<"*+1 Apparition Horn!*"<<endl;
                    Cerberuswin=1;
                    break;
                case 2:
                    cout<<"What are you a superhero?"<<endl;
                    cout<<"Didn't know you needed quips."<<endl;
                    cout<<"Good luck."<<endl;
                    TheApparition();
                    cout<<"The Apparition lies before you dying."<<endl;
                    cout<<"All it takes is one final plunge of your blade into it's chest before it finally leaves this world."<<endl;
                    cout<<"The forest arround you dissipates leaving only your memory as a memento of what that being was."<<endl;
                    cout<<"You feel as if though you've done the world a favor by ridding it of such a nuisance."<<endl;
                    cout<<"You look down one last time at the Apparition's dying body and notice its horn shining brightly."<<endl;
                    cout<<"You take it into your hands and save it for later"<<endl;
                    cout<<"*+1 Apparition Horn!*"<<endl;
                    Cerberuswin=1;
                    break;
            }}
            cout<<"Young Demon: Hey man! Where were you??"<<endl;
            cout<<"Young Demon: I saw you just vanish into thin air and I was like what the hell is going on!"<<endl;
            cout<<"The young demon rambles on and on about how scared he was as you keep walking."<<endl;
            cout<<"You're almost there, the final trial approaches."<<endl;
            cout<<"You and the Young Demon have your guard up in case something like that happens again."<<endl;
            cout<<"It's a terrifying thought, something so unexpected could end you so easily..."<<endl;
            cout<<"After what seems like days you finally arrive at the mountain of blood."<<endl;
            cout<<"At the top is your final trial. Cerberus, hellhound of the underworld."<<endl;
            cout<<"He is all that stands between you and redemption in the eyes of Helios."<<endl;
            cout<<"You and the young demon hurriedly rush up the steep terrain."<<endl;
            cout<<"Viscera splatters, blood stains your feet, and flesh tears beneath your feet."<<endl;
            cout<<"Perhaps you were too loud, but you hear a rumbling in the distance."<<endl;
            cout<<"Something approaches, and it isn't something nice..."<<endl;
            cout<<"You can barely react when something shakes the ground beneath you."<<endl;
            cout<<"It came from the sky in a gross display of pure power."<<endl;
            cout<<"There before you is the Blood Golem, guardian of Cerberus."<<endl;
            cout<<"Its monstrous size terrifies you."<<endl;
            cout<<"Not like it matters but, are you ready to face him?"<<endl;
            cout<<"1. End his reign of terror"<<endl;
            cout<<"2. Give me a minute..."<<endl;
            cin>>Ready;
            switch (Ready){
                case 1:
                    cout<<"The Blood Golem roars."<<endl;
                    cout<<"The Young Demon hides behind a mound of flesh."<<endl;
                    cout<<"Your final trial is here."<<endl;
                    cout<<"Good luck."<<endl;
                    BloodGolem();
                case 2:
                    cout<<"I did tell you, it doesn't matter if you're ready or not."<<endl;
                    cout<<"The Blood Golem roars."<<endl;
                    cout<<"The Young Demon hides behind a mound of flesh."<<endl;
                    cout<<"Your final trial is here."<<endl;
                    cout<<"Good luck."<<endl;
                    BloodGolem();
            }
            cout<<"The huge beast is now dead. You have ended its life."<<endl;
            cout<<"Its thirst for blood has been met with a thirst for justice."<<endl;
            cout<<"You feel a sense of satisfaction ending something so heinous."<<endl;
            cout<<"You watch the Young Demon approach you with glee to congratulate you on your victory."<<endl;
            cout<<"But you know your journey is not yet over."<<endl;
            cout<<"Before you lies the true final trial."<<endl;
            cout<<"Cerberus the three headed hound dog is right ahead."<<endl;
            cout<<"This final gate is all that stands between you and redemption."<<endl;
            cout<<"Are you read-, no. Of course you're ready. Go through."<<endl;
            cin>>Door;
            if (Cerberuswin=0){
                cout<<"You have finally arrived."<<endl;
                cout<<"Cerberus growls at you and snaps his jaws."<<endl;
                cout<<"The Young Demon shakes, he is terrified."<<endl;
                cout<<"You stand before the hound."<<endl;
                cout<<"You aren't capable."<<endl;
                cout<<"You've come this far but you feel as if though you aren't strong enough."<<endl;
                cout<<"Regardless of how you feel."<<endl;
                cout<<"This is what you came for. Now fight for it."<<endl;
                cin>>Door;
                CerberusLose();
                cout<<"Of course it ends this way."<<endl;
                cout<<"How could you have hoped to beat something so ferociously powerful."<<endl;
                cout<<"Your vision begins to dim, knowing that you were never strong enough for redemption."<<endl;
                cout<<"If only you were stronger."<<endl;
                cout<<"Maybe you could have taken down the beast."<<endl;
                cout<<"The Young Demon tries his best to bring you back, shaking you with tears in his eyes."<<endl;
                cout<<"His only hope has vanished."<<endl;
                cout<<"You have failed."<<endl;
                cout<<"The hound's reign of terror will continue forever."<<endl;
                cout<<"But, it doesn't matter to you does it?"<<endl;
                cout<<"After all, your choices don't matter."<<endl;
                cout<<"Right? :)"<<endl;
                cout<<"Ending 3/12, Too weak for your own good."<<endl;
                cout<<"[xx4x-xxxx-xxxx]"<<endl;
                cin>>Door;
                Credits();
            }
            else {
                cout<<"You have finally arrived."<<endl;
                cout<<"Cerberus growls at you and snaps his jaws."<<endl;
                cout<<"The Young Demon shakes, he is terrified."<<endl;
                cout<<"You stand before the hound."<<endl;
                cout<<"You smile to yourself, this could be it. Your shot at redemption."<<endl;
                cout<<"Suddenly you feel a surging power."<<endl;
                cout<<"It courses through your veins."<<endl;
                cout<<"The horn you got earlier shines it's beautiful rays."<<endl;
                cout<<"It forms a holy light, before you now is the holy sword of Dante."<<endl;
                cout<<"It is your final hope for redemption."<<endl;
                cout<<"You cast away the hunk of iron you called your sword and replace it with this holy relic."<<endl;
                cout<<"Cerberus trembles and whimpers, Are you ready to end this for your redemption once and for all?"<<endl;
                cin>>Door;
                CerberusWin();
                cout<<"In one triumphant blow you destroy the beast."<<endl;
                cout<<"It lies there as a pile of ash."<<endl;
                cout<<"You've done it."<<endl;
                cout<<"Your journey is over."<<endl;
                cout<<"Or, that's what it seems like."<<endl;
                cout<<"You feel an emptiness in your soul."<<endl;
                cout<<"Is this redemption?"<<endl;
                cout<<"You will be heralded as a hero of the underworld."<<endl;
                cout<<"But is this really what you wanted?"<<endl;
                cout<<"Was it worth it Theseus?"<<endl;
                cout<<"To end that which Delilah worked so hard for?"<<endl;
                cout<<"Cerberus the guardian of the depths of hell is now slain."<<endl;
                cout<<"As much of a monster as he was he served his purpose."<<endl;
                cout<<"With him gone, what have you accomplished?"<<endl;
                cout<<"You are now the new guardian of the depths."<<endl;
                cout<<"Cursed to torment the souls of the damned for an eternity."<<endl;
                cout<<"The Young Demon watches you as you look all distraught."<<endl;
                cout<<"He pities you."<<endl;
                cout<<"Young Demon: Go. I'll stay."<<endl;
                cout<<"You turn your head in shock, a young demon with an entire life ahead of him is sacrificing his for yours."<<endl;
                cout<<"Young Demon: You've done enough man. Enjoy the fruits of your labors, I'll stay."<<endl;
                cout<<"You can't believe what you're hearing."<<endl;
                cout<<"You try to run towards him to embrace him one last time."<<endl;
                cout<<"Your foot loses its grip and you slip into the now open gate of Hades."<<endl;
                cout<<"You fall and you fall for what feels like years."<<endl;
                cout<<"There is no redemption for the unforgivable is there?"<<endl;
                cout<<"You continue to fall. Unsure if you'll ever make it to solid ground."<<endl;
                cout<<"You know that you will never see the underworld or the surface ever again."<<endl;
                cout<<"Theseus will never have his redemption."<<endl;
                cout<<"Because of your choices."<<endl;
                cout<<"They don't matter at the end of the day though."<<endl;
                cout<<"Isn't that right? :)"<<endl;
                cout<<"Ending 4/12, No redemption for the unforgivable."<<endl;
                cout<<"[xxx1-xxxx-xxxx]"<<endl;
                cin>>Door;
                Credits();
            }
    }