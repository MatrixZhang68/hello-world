// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 SDH_THETA2XYZ_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// SDH_THETA2XYZ_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef SDH_THETA2XYZ_EXPORTS
#define SDH_THETA2XYZ_API __declspec(dllexport)
#else
#define SDH_THETA2XYZ_API __declspec(dllimport)
#endif
#define PI 3.1415926


#include <armadillo>
using namespace arma;
// 此类是从 SDH_theta2xyz.dll 导出的
class SDH_THETA2XYZ_API CSDH_theta2xyz {
public:
	CSDH_theta2xyz(void);
	// TODO:  在此添加您的方法。
	mat theta2xyz(mat, mat,int);
};

extern SDH_THETA2XYZ_API int nSDH_theta2xyz;

SDH_THETA2XYZ_API int fnSDH_theta2xyz(void);
