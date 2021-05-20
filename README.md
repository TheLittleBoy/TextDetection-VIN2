# TextDetection-VIN2
iOS使用飞桨OCR文字识别，实现离线扫描VIN码，免费，并且效果极佳，速度贼快。

飞桨官网：https://www.paddlepaddle.org.cn

EasyEdge官网：https://ai.baidu.com/easyedge

官网OCR demo：https://ai.baidu.com/easyedge/app/openSource

lib文件中包含opencv2.framework等文件，200M，请耐心下载。

经过验证，不可以在 Build Settings下Other Linker Flags里面加-ObjC标志，否则libEasyDL.a会报错。


效果图：

![](https://github.com/TheLittleBoy/TextDetection-VIN2/blob/master/image.jpg)
