#include "Image.h"

int main(int argc, char** argv) {
	// �摜�̓ǂݍ���
	Image test("test.jpg");
	// �摜�̏����o��
	test.write("new.png");

	// �O���[�X�P�[�������i���ρj
	Image gray_avg = test;
	gray_avg.grayscale_avg();
	gray_avg.write("gray_avg.png");
	// �O���[�X�P�[�������i�����j
	Image gray_lum = test;
	gray_lum.grayscale_lum();
	gray_lum.write("gray_lum.png");

	return 0;
}