#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main(int argc,char *argv[])
{
	//加载图像
	//IMREAD_GRAYSCALE 把图像作为灰度图像加载
	//IMREAD_UNCHANGED <0 表示原图
	//IMREAD_COLOR >0 表示将原图作为RGB加载进来 默认参数
	Mat src = imread("C:\\Users\\Administrator\\Desktop\\1.jpg", IMREAD_COLOR);
	if (src.empty())
	{
		printf("图形加载错误 \n");
		return -1;
	}

	namedWindow("opcv",CV_WINDOW_AUTOSIZE);
	//显示图片 第一个参数和上面的要一致
	imshow("opcv", src);

	namedWindow("output window", CV_WINDOW_AUTOSIZE);
	Mat output;
	//将一张RGB图像转为灰度图像
	cvtColor(src, output, CV_BGR2GRAY);
	imshow("output window", output);

	//保存图片
	imwrite("C:\\Users\\Administrator\\Desktop\\2.jpg", output);
	waitKey(0);
	return 0;
}
