# BlueHud
BlueHud is a new HUD enhancement for Arma 3. Its aim is to provide a better perception of teammates in your vicinity without giving you an infantry radar that provides a super human awareness of your surroundings.

# Installation guide
To implement BlueHud as script in your mission you simply have to copy `BlueHud` folder and `description.ext` file into your mission root.
If you already have description.ext inside your mission then simply add contents below into it:
```
class CfgFunctions
{
	#include "BlueHud\CfgFunctions.hpp"
};
class RscTitles
{
	#include "BlueHud\RscTitles.hpp"
};
#include "BlueHud\BlueHudConfig.hpp"
```
If you have defined CfgFunctions or RscTitles then just simply add `#include x` line in between brackets, like in example below:
```
class CfgFunctions
{
	[your content]
	#include "BlueHud\CfgFunctions.hpp"
};
```
```
class RscTitles
{
	[your content]
	#include "BlueHud\RscTitles.hpp"
};
```