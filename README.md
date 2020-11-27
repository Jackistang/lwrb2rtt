# 1. 介绍

lwrb2rtt 是一个轻量级的环形缓冲区管理软件包，提供了通用的 FIFO 环形缓冲区实现。

此项目是完成开源的 lwrb 与 rt-thread 的匹配。

原工程地址：https://github.com/MaJerle/lwrb/tree/develop

项目文档：https://docs.majerle.eu/projects/lwrb/en/latest/

## 1.1 特点

- 用 ANSI C99 编写，与 `size_t` 大小的数据类型兼容。
- 具有平台独立性，无与硬件耦合代码。
- FIFO （先进先出）缓冲区的实现。
- 无动态内存申请，数据存储在静态数组里。
- 使用效率更高的内存复制，而不是循环地从内存读取数据或向内存写入数据。
- 当用作管道，即只有一个写端口和一个读端口时是线程安全的。
- 当用作管道，即只有一个写端口和一个读端口时是中断安全的。
- 适用于 DMA 传输，缓冲区和应用程序内存之间的复制开销为 0 。
- 支持数据预览，跳过读取和前进写入。
- 支持事件通知
- 对用户友好的 MIT 许可证。

## 1.2 目录结构

| 名称     | 说明             |
| -------- | ---------------- |
| examples | 例程目录         |
| lwrb     | 原 lwrb 工程目录 |

## 1.3 许可证

lwrb2rtt 遵循 MIT 许可。

## 1.4 依赖

无依赖

# 2. 如何打开 lwrb2rtt

使用 lwrb2rtt 需要在 RT-Thread 的包管理器中选择它，具体路径如下：

```
RT-Thread online packages
	tools packages --->
		[*] lwrb2rtt: Lightweight ring buffer manager. --->
			[*] Enable lwrb2rtt samples
```

- `Enable lwrb2rtt samples`: 开启 lwrb2rtt 例程。

然后让 RT-Thread 的包管理器自动更新，或者使用 `pkgs --update` 命令更新到 BSP 中。

# 3. 联系方式 & 感谢

- 维护：Jackistang
- 主页：[https://github.com/Jackistang](https://github.com/Jackistang)
- 邮箱：tangjia.jackis@qq.com