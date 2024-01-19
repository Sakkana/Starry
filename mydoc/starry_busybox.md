# Busybox sh 未完成指令

* ls 指令：正常
* cd 指令：`cd ~` 会出现问题
* echo 指令：正常，管道正常
* rm 指令：删除文件夹的时候会出现参数错误

* cat 指令

  不支持从标准输入到标准输出建立管道，即 cat 不带参数

* touch 指令：在根目录下可以touch，也可以echo后cat，但是ls无法显示，不过下次重启内核的时候还在

* mkdir 指令：根目录下不允许mkdir

* tree指令：

  报错：

  ```shell
  tree: applet not found
  Unknown signal
  ```

* mv：不允许进行，会报权限错误

* man：执行`man mkdir`，报错`man: no manual entry for 'mkdir'`。

* history：报错

  ```shell
  history: applet not found
  Unknown signal
  ```

* grep：表面正常

* uniq：表面正常

* sort：表面正常

* 管道符 | ：表面正常