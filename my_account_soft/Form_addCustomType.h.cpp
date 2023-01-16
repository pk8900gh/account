#include "Form_addCustomType.h"


Form_addCustomType::Form_addCustomType(QMainWindow* parent)
	: QMainWindow(parent)	//构造函数初始化列表QWidget
{
	//其他组件需在setupUi函数调用后生成，否则会被UI覆盖导致无法点击
	ui.setupUi(this);
}