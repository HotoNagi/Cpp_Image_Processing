#include <stdint.h>
#include <cstdio>

enum ImageType {
	PNG, JPG, BMP, TGA
};

struct Image {
	uint8_t* data = NULL;
	// サイズ
	size_t size = 0;
	// 幅
	int w;
	// 高さ
	int h;
	// チャンネル
	int channels;

	Image(const char* filename);
	Image(int w, int h, int channels);
	Image(const Image& img);
	~Image();

	// 読み込み
	bool read(const char* filename);
	// 書き込み
	bool write(const char* filename);
	// 拡張子のタイプを取得
	ImageType get_file_type(const char* filename);

	// グレースケール処理関数
	Image& grayscale_avg();
	Image& grayscale_lum();

};