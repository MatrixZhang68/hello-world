// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� SDH_THETA2XYZ_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// SDH_THETA2XYZ_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef SDH_THETA2XYZ_EXPORTS
#define SDH_THETA2XYZ_API __declspec(dllexport)
#else
#define SDH_THETA2XYZ_API __declspec(dllimport)
#endif
#define PI 3.1415926


#include <armadillo>
using namespace arma;
// �����Ǵ� SDH_theta2xyz.dll ������
class SDH_THETA2XYZ_API CSDH_theta2xyz {
public:
	CSDH_theta2xyz(void);
	// TODO:  �ڴ�������ķ�����
	mat theta2xyz(mat, mat,int);
};

extern SDH_THETA2XYZ_API int nSDH_theta2xyz;

SDH_THETA2XYZ_API int fnSDH_theta2xyz(void);
