#include <iostream>
#include <windows.h>
#include <mmsystem.h>

using namespace std;

void Cursor(int, int);
char Theater_Game();
char Final_Destination();

int main() {

	int x, y;
	char e;
	char ch;									//ch=choose

	cout << "        ±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±\n"
		<< "        ±                                                                ±\n"
		<< "        ±                                                                ±\n"
		<< "        ±                                                                ±\n"
		<< "        ±       ±   ±      ±      ±     ±    ±        ±±±±±    ±±±±±     ±\n"
		<< "        ±       ±   ±     ± ±     ±±   ±±    ±        ±          ±       ±\n"
		<< "        ±       ±±±±±    ±±±±±    ± ± ± ±    ±        ±±±        ±       ±\n"
		<< "        ±       ±   ±    ±   ±    ±  ±  ±    ±        ±          ±       ±\n"
		<< "        ±       ±   ±    ±   ±    ±     ±    ±±±±±    ±±±±±      ±       ±\n"
		<< "        ±                                                                ±\n"
		<< "        ±                                                                ±\n"
		<< "        ±                                                                ±\n"
		<< "        ±                                                                ±\n"
		<< "        ±           A text-based adventure in which you must             ±\n"
		<< "        ±      correctly follow William Shakespeare's 1603 tragedy       ±\n"
		<< "        ±              'Hamlet: The Prince of Denmark'                   ±\n"
		<< "        ±                                                                ±\n"
		<< "        ±     Press Any Key and <ENTER>                                  ±\n"
		<< "        ±                  To Start This Adventure                       ±\n"
		<< "        ±                                                                ±\n"
		<< "        ±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±\n";
	cin >> e;

	if (e) {
		system("CLS");
		//Opening
		cout << "YOUR FATHER HAS JUST BEEN SLAIN HAMLET!!!\n CLAUDIUS, YOUR UNCLE, HAS MURDERED YOUR FATHER WHILE HE SLEEPS\n\nWILL YOU\n(a) Confront Claudius!?\n(b) Keep Quiet?  ";
		cin >> ch;
		system("CLS");
		//Right Choice 1
		if (ch == 'b') {
			cout << "You have decided to keep quiet and continue down the corrider\n\n";
			cout << "You hear a mysterious eerie sound behind you\nTurning around, you see it.\n"
				<< "It is the ghost, of your father. He would like you to avenge his death and kill Claudius...\n"
				<< "\nWILL YOU\n(a) Agree to kill the bastard?\n(b) Politely decline and let your father suffer?  ";
			PlaySound(TEXT("eerie.wav"), NULL, SND_SYNC);
			cin >> ch;
			system("CLS");
			//Right Choice 2
			if (ch == 'a') {
				cout << "Wise choice\n\n"
					<< "With your decision to kill Claudius you begin a search for this man\n"
					<< "You carry on down to the corrider\nYou are presented with two doors\n"
					<< "\nWILL YOU\n(a) Head down the West Wing?\n(b) Continue through the Eastern Quarters?  ";
				cin >> ch;
				system("CLS");
				//Right Choice 3
				if (ch == 'a') {
					cout << "You turn left and begin making your way down the West Wing\n\n"
						<< "On your way you run into a beautiful young lady whom you have never met\n"
						<< "\nWILL YOU\n(a) Continue on your search for Claudius?\n(b) Ask the young lady her name?  ";
					cin >> ch;
					system("CLS");
					//Right Choice 4
					if (ch == 'b') {
						cout << "You have decided to have a quick chat!\n\n"
							<< "~Good day my lord~\n\nthe young woman says.\n\n~For I am Lady Ophelia, how may'st service thee?~\n"
							<< "\nWILL YOU\n(a) Talk to Ophelia\n(b) Continue on?  ";
						cin >> ch;
						system("CLS");
						//Right Choice 5
						if (ch == 'a') {
							cout << "Deciding to talk with the girl makes you realize\nyou cannot hold proper conversation\n\n"
								<< "You take Ophelia by the wrist and hold her hand\nYou go the length of all your arm\n"
								<< "With your other hand you place it o'er your brow\nYou fall to such perusal of her face\n"
								<< "Like you would  draw it.\nLong stayed you so...\n"
								<< "\nWILL YOU\n(a) Continue the longing look?\n(b) Leave this fair maiden??  ";
							cin >> ch;
							system("CLS");
							//Right Choice 6
							if (ch == 'b') {
								cout << "You quickly leave the fair Ophelia as soon as you came across her.\n"
									<< "You continue down the long stretch of doors and are presented with\na few options on your journey.\n"
									<< "On your left you believe you can hear Claudius.\nAlthough on your right you can hear footsteps."
									<< "There is also a door straight ahead...\n"
									<< "\nWILL YOU\n(a) Turn left in hopes Claudius is there?\n(b) Make a right and see who is around the corner?\n"
									<< "(c) Continue onward towards the door!?  ";
								PlaySound(TEXT("voices.wav"), NULL, SND_SYNC);
								PlaySound(TEXT("footstepss.wav"), NULL, SND_SYNC);
								cin >> ch;
								system("CLS");
								//Right Choice 7
								if (ch == 'b') {
									cout << "You have decided to follow the footsteps\n"
										<< "Crouched down you press against the wall, waiting for the footsteps to get closer\n"
										<< "Suddenly, the footsteps have a body\nIt is the fair Ophelia once again, obviously you have caught her off guard.\n"
										<< "She appears to have dropped something when you collided\n"
										<< "You begin to read the paper\n\n"
										<< "~To the celestian and my sould's idol\nthe most beautified Ophelia\nIn her excellent white bosom these~\n"
										<< "\n\nYou realize it is the love letter you wrote...\n\n"
										<< "WILL YOU\n(a)Explain!?\n(b)Look for Claudius??  ";
									PlaySound(TEXT("footstepss.wav"), NULL, SND_SYNC);
									cin >> ch;
									system("CLS");
									//Right Choice 8
									if (ch == 'b') {
										cout << "You have decided to continue your search for your father's murderer\n"
											<< "On your hunt for Claudius you run into Guildenstern and Rosencrantz discussing\nan acting troupe that has just arrived\n"
											<< "Wanting to show your appreciation you greet the actors\n\n"
											<< "~Gentlemen, you are welcome to Elsinore.Your hands, come then.\n"
											<< "Th' appurtenance of welcome is fashion and ceremony. Let me comply with you in this garb\nlest my extent to the players,\n"
											<< "which, I tell you, must show fairly outwards, should more appear like entertainment than yours.\n"
											<< "You are welcome. But my uncle-father and aunt-mother are deceived.~\n\n"
											<< "The troupe would like to continue the conversation.\n"
											<< "\nWILL YOU:\n(a) Comply and talk?!\n(b) Discreetly leave?  ";
										cin >> ch;
										system("CLS");
										//Rgiht Choice 9
										if (ch == 'a') {
											//Theater_Game Mini game
											ch = Theater_Game();
											system("CLS");
											cout << "Congratulations on your play young Hamlet!\nAlthough... some of the things said to Lady Ophelia were quite odd\n"
												<< "The kingdom now believes you are crazier than ever and Claudius knows you\nare aware of hiswrong doings... "
												<< "You make your way down through the castle and suddenly stop.\nClaudius is seen, alone.\n"
												<< "\n~Now might I do it pay. Now he is a-praying.\nAnd now I'll do't. And so he  goes to heaven.\n"
												<< "And so am I revenged. That would be scanned.\nA villain kills my father, and, for that,\nI, his sole son, do this same villain send To heaven.~\n\n"
												<< "You realize that killing this man will not fully avenge your father's death...\n\n"
												<< "WILL YOU:\n(a) Kill this man while he prays!?!\n(b) Leave and find your mother?  ";
											cin >> ch;
											system("CLS");
											//Right Choice 10
											if (ch == 'b') {
												cout << "Your mother has called for you so now you make your way up to\nher chamber to see what is the matter. "
													<< "Your mother looks quite angry with you and begins to yell,\n\n"
													<< "~Hamlet, thou hast thy father much offended.~\n\n"
													<< "Caught by surprise you instantly retaliate\n\n"
													<< "~Mother, you have my father much offended.~\n\n"
													<< "Your mother is now more upset than ever.\n\n"
													<< "WILL YOU:\n(a) Challenge your mother?\n(b) Storm Out!?  ";
												cin >> ch;
												system("CLS");
												//Right Choice 11
												if (ch == 'b') {
													cout << "Deciding not to argue further with your mother you storm out\nand make your way up the palace steps\n"
														<< "On your way up you see Ophelia and she seems to be acting quite strange\nA little mad actually...\n"
														<< "You ignore her crazy fit and continue up the steps towards the hallway\n\n"
														<< "WILL YOU:\n(a) Take a right turn down the hall?\n(b) Turn left?  ";
													cin >> ch;
													system("CLS");
													//Right Choice 12
													if (ch == 'a' || 'b') {
														cout << "Turning down the hallway you see Claudius\ndiscussing Polonius's death with Laertes\n"
															<< "Claudius mentions how he knows you are the murderer but has decided\nto forgive you for what you have done\n"
															<< "Suddenly your mother bursts into the room\nYou hide behind a corner to not be seen\n\n"
															<< "~One woe doth tread upon another's heel,\nSo fast they follow.--Your sister's drowned Laertes.~\n\n"
															<< "~Drowned? Oh, where?~  Laertes quickly responded\n\n"
															<< "Your mother tells of Ophelia's drowning.\nSays how she was mad wiith grief and has drowned in the river.\n"
															<< "Laertes' runs out of the room after learning of his sister's\ndeath so soon to his father's\n"
															<< "\nWILL YOU:\n(a) Cry?!\n(b) Continue down the hall?  ";
														cin >> ch;
														system("CLS");
														//Right Choice 13
														if (ch == 'b') {
															cout << "Continuing down the hall you run into Horatio\n"
																<< "You begin to tell Horatio your plan on murdering the king\n"
																<< "You explain how you do not feel bad for\nRosencrantz and Guildenstern, but you do feel bad for Laertes\n"
																<< "Horatio agrees with you and believes you shall kill Claudius...\n"
																<< "\nThis is your last chance Hamlet...\n"
																<< "\nWILL YOU:\n(a) Kill Claudius?!\n(b) Back out and let your father suffer eternally?  ";
															cin >> ch;
															system("CLS");
															//Right Choice 14
															if (ch == 'a') {
																ch = Final_Destination();
																system("CLS");
																cout << "You have stabbed Laertes with the poison sword\n\n"
																	<< "~He is justly served. It is a poison tempered by himself.\n"
																	<< "Exchange forgivenness with me, noble Hamlet.\nMine and my father's death come not upon thee.\n"
																	<< "Nor thine on me.~\n\n"
																	<< "He is slain, but not before he has a chance to stab you as well Hamlet...\n\n";
																cin >> ch;
																system("CLS");
																cout << "\n\nCongratulations! Not only have you avenged your father's death, you have also\n"
																	<< "correctly followed the plot of Shakespeare's 'Hamlet'! Congrats!!";
																PlaySound(TEXT("Super_Mario_Bros.wav"), NULL, SND_SYNC);
																cin >> e;
																return 0;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		cout << "\n\nYou have made many a poor decisions Hamlet.\nFor that you shall be SLAIN! ";
		PlaySound(TEXT("GameOver.wav"), NULL, SND_SYNC);
		cin >> e;
		return 0;
	}
}