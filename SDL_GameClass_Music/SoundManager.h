#pragma once

#include"Game.h"
#include <string>
#include <map>

//operating with sound (similar to Texture Manager)
class SoundManager
{
public:
	//make this static, the constructor can be private
	//the function is more special, so we write it here
	
	static SoundManager* Instance()
	{
		if (s_mInstance == 0)
		{
			s_mInstance = new SoundManager();
			
		}
		return s_mInstance;
	}
	//да зарежда файловете от папка асестс (може да са и музика, и звукови ефекти, следва да кажем кой от двата типа файла зареждаме
	
	bool load(const char* fileName, std::string id, int type);
	void playSound(std::string id, int loop, int ms = 0); //puska i spira zwuka (колко пти ще се повтаря самия файл, инт мс = малко по тиха, после по-силан, по дифолт 0, защото не винаги ще го използваме
//можем да плейваме само една музика, но няколко саунд ефекта едновремнно 
	
	void playMusic(std::string id, int loop, int ms = 0);

	void changeVolume(int change);
	void pauseOrPlay();

private:
	static SoundManager* s_mInstance;//един инастан навсякъде
	std::map<std::string, Mix_Chunk*> s_mSfxs; //променлива, която държи саун файл
	std::map<std::string, Mix_Music*> s_mMusic; //променлива, която държи music файл
	SoundManager(); //може да са private
	~SoundManager();
};

