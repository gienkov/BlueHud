class BlueHud
	{
		idd = -1;
		onLoad = "uiNamespace setVariable ['BlueHudMap', ((_this select 0) displayCtrl 1)]";
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		movingEnable = "false";
		enableSimulation = 1;
		enableDisplay = 1;
		class controls
		{
			class ctrlMap
			{
				idc = 1;
				type = 100;
				style = 0;
				x = "safeZoneX + safeZoneW / 2 - 0.3";
				y = "safeZoneY + safeZoneH - (0.3 * 4/3)";
				w = 0.6;
				h = "0.6 * 4/3";
				font = "PuristaMedium";
				sizeEx = 0;
				colorBackground[] = {0,0,0,0};
				colorText[] = {0,0,0,0};
				text = "";
				ptsPerSquareSea = 1000;
				ptsPerSquareTxt = 1000;
				ptsPerSquareCLn = 1000;
				ptsPerSquareExp = 1000;
				ptsPerSquareCost = 1000;
				ptsPerSquareFor = 1000;
				ptsPerSquareForEdge = 1000;
				ptsPerSquareRoad = 1000;
				ptsPerSquareObj = 1000;
				alphaFadeStartScale = 0;
				alphaFadeEndScale = 0;
				colorLevels[] = {0,0,0,0};
				colorSea[] = {0,0,0,0};
				colorForest[] = {0,0,0,0};
				colorRocks[] = {0,0,0,0};
				colorCountlines[] = {0,0,0,0};
				colorMainCountlines[] = {0,0,0,0};
				colorCountlinesWater[] = {0,0,0,0};
				colorMainCountlinesWater[] = {0,0,0,0};
				colorPowerLines[] = {0,0,0,0};
				colorRailWay[] = {0,0,0,0};
				colorForestBorder[] = {0,0,0,0};
				colorRocksBorder[] = {0,0,0,0};
				colorNames[] = {0,0,0,0};
				colorInactive[] = {0,0,0,0};
				colorOutside[] = {0,0,0,0};
				colorGrid[] = {0,0,0,0};
				colorGridMap[] = {0,0,0,0};
				colorTracks[] = {0,0,0,0};
				colorTracksFill[] = {0,0,0,0};
				colorRoads[] = {0,0,0,0};
				colorRoadsFill[] = {0,0,0,0};
				colorMainRoads[] = {0,0,0,0};
				colorMainRoadsFill[] = {0,0,0,0};
				fontLabel = "PuristaMedium";
				sizeExLabel = 0;
				fontGrid = "PuristaMedium";
				sizeExGrid = 0;
				fontUnits = "PuristaMedium";
				sizeExUnits = 0;
				fontNames = "PuristaMedium";
				sizeExNames = 0;
				fontInfo = "PuristaMedium";
				sizeExInfo = 0;
				fontLevel = "PuristaMedium";
				sizeExLevel = 0;
				stickX[] = {0,{ "Gamma",0,0 }};
				stickY[] = {0,{ "Gamma",0,0 }};
				showCountourInterval = 0;
				scaleMin = 0;
				scaleMax = 1;
				scaleDefault = 0.03;
				maxSatelliteAlpha = 0;
				onMouseButtonClick = "";
				onMouseButtonDblClick = "";
				class Task
				{
					icon = "";
					color[] = {0,0,0,0};
					iconCreated = "";
					colorCreated[] = {0,0,0,0};
					iconCanceled = "";
					colorCanceled[] = {0,0,0,0};
					iconDone = "";
					colorDone[] = {0,0,0,0};
					iconFailed = "";
					colorFailed[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class CustomMark
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Bunker
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Bush
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class BusStop
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Command
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Cross
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Fortress
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Fuelstation
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Fountain
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Hospital
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Chapel
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Church
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Lighthouse
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Quay
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Rock
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Ruin
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class SmallTree
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Stack
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Tree
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Tourism
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Transmitter
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class ViewTower
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Watertower
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Waypoint
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class WaypointCompleted
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class ActiveMarker
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class PowerSolar
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class PowerWave
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class PowerWind
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class Shipwreck
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
			};
		};
	};