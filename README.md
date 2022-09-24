# tencentTask

task8，AI作业，这次是在大作业上进行的修改。
使用行为树设计了两种AI，一种是普通僵尸，通过僵尸父类多态生成4种形状各异的僵尸，数值不一样，但是攻击动作啥的都一样。逻辑也很简单，检测玩家是否死亡，如死亡则随机找点。玩家没有死亡则move to玩家，之后执行攻击。
boss的行为树比较复杂，之前准备做一个魂类boss，所以行为树设计是借用的之前的。大体设计思路是进行距离检测判断，根据距离的远近，采取不同的策略。行为树草图如下：
![4d7cbfcb6eb5044833b58695dfc127b](https://user-images.githubusercontent.com/94882240/192097048-a7978da4-a125-4210-b3e0-ad1f07eb3ca2.jpg)

此次作业打包到了windows，微云链接https://share.weiyun.com/6SeJLhOs

——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————




task6,渲染作业，在上次demo的进行修改，本来已经导入了新的场景，但是那个工程由于文件太大传不上来，所以在之前的场景上进行的添加修改。主要是自定义了一个发光材质，用time结点结合sin函数来控制发光颜色，用后期盒子来控制bloom效果。
此次作业的微云链接https://share.weiyun.com/vsZ8VL1V


——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
task5,物理作业，继续在上次的demo上进行修改，此次更新添加了脚步声，脚印，拾取枪支和抛体武器。其中，脚印和手雷区分两种材质，雪地和玻璃，发出不同的声音。
此次作业的微云链接

https://share.weiyun.com/ITN7Kdfs





——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
task4，动画骨骼作业，这次更换了游戏demo，准备从0开始做，为大作业做准备，因此很多东西包括ui，武器系统，ai都没有，只是为了展示动画骨骼作业。
此次作业微云链接
https://share.weiyun.com/4iTZDf1B

动画截图
实现了站立，八方向行走，shift冲刺跑步，ctrl八方向行走蹲伏，跳跃，俯仰。
实现了左上，上，右上，左，中，右，左下，下，右下的瞄准偏移混合。
没有找到合适的手雷动画，因此攻击行为选择的是开火。实现了动作混合，上身开火，下身可以蹲伏，行走，跑步。
按Alt可以实现自由视角。
尝试用蓝图方式实现two bones FootIK,但是出现bug，准备以后用control rig 实现。
bug如下，一个脚会穿模，看起来及其不美观，因此又把连线断了。
![%{DMB}3$_GZ%0N3UONBOR@P](https://user-images.githubusercontent.com/94882240/185756049-d6b97f21-8b11-45a8-a1e0-ff4afca33eea.jpg)


——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

task3 umg作业，umg作业为task3文件夹的项目，上面的task2描述虽然是umg，主要是git push的时候不小心把task2更新了一下，与此次作业无关。其中，一个作业由于疏忽大意，用蓝图进行了创建工程，导致无法上传源码，所以打包到了安卓，将安装包放到了微云内。

微云链接

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













  
  
  
  
  
  



———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
作业实现了在课程实例上，功能添加
1.添加了可以进行飞行的小球，射击小球即可得分，小球可以在固定的高度z上，在x属于（-400，400），y属于（-100，100）的范围内随机位移，射击中即可可以加一分。

2.添加了倒计时，倒计时默认为40s，游戏剩余时间可以在屏幕的上方看到。在倒计时结束后，会显示当前分数和对手的分数的ui，并且出现quitgame的结算界面，点击可退出游戏。


游戏演示视频放在腾讯微云
https://share.weiyun.com/Mwvy7ot9
—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

task1
作业实现了从源码编译虚幻引擎，并打包到安卓平台，进行了实机测试
the apk and MP4 location
https://share.weiyun.com/p2ZjoBD3
