#include "Image.h"

int main(int argc, char** argv) {
	// 画像の読み込み
	Image test("test.jpg");
	// 画像の書き出し
	test.write("new.png");
	return 0;
}