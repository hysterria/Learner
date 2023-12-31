﻿#pragma once

namespace ABelyaeva {
	struct MenuItem {
		const char* const title;
		const MenuItem* (*func)(const MenuItem* current);

		const MenuItem* const *children;
		const int children_count;

		const MenuItem* parent;



	};
}