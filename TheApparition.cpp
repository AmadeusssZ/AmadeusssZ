using namespace std;
void TheApparition()
{
  int choice;
  int mhp, hp, i, init, atk, def, matk, mdef, hurt, mhurt, agi, magi;
  atk = 15;
  def = 15;
  agi = 6;
  matk = 15;
  mdef = 15;
  magi = 5;

  srand((unsigned)time(0));
  init = rand()%2+1;
  mhp = 150;
  hp = 150;
  cout<<"===== The Apparition =====\n\n";
  cout<<"⠐⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣶⣶⣦⡀⠀⡀⢀⣴⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠄⠠⠠⠀⠄⢂⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠀⠀⠀⡀⠀⠄"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠄⠀⢻⣿⣿⣿⣿⣿⡟⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠐⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠈⠉⣿⣿⣛⣻⣛⣞⣳⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⢀⠀⠂⠀⠁⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣷⣾⣿⣿⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣾⣿⣿⣿⣿⣏⣿⣿⣿⣿⣿⣿⣆⡀⠀⠀⠀⠀⠀⠀⠀⠰⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⡀⠄⠈⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⢿⣷⣄⠀⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣟⣯⣷⣻⣽⣯⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠈⠀⠀⠀⠀⠁⠀⠀⢀⠀⢀⠀⢰⣿⣿⣿⠟⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠛⢿⣽⢿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⢀⣿⣿⡿⠁⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠈⢻⣿⣻⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠐⠀⠀⠀⠠⠀⠀⠀⠀⠄⢀⣿⣿⡿⠁⠀⠀⠀⠀⠈⠛⠻⣿⣿⣿⣿⠟⠋⠀⠀⠀⠀⠀⢿⣟⣿⡄⠀⠁⠀⠀⠈⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⡿⠁⠀⠀⢀⠀⢠⣴⣶⣶⣿⣿⣿⣿⣶⣶⣶⣄⠀⠐⠀⠈⢿⡿⣷⡄⠀⠄⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠁⠀⠈⠀⠀⠀⢀⣾⣿⠟⠁⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠻⣿⣿⡀⠀⠀⠀⠀⠀⠐⠀⠀"<<endl;
  cout<<"⠀⠀⠀⢀⠀⠀⠐⠀⠀⢀⣾⣿⠏⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠈⢿⣿⡀⠀⠂⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠂⢀⣼⣿⠃⠀⠀⠀⠀⠄⠀⠀⠀⠀⣹⣿⣿⣿⣿⣿⣿⣿⣿⣯⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⡄⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⡟⠛⠛⠛⠛⠻⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣄⠀⠀⠄⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠃⠀⠀⠀⠀⠀⠄⠀⠀⣼⣿⣿⣿⠀⠀⠀⠀⠀⠀⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⠧⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⢨⣿⡇⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠰⣿⡇⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⢠⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⡆⠀⠀⠀⠀⠀⠀⣸⣿⠃⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠄⠀⠀⠀⣿⣿⠀⠀⠀⠀⢀⣤⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⣿⣿⣿⣆⡀⠀⠀⠀⢀⣿⣿⠀⠀⠀⠂⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡆⠀⠀⠐⣿⣿⣿⣻⣿⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠐⣿⣿⡽⣿⣿⠀⠀⠀⢨⣿⣿⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⠀⠨⣿⣿⣾⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⢻⣿⣿⣿⡇⠀⠀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠠⠀⠀⠀⠀⣿⣿⡇⠀⠀⠀⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⢼⣿⣿⣿⡧⠀⠀⠀⣿⣿⡟⠀⠀⠀⠀⠈⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣇⠀⠀⠀⠘⣿⣿⣿⠀⠀⠀⠀⠀⢀⠀⠀⠈⠀⠀⠀⠀⠀⠈⣿⣿⣿⠁⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⢀⣿⣯⣿⡀⠀⠀⠀⢿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠐⠀⠀⢻⣿⣿⠁⠀⠀⣼⣿⣿⣇⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⡇⠀⠀⠀⢸⣿⣿⡀⠀⢀⠀⠀⠠⠀⠀⠀⡀⠀⠀⠀⡀⠀⢼⣿⡟⠀⠀⢠⣿⣿⣿⡏⠀⠀⠀⠂⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠂⠀⠀⠀⢿⣿⣿⣿⡆⠀⠀⠀⢿⣿⣇⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⡇⠀⢰⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠈⠀⠀⠀⠀⠸⣿⣿⣿⢷⡀⠀⠀⢸⣿⣿⠃⠀⠀⠀⢀⠈⠀⠀⠀⠀⠄⠀⠀⠈⣿⣿⡇⢠⡿⣿⣿⣿⣿⠀⠀⠀⠀⠄⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠈⠀⠐⣿⣿⢻⣟⠇⠀⠀⢸⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⢼⣿⡇⢸⣱⡿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠁⠀⠀⠀⠀⢹⣿⠈⠻⣷⠀⠀⣸⣿⠁⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠄⠈⠀⠈⣿⡇⣼⠟⠁⣿⣿⠁⠀⠀⠀⠀⠐⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠰⠀⠀⠰⠀⠀⠈⣿⣇⠀⠸⣷⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠀⠀⠀⠀⠀⠀⣿⡿⠇⠀⢰⣿⡿⠀⠀⠀⠆⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣿⣇⠀⠀⣸⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠁⠀⣿⣷⠀⢠⡿⣻⠃⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠻⠄⢰⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣆⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⢀⠀⠀⢀⠀⠀⠀⠀⢀⢠⣤⣾⣿⣿⣿⠀⠀⠀⠀⠀⡀⠀⠂⠀⢀⠀⠀⠀⠈⠀⣀⣿⣿⣯⣀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⠿⣿⠿⢿⡿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⣿⢿⣿⣿⣿⠿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
  cout<<"⠀⠀⠀⢀⠀⠀⠈⠀⢠⠿⠁⠐⠏⠀⠀⠘⠇⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠻⠄⠀⠰⡷⠀⠈⢿⡀⠀⠀⠀⢀⠀⠀⠀"<<endl;

  if (init == 1) {
  cout<<"Your move.\n==========\n";
  while (hp > 0 || mhp > 0) {
    cout<<"Choose your move?\n1 - Hell Flames\n2 - Normal Attack\n3 - Guard\n";
     do{cin>>choice;}while(choice>3 || choice<1);
    switch (choice) {
      case 1:
        atk = rand()%20+10;
	def = rand()%10+10;
	agi = rand()%5;
	break;
      case 2:
        atk = rand()%5+10;
	def = rand()%10+10;
	agi = rand()%15;
        break;
      case 3:
        atk = rand()%10+10;
	def = rand()%20+10;
	agi = rand()%5;
	break;
	}
    choice = rand()%3;
    switch (choice) {
      case 1:
        matk = rand()%20+10;
	mdef = rand()%10+10;
	magi = rand()%5;
	break;
      case 2:
        matk = rand()%5+10;
	mdef = rand()%10+10;
	magi = rand()%15;
        break;
      case 3:
        matk = rand()%10+10;
	mdef = rand()%20+10;
	magi = rand()%5;
	break;
	}


    mhurt = (atk - magi) - (mdef/atk);
    if (mhurt < 0) {
      mhurt = 0;
    }
    mhp = mhp - mhurt;
    cout<<"You did "<<mhurt<<" damage to The Apparition!\n";
    cin.get();

    if (mhp < 1) {
      cout<<"You killed  The Apparition!! You won with "<<hp<<" hp left. (Input any character to continue!)\n";
      cin.get();
      break;
      }
    cout<<"The Apparition now have "<<mhp<<" hp left.\n";
    hurt = (matk - agi) - (def/matk);
    if (hurt < 0) {
      hurt = 0;
    }
    hp = hp - hurt;
    cout<<"The Apparition hit you for "<<hurt<<" damage.\n";

    if (hp < 1) {
      cout<<"You died. The Apparition still has "<<mhp<<" hp left. Your journey is over.\n";
      cin.get();
      exit (0);
      }
cout<<"You now have "<<hp<<" hp left.\n\n";
     }
     }


  else {
  cout<<"The Apparition starts.\n==============\n";
    while (hp > 0 || mhp > 0) {
    choice = rand()%3;
    switch (choice) {
      case 1:
        matk = rand()%20+10;
	mdef = rand()%10+10;
	magi = rand()%5;
	break;
      case 2:
        matk = rand()%5+10;
	mdef = rand()%10+10;
	magi = rand()%15;
        break;
      case 3:
        matk = rand()%10+10;
	mdef = rand()%20+10;
	magi = rand()%5;
	break;
	}

    hurt = (matk - agi) - (def/matk);
    if (hurt < 0) {
      hurt = 0;
    }
    hp = hp - hurt;
    cout<<"The Apparition hit you for "<<hurt<<" damage.\n";

    if (hp < 1) {
      cout<<"You died. The Apparition still has "<<mhp<<" hp left. Your Journey is over\n";
      cin.get();
      exit (0);
      }
 cout<<"You now have "<<hp<<" hp left.\n\n";
    cout<<"Choose your move?\n1 - Hades' Blade\n2 - Basic Attack\n3 - Guard\n";
     do{cin>>choice;}while(choice>3 || choice<1);
    switch (choice) {
      case 1:
        atk = rand()%20+10;
	def = rand()%10+10;
	agi = rand()%5;
	break;
      case 2:
        atk = rand()%5+10;
	def = rand()%10+10;
	agi = rand()%15;
        break;
      case 3:
        atk = rand()%10+10;
	def = rand()%20+10;
	agi = rand()%5;
	break;
        }



    mhurt = (atk - magi) - (mdef/atk);
    if (mhurt < 0) {
      mhurt = 0;
    }
    mhp = mhp - mhurt;
    cout<<"You did "<<mhurt<<" damage to The Apparition!\n";
    cin.get();

    if (mhp < 1) {
      cout<<"You killed The Apparition!! You won with "<<hp<<" hp left. (Input any character to continue!)\n";
      cin.get();
      break;
      }
    cout<<"The Apparition now has "<<mhp<<" hp left.\n";
  } } }
