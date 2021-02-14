#include "Image.h"

int main(int argc, char** argv) {
	// 画像の読み込み
	Image test("test.jpg");
	// 画像の書き出し
	test.write("new.png");

	// グレースケール処理（平均）
	Image gray_avg = test;
	gray_avg.grayscale_avg();
	gray_avg.write("gray_avg.png");
	// グレースケール処理（割合）
	Image gray_lum = test;
	gray_lum.grayscale_lum();
	gray_lum.write("gray_lum.png");

	return 0;
}