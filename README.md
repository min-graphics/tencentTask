# tencentTask
task3 umg作业，微云链接


https://share.weiyun.com/OO8YnfPO


这次作业做了两个，第一个是用上周老师给的demo的基础上进行的修改，由于demo并非自己从头写的，所以在修改其中一些结点的时候弄乱套了，排行榜功能没有完全实现，出排行榜外，给老师原有demo添加了血条，可以随着射击掉血，添加了relode按钮（老师给的demo是通过按键来换子弹），增加了游戏倒计时显示，同时制作了结算界面ui，当游戏时间结束时，便出现结束ui。

二.全实现（自己的demo）
1.在第三人称模板上添加了左上角玩家得分，排行榜按钮，血条，得分按钮，跳跃按钮，昵称界面。
![ba2b7edae0c56885528cd23cfe12294](https://user-images.githubusercontent.com/94882240/184427254-c2ad804e-5031-4a38-97a4-a21b41d1b1c7.jpg)
2.与1图对比，得分，血条，昵称都绑定了，可以动态变化。
![5d44b82c54856da7421f2ffd1545827](https://user-images.githubusercontent.com/94882240/184427436-fffef8d6-2bf2-445b-9e45-b8e4d29104ae.jpg)
3.调用savegame函数，并且使用排序算法，将savegame数组进行排序，显示到ui上。
![439dc90a83b9ff11659e21d2173be6a](https://user-images.githubusercontent.com/94882240/184427674-903ade82-35c5-4358-95b0-99abfca7dc12.jpg)


一.老师的demo（排行榜未实现）
1.添加左上角血条，中部游戏倒计时，右下角reload换弹按钮。
![46fa0b59b89d5f75a56bd1b67b90d46](https://user-images.githubusercontent.com/94882240/184426369-438f9c81-a956-406b-bb83-08386abcfa31.jpg)
2.排行榜功能ui界面显示了，但是save功能没有处理好
![7f37f82b698ddfb26b35f4e85116b1c](https://user-images.githubusercontent.com/94882240/184426680-14b1a7d1-69fb-4c19-92e5-0109f4af2056.jpg)
![ff628cda53d3161573ddc0e9b35308c](https://user-images.githubusercontent.com/94882240/184426720-7f605b6e-9f79-4778-9772-2cc439347d96.jpg)
3.添加了游戏结束ui，显示双方得分和退出按钮
![822c2fbb9ec3a8e368734497373a91e](https://user-images.githubusercontent.com/94882240/184426793-d39227af-2a07-4282-aad2-0d9a4ebf47ba.jpg)






task2
作业实现了在课程实例上，功能添加
1.添加了可以进行飞行的小球，射击小球即可得分，小球可以在固定的高度z上，在x属于（-400，400），y属于（-100，100）的范围内随机位移，射击中即可可以加一分。
![f68892e72ba2c110c311c45a8a29b08](https://user-images.githubusercontent.com/94882240/181905975-f297e6e4-16a8-47f1-a720-003bf7f84099.jpg)
2.添加了倒计时，倒计时默认为40s，游戏剩余时间可以在屏幕的上方看到。在倒计时结束后，会显示当前分数和对手的分数的ui，并且出现quitgame的结算界面，点击可退出游戏。
![4150bc4f45feb490d540818b2a36f01](https://user-images.githubusercontent.com/94882240/181906097-77f566b4-66e1-40a2-a593-24a836dabcee.jpg)

游戏演示视频放在腾讯微云
https://share.weiyun.com/Mwvy7ot9

task1
作业实现了从源码编译虚幻引擎，并打包到安卓平台，进行了实机测试
the apk and MP4 location
https://share.weiyun.com/p2ZjoBD3
