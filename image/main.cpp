#include "Image.h"

int main(int argc, char** argv) {
	// �摜�̓ǂݍ���
	Image test("test.jpg");
	// �摜�̏����o��
	test.write("new.png");
	return 0;
}