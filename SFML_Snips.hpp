#pragma once

#ifndef BZSF
#define BZSF

// If SFML hasn't been loaded yet, we should probably do so.

#ifndef SFML_GRAPHICS_HPP

#include <SFML\Graphics.hpp>

#endif

// Include dependencies:

#include <iostream>
#include <sstream>
#include <string>
#include <array>
#include <vector>
#include <set>
#include <map>
#include <math.h>
#include <time.h>
#include <algorithm>
#include <memory>
#include <cassert>
#include <deque>
#include <functional>


// Include the Snippets:

#include <BZeps-SFML-Snippets\snippets\general.hpp>
#include <BZeps-SFML-Snippets\snippets\gameHandler.hpp>
#include <BZeps-SFML-Snippets\snippets\drawable.hpp>
#include <BZeps-SFML-Snippets\snippets\desaturator.hpp>
#include <BZeps-SFML-Snippets\snippets\onScreenLog.hpp>
#include <BZeps-SFML-Snippets\snippets\state.hpp>
#include <BZeps-SFML-Snippets\snippets\stateStack.hpp>
#include <BZeps-SFML-Snippets\snippets\performanceDisplay.hpp>
#include <BZeps-SFML-Snippets\snippets\quadTree.hpp>

#endif