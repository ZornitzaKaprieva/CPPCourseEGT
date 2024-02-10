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
	//�� ������� ��������� �� ����� ������ (���� �� �� � ������, � ������� ������, ������ �� ����� ��� �� ����� ���� ����� ���������
	
	bool load(const char* fileName, std::string id, int type);
	void playSound(std::string id, int loop, int ms = 0); //puska i spira zwuka (����� ��� �� �� ������� ����� ����, ��� �� = ����� �� ����, ����� ��-�����, �� ������ 0, ������ �� ������ �� �� ����������
//����� �� �������� ���� ���� ������, �� ������� ����� ������ ����������� 
	
	void playMusic(std::string id, int loop, int ms = 0);

	void changeVolume(int change);
	void pauseOrPlay();

private:
	static SoundManager* s_mInstance;//���� ������� ���������
	std::map<std::string, Mix_Chunk*> s_mSfxs; //����������, ����� ����� ���� ����
	std::map<std::string, Mix_Music*> s_mMusic; //����������, ����� ����� music ����
	SoundManager(); //���� �� �� private
	~SoundManager();
};

