#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main(int argc,char *argv[])
{
	//����ͼ��
	//IMREAD_GRAYSCALE ��ͼ����Ϊ�Ҷ�ͼ�����
	//IMREAD_UNCHANGED <0 ��ʾԭͼ
	//IMREAD_COLOR >0 ��ʾ��ԭͼ��ΪRGB���ؽ��� Ĭ�ϲ���
	Mat src = imread("C:\\Users\\Administrator\\Desktop\\1.jpg", IMREAD_COLOR);
	if (src.empty())
	{
		printf("ͼ�μ��ش��� \n");
		return -1;
	}

	//namedWindow("opcv",CV_WINDOW_AUTOSIZE);
	//��ʾͼƬ
	imshow("OPCV", src);
	waitKey(0);
	return 0;
}
