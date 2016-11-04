#include "map_widget.h"
#include <QApplication>
#include <QFileInfo>
#include <QObject>


class MyCallBack :public MapCallBack{
     void initSuccess(MapWidget* mapWidget){
         MapLoader* loader= mapWidget->GetMapLoader();

         loader->loadDataForFile(QFileInfo("E:\\unityProject\\VectorMap\\Assets\\Resources\\json\\china.geo.json"));

         delete loader;
         loader=nullptr;
     }
};
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MapWidget w;

    w.setMapCallBack(MyCallBack());

    w.show();

    return a.exec();
}
