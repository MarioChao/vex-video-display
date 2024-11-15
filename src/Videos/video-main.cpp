#include "Videos/video-main.h"
#include "Videos/video-info.h"
#include "Videos/video-objects.h"
#include "main.h"

namespace {
	// Functions

	void brainVideosThread();

	void drawVideos();

	// Variables

	std::vector< std::vector<VideoInfo *> > videoObjects = {
		{},
		{&teamLogo},
		{&yoruNiKakeru, &badApple_suika, &yoruNiKakeru, &badApple_suika},
		{&badApple_suika_image},
		{&ningning},
		{&ningning2},
		{&ningning3},
	};
	std::vector< std::vector< std::pair<int, int> > > videoObjectPositions = {
		{},
		{{0, 0}},
		{{0, 0}, {240, 0}, {0, 120}, {240, 120}},
		{{0, 0}},
		{{0, 0}},
		{{0, 0}},
		{{0, 0}},
	};

	int playingVideoId = 0;

	double display_width, display_height;

	bool videoDebounce = false;

	vex::timer videoTimePosition;
}

namespace video {
	void keybindVideos() {
		Controller1.ButtonLeft.pressed([]() -> void {
			switchVideoState();
		});
	}

	void startThread() {
		task brainVideos([]() -> int {
			brainVideosThread();
			return 1;
		});
	}

	void switchVideoState(int increment) {
		if (!videoDebounce) {
			videoDebounce = true;

			// Increment video id
			playingVideoId += increment;
			playingVideoId %= (int) videoObjects.size();
			if (playingVideoId > 0) {
				printf("Playing video %d!\n", playingVideoId);
			}

			// Reset time
			videoTimePosition.reset();

			// Refresh screen
			task::sleep(40);
			if (playingVideoId > 0) {
				Brain.Screen.clearScreen(color::black);
			}
			task::sleep(30);

			videoDebounce = false;
		}
	}
}

namespace {
	void brainVideosThread() {
		video::switchVideoState(0);
		while (true) {
			if (playingVideoId > 0) {
				drawVideos();
			}
			task::sleep(20);
		}
	}

	void drawVideos() {
		for (int i = 0; i < (int) videoObjects[playingVideoId].size(); i++) {
			VideoInfo *video = videoObjects[playingVideoId][i];
			std::pair<int, int> videoPosition = videoObjectPositions[playingVideoId][i];
			video->setFrameId(videoTimePosition.time(timeUnits::msec));
			video->drawFrame(videoPosition.first, videoPosition.second);
		}
	}
}
