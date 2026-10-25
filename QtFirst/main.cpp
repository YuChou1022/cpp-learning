#include<QApplication>
#include<QWidget>
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>

int main(int argc, char *argv[])
{
	//创建Qt图形应用
	QApplication app(argc, argv);

	//创建一个窗口对象
	QWidget window;

	//设置窗口标题
	window.setWindowTitle("My First Qt App");

	//设置窗口大小：宽480 高：300
	window.resize(480, 300);

	//1.创建一个文字标签
	QLabel label("欢迎学习Qt!", &window);

	//2.创建一个按钮
	QPushButton button("点击我", &window);
	button.move(40, 100);

	QVBoxLayout layout(&window);

	layout.addWidget(&label);
	layout.addWidget(& button);

	int count = 0;

	QObject::connect(
		&button,
		&QPushButton::clicked,
		&window,
		[&label,&count]()
		{
			count++;
			if (count < 10)
			{
				label.setText("点击了" + QString::number(count) + "次");
			}
			else
			{
				label.setText("恭喜你点击了10次");
			}
		
		}
	
	);

	

	//显示窗口
	window.show();

	//进入Qt时间循环
	return app.exec();
}
