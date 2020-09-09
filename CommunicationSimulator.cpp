/*
NAME:IVAN BORISENCO
NAME:PATRICK LUGASSY
ID:317366102
ID:319266177
CAMPUS:ASHDOD
*/
#include "CommunicationSimulator.h"
void CommunicationSimulator::SumilatorRun()
{
	MobilePhone* ar[] =
	{
		new Nokia9101(1),                      // creat phones and put the in dyinamic array//
		new Nokia3310(2),
		new SamsungS1(3),
		new SamsungS9(4),
		new SamsungSAdvance(5)
	};
	//ar[0]->about(); //INFO ABOUT THIS PHONE
	//ar[1]->about(); //INFO ABOUT THIS PHONE
	//ar[2]->about(); //INFO ABOUT THIS PHONE
	//ar[3]->about(); //INFO ABOUT THIS PHONE
	//ar[4]->about(); //INFO ABOUT THIS PHONE

	/*NOKIA9101*/
	Nokia9101 one(11);
	one.about();//INFO ABOUT PHONE
				/*
				NOKIA9101 Number: 11
				Support: VoiceCall, TextMessage
				Multimedia types:Camera
				*/
	one.number();//THIS PHONE NUMBER 11
	one.model();//MODEL OF PHONE NOKIA9910
	one.type();//return MULTIMEDIA TYPES(camera) 
			   /*
			   AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
			   */
	one.format();//CAMERA FORTMAT(png)
				 /*
				 AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
				 */
	one.takePicture(); one.takePicture();//TAKING A PICTURE
	one.takePicture();						 /*
											 AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
											 */
	one.removePicture(1);//REMOVING CERTAIN PICTURE
						 /*
						 AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
						 */
	one.picturesList();//SHOWING GALLERY
					   /*
					   AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
					   */
					   /*DIALING SIMULATOR WITH THE OPTION OF ANWSERING OR REJECTING*/
	ar[0]->dial(2, ar);

	/*
	CALLING PHONE WITH PHONE NUMBER 2 AND PHONE 2 WILL HAVE THE OPTION
	TO AWNSER OR REJECT CALL
	*/
	/*SENDING MSG WITH THE OPTION OF WRITING IT AND ALLOWING OTHER PHONE TO ACCPET/REJECT MSG*/
	ar[0]->sendMsg(4, ar);
	getchar();
	/*
	SENDING MSG TO PHONE WITH PHONE NUMBER 3
	WRITING A MSG AND SENDING IT
	ALLOWING SECOND PHONE OPTION TO
	ACCEPT/REJECT MSG
	*/
	/*SENDING MSG WITH A PHONE THAT DOESNT HAVE MSG OPTION AND WILL GIVE US ERROR*/

	cout << "\n\n\n" << endl;
	getchar();

	/*NOKIA 3310*/
	Nokia3310 two(22);
	two.about();//INFORMATION ABOUT THIS PHONE
				/*
				NOKIA9101 Number: 22
				Support: VoiceCall
				Multimedia types:AudioPlayer
				*/
	two.model();// MODEL OF PHONE NOKIA3310
	two.format(); //FORMAT OF AUDIO PLAYER(WAV)
	two.type();  //THE TYPE OF THE MULTIMEDIA APPLICATION
	ar[1]->dial(4, ar);
	/*
	dial from Nokia 3310 to another phone
	*/
	ar[1]->sendMsg(5, ar);
	getchar();
	/*
	try to send message from Nokia 3310 to another phone (return : ERROR 55 ! )
	*/
	two.addSong();//ADDING NEW SONG
	two.addSong();
	/*
	AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
	METHOD THAT ALLOWS THE USER TO ADD A NEW SONG TO THE PHONE
	*/
	two.play(1);
	/*
	AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
	ALLOWS USER TO PLAY A PICKED SONG
	*/
	two.RemoveSong(1);
	/*
	AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
	ALLOWS USER TO DELETE A PICKED SONG
	*/
	two.stop();
	/*
	AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
	STOPPING THE MUSIC
	*/
	cout << "\n\n\n" << endl;
	/*SAMSUNGS1*/
	SamsungS1 three(33);
	three.helloMovie();
	/*
	start the phone with 'hello Samsung' on screen
	*/
	three.about();
	/*
	SamsungS1 Number: 33
	Support: VoiceCall, TextMessage
	Multimedia types: AudioPlayer, AudioPlayer, Camera
	Wireless protocols: Bluethooth, WiFi
	*/
	three.model();//PHONE MODEL SAMSUNG S1
	three.number();//PHONE NUMBER 33
	three.addSong();//ADDING NEW SONG
	three.addSong();
	/*
	AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
	METHOD THAT ALLOWS THE USER TO ADD A NEW SONG TO THE PHONE
	*/
	three.RemoveSong(1);//REMOVING A SPECIFIC SONG
						/*
						AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
						ALLOWS USER TO DELETE A PICKED SONG
						*/
	three.play(1); //PLAY SPECIF SONG
				   /*
				   AUDIOPLAYER CLASS INHERRITATED FROM MULTIMEDIA CLASS
				   ALLOWS USER TO PLAY A PICKED SONG
				   */
	three.stop();
	/*
	STOPPING THE MUSIC
	*/
	three.addVideo();
	three.addVideo();
	/*
	INHERRITATED FROM AUDIOPLAYER AND MULTIMDEIA
	METHOD TO ADD VIDEO TO PHONE GALLERY
	*/
	three.playVideo(1);
	/*
	METHOD THAT ALLOWS TO PLAY A PICKED VIDEO
	*/
	three.stopVideo();
	/*
	METHOD TO STOP THE VIDEO
	*/
	three.removeVideo(1);
	/*
	METHOD that remove the video
	*/
	three.format();
	/*
	Return the format of the multimedia application
	*/
	three.takePicture();
	three.takePicture();
	three.takePicture();

	/*
	Take the first picture
	*/
	three.takePicture();
	/*
	Take the second picture
	*/
	three.removePicture(1);
	/*
	remove the first picture from the picture list (in this case we have some picture in the picture list and we can remov some)
	*/
	three.picturesList();
	/*
	show  the  picture list
	*/
	three.connectBlueTooth();
	/*
	Connect to bluetooth format
	*/
	three.connectWifi();
	/*
	Connect to wifi protocol of samsung s1
	*/
	three.wirelessProperties();
	/*
	Show all the support wireless protocol and thir rate
	*/

	cout << "\n\n\n" << endl;
	SamsungS9 four(44);
	four.helloMovie();
	/*
	start the phone with the the : 'Hello Samsung ' on this S9 phone
	*/
	four.about();
	/*
	SamsungS1 Number: 44
	Support: VoiceCall, TextMessage
	Multimedia types: AudioPlayer, AudioPlayer, Camera
	Wireless protocols: Bluethooth, WiFi
	*/
	four.model();
	/*
	print to screen the model of the phone: samsung S9
	*/
	four.number();
	/*
	return and print to the screen the number of this phone :  44
	*/
	ar[3]->dial(2, ar);
	/*
	CALLING FROM SAMSUNG TO NOKIA3310
	AND RECIEVING ERROR MSG
	*/
	four.addSong();
	/*)
	METHOD that Allow the user to add a song to his list of song's   ( we add first song to the list to avoid an empty list...)
	*/
	four.addSong();
	/*
	adding another song to the list
	*/
	four.RemoveSong(1);
	/*
	Method that remove song specific from the list songs in this phone
	*/
	four.play(1);
	/*
	METHOD that play a song from the list
	*/
	four.stop();
	/*
	METHOD that stop song activated
	*/
	four.addVideo();
	/*
	METHOD that allow the user to add a video to the list  (add first song to the empty list )
	*/
	four.addVideo();
	/*
	add another song and increas the size of the list
	*/
	four.playVideo(1);
	/*
	Method that play a video from the list in this phone
	*/
	four.stopVideo();
	/*
	Method  that  stop the video the play now
	*/
	four.removeVideo(1);
	/*
	Method that remove the video from the the video list
	*/
	four.format();
	/*
	Return the format of the multimedia application
	*/
	four.takePicture();
	/*
	take first picture in this S9 phone
	*/
	four.takePicture();
	/*
	take another picture and insert it into the picture-list
	*/
	four.takePicture();
	/*
	take another picture and insert it into the picture-list
	*/
	four.takePicture();
	four.takePicture();
	four.takePicture();

	/*
	take another picture and insert it into the picture-list
	*/
	four.removePicture(1);
	/*
	METHOD that remove picture from the list
	*/
	four.picturesList();
	/*
	METHOD that print the picture-list in the phone
	*/
	four.connectBlueTooth();
	/*
	METHOD that connect the device to the Bluetooth
	*/
	four.connectWifi();
	/*
	METHOD that connect the device to the wifi
	*/
	four.wirelessProperties();
	/*
	METHOD that show on screen the wireless properties : 5 Mbps - bluetooth ,  56 Mbps-Wifi
	*/
	cout << "\n\n\n" << endl;
	/* SAMSUNG SAdvance*/
	SamsungSAdvance five(55);
	five.helloMovie();
	/*
	METHOD that start the phone screen with video 'Hello SAMSUNG'
	*/
	five.about();
	/*
	SamsungSAdvance Number : 55
	Support : VoiceCall, TextMessage
	Multimedia types : AudioPlayer, AudioPlayer, Camera
	Wireless protocols : Bluethooth, WiFi, Satellite
	*/

	five.number();
	/*
	METHOD that return the number of this phone : 55
	*/
	five.addSong();
	/*
	METHOD that allow to the user to add a song to the list    ( add the first song to the empty list )
	*/
	five.addSong();
	/*
	add another song to the list
	*/
	five.RemoveSong(1);
	/*
	METHOD that remove a song from the list
	*/
	five.play(1);
	/*
	METHOD that plat a specific song fron the list
	*/
	five.stop();
	/*
	METHOD that stop the song that activated now
	*/
	five.addVideo();
	/*
	METHOD that add a video to the video list on this phone ( add the first video to the empty list)
	*/
	five.addVideo();
	/*
	ADD another video to the list
	*/
	five.playVideo(1);
	/*
	METHOD that play a specific video on the phone screen
	*/
	five.stopVideo();
	/*
	METHOD that stop the activated video
	*/
	five.removeVideo(1);
	/*
	METHOD that remove the video from the list
	*/
	five.format();
	/*
	METHOD that Return the format of the multimedia application : audioPlayer, VideoPlayer,Camera..
	*/
	five.takePicture();
	five.takePicture();
	five.takePicture();
	five.takePicture();
	five.takePicture();
	/*
	METHOD that take picture and put it into the picture list
	*/
	five.takePicture();
	/*
	Take another picture and insert it into the picture list
	*/
	five.removePicture(1);
	/*
	METHOD that remove picture from the list
	*/
	five.picturesList();
	/*
	METHOD that show on screen the picture list on the phone
	*/
	five.connectBlueTooth();
	/*
	METHOD that connect the device to the Bluetooth
	*/
	five.connectWifi();
	/*
	METHOD that connect the device to the Wifi
	*/
	five.connectSatellite();
	/*
	METHOD that connect the device to the satellite
	*/
	five.wirelessProperties();
	/*
	METHOD that show on screen the wirelessProperties:  5 Mbps - bluetooth ,  56 Mbps-Wifi , satellite rate- 3 Mbps
	*/
}
CommunicationSimulator::CommunicationSimulator()
{
}


