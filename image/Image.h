#include <stdint.h>
#include <cstdio>

enum ImageType {
	PNG, JPG, BMP, TGA
};

struct Image {
	uint8_t* data = NULL;
	// �T�C�Y
	size_t size = 0;
	// ��
	int w;
	// ����
	int h;
	// �`�����l��
	int channels;

	Image(const char* filename);
	Image(int w, int h, int channels);
	Image(const Image& img);
	~Image();

	// �ǂݍ���
	bool read(const char* filename);
	// ��������
	bool write(const char* filename);
	// �g���q�̃^�C�v���擾
	ImageType get_file_type(const char* filename);

	// �O���[�X�P�[�������֐�
	Image& grayscale_avg();
	Image& grayscale_lum();

};