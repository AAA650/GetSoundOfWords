#include <Windows.h>
#include <iostream>
#include <string>
#pragma comment (lib,"URLmon.lib")
using namespace std;

int main() {
	char ConfigSite[100];
	cout << "You can get the sound from b**du, copyright 2023 AAA650" << endl;
	cout << "Please input the language you want to get! Now support:" << endl;
	cout << "en\tEnglish(US)\n" << "uk\tEnglish(UK)\n";
	char Language[3];
	cin >> Language;
	cout << "Please input the text you want to get! (Only WORDS supported!!!)" << endl;
	char Word[40];
	cin >> Word;
	cout << "Please input the speed of the media!!!\n(Input number from 1 to 7, 3 for normal speed, 1 is the slowest, 7 is the fastest!)" << endl;
	int speed;
	cin >> speed;
	
	sprintf_s(ConfigSite, "https://fanyi.baidu.com/gettts?lan=%s&text=%s&spd=%d&source=web", Language, Word, speed);
	HRESULT hrRet;
	hrRet = URLDownloadToFileA(nullptr, ConfigSite, ".//tts.mp3", 0, nullptr);



	return 0;
}