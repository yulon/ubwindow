#include <pwre.hpp>
#include <iostream>

int main() {
	pwre::init();

	pwre::window wnd;
	if (!wnd.available()) {
		return 1;
	}

	wnd.retitle("我只是一个空白窗口_(:з」∠)_");
	wnd.resize({500, 500});
	wnd.move();
	wnd.add_states(PWRE_STATE_VISIBLE);

	std::cout << "title: " << wnd.title() << std::endl;

	while (pwre::recv_event());
	return 0;
}
