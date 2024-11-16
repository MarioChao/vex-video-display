# VEX Video Display

Draw **images** and **videos** on the [V5 Robot Brain](https://www.vexrobotics.com/276-4810.html).<br>
No SD card required!

## Set up

When using this project, make sure to add `src/*/*/*.cpp` to the source cpp files in [makefile](./makefile).

```make
SRC_C += $(wildcard src/*/*.cpp) 
SRC_C += $(wildcard src/*/*.c)
SRC_C += $(wildcard src/*/*/*.cpp) 
SRC_C += $(wildcard src/*/*/*.c)
```

## Instruction

Importing the project into an existing program:

1. Copy [include/Videos](./include/Videos) to the `include` folder.
2. Copy [src/Videos](./src/Videos) to the `src` folder.
3. Make sure `Brain` and `Controller1` are visible (ex: declared in **robotconfig.h** or **main.h**).
4. Include [video-main.h](./include/Videos/video-main.h):
```c++
#include "Videos/video-main.h"
```
5. Call the following lines:
```c++
video::startThread();
video::keybindVideos();
```

Creating new images and videos:

1. Add a `VideoInfo` in [video-objects.h](./include/Videos/video-objects.h). (ex: `extern VideoInfo image1;`)
2. Copy [_example.cpp](./src/Videos/Video-Objects/_example.cpp) and rename it. (ex: `image1.cpp`)
3. Use the web apps [**image converter**](https://mariochao.github.io/vex-competition-tools/image-array/) and [**video converter**](https://mariochao.github.io/vex-competition-tools/image-array/video/) to convert files to a proper vector format.
	1. For image converter, only use the **original format** vector if the image type is PNG or BMP and the dimension is less than 480 x 240.
	2. The output images can usually be further compressed using tools like online PNG compressors.
4. Copy the output vector into the renamed file.
	1. For raw RGB pixels, copy it to `video` and use the first type of constructor. (fps, framestep,)
	```c++
	VideoInfo _image1(30, 10, &::video, 480, 240);
	```
	2. For original or PNG format, make sure the dimension is less than 480 x 240, then copy the vector to `videoBuffer` and use the second type of constructor:
	```c++
	VideoInfo _image1(30, 10, &::videoBuffer);
	```
5. Configure the displayed videos and positions in [video-main.cpp](./src/Videos/video-main.cpp).
	1. Each vector in `videoObjects` contains videos that will be displayed at the same time.
	2. The corresponding pairs in `videoObjectPositions` should contain the positon that each video's top-left corner will be displayed at.

## Credits

Default images and videos are from:
- Team 96969Y
- Yoru ni Kakeru (YOASOBI)
- Bad Apple!! (Alstroemeria Records feat.nomico)
- Super Mario Bros (Nintendo)
- Ningning (aespa)
