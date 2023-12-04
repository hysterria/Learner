#pragma once

namespace ABelyaeva {
	struct MenuItem {
		const char* const title;
		void (*func)();
	};
}