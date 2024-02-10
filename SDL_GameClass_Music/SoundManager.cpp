#include "SoundManager.h"
#include<iostream>

SoundManager::SoundManager()
{
	//set a device to play music on
	Mix_OpenAudio(48000, AUDIO_S16SYS, 2, 4096);//look in the documentation
	std::cout << Mix_GetError() << std::endl;
}

//if it can't load any file - false, otherwise true
bool SoundManager::load(const char* fileName, std::string id, int type) {
	//type1 => music, type0 => sfx
	if (type == 1) { //check for music
		Mix_Music* music = Mix_LoadMUS(fileName);
		if (music == 0) {
			std::cout << "Could not load music" << Mix_GetError() << std::endl;
			return false;
		}
		s_mMusic[id] = music; //if there are no problems, we add the music to the map
		return true;
	}
	else {
		if (type == 0) { // check for SFX
			Mix_Chunk* chunk = Mix_LoadWAV(fileName);
			if (chunk == 0) {
				std::cout << "Could not load sfx" << Mix_GetError() << std::endl;
				return false;
			}
			s_mSfxs[id] = chunk;
			return true;
		}
	}
	return false; //
}

void SoundManager::playSound(std::string id,
	int loop, int ms)
{
	if (Mix_FadeInChannel(-1, s_mSfxs[id], loop, ms))
	{
		std::cout << Mix_GetError() << std::endl;
	}
}

void SoundManager::playMusic(std::string id,
	int loop, int ms)
{

	if (Mix_FadeInMusic(s_mMusic[id], loop, ms))
	{
		std::cout << Mix_GetError() << std::endl;
	}
}

void SoundManager::changeVolume(int c) {
	//кой канал да намали и какъв е volume
	//1. искаме да разберем каква е текущата сила на звука 
	int currentVolume = Mix_VolumeMusic(-1);
	std::cout << currentVolume << "  " << Mix_VolumeMusic(-1) << std::endl;
	//взимаме текущата и увеличаваме с ц 
	currentVolume += c;
	Mix_VolumeMusic(currentVolume);
}

void SoundManager::pauseOrPlay()
{
	std::cout << Mix_PlayingMusic() << std::endl; //дали работят функциите
	if (Mix_PlayingMusic() != 0) //ако е спряно го пуска, ако е пуснато го спира
	{
		Mix_PauseMusic();
	}
	if (Mix_PausedMusic() == 1)
	{
		Mix_ResumeMusic();
	}

}

SoundManager* SoundManager::s_mInstance = 0; //initializes the static variable
