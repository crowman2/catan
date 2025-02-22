﻿#pragma once

#define DEBUG 1

#define ALL_SPRITES_FILENAME "C:/Projects/CatanGUI_0_2a/x64/Debug/textures/sprites.png"
#define BG_TEXTURE_FILENAME "C:/Projects/CatanGUI_0_2a/x64/Debug/textures/bg.jpg"

#define _USE_MATH_DEFINES

static std::random_device rd;
static std::mt19937 rng(rd());

const int kHexBoardY = 100+200/2;		//position of drawable hex board
const int kHexBoardX = 300+174/2;
const int kHexBoardYStep = 150;

const int kCityHeight = 56;
const int kCityWidth = 56;
const int kRoadHeight = 102;
const int kRoadWidth = 16;
const int kHexWidth = 174;

const int kMaxConnections = 3;	//each point connects to 3 others maximum 
const int kHex_to_points = 6;	//number of points on one hex

//const int kPlayersCount = 2;	//temporary players count const
const int kMaxPlayerCount = 6;	//temporary players count const
const int kHexCount = 19;	//temporary players count const

const int kMaxSettelments = 5;			//ìàêñèìàëüíîå êîëè÷åñòâî ïîñåëåíèé îäíîãî èãðîêà
const int kMaxCities = 4;				//ìàêñèìàëüíîå êîëè÷åñòâî ãîðîäîâ îäíîãî èãðîêà
const int kMaxRoads = 15;				//ìàêñèìàëüíîå êîëè÷åñòâî äîðîã ó îäíîãî èãðîêà

const int kResCount = 5;				//êîëè÷åñòâî ðçíîâèäíîñòåé ðåñóðñîâ â èãðå
const int kCardCount = 5;				//êîëè÷åñòâî ðçíîâèäíîñòåé êàðò ðàçâèòèÿ â èãðå
const int kMaxBankResources = 19;		//ìàêñèìàëüíîå êîëè÷åñòâî êàæäîãî èç ðåñóðñîâ â èãðå

const int kMaxBankExchangePrice = 4;
const int k3in1ExchangePrice = 3;
const int kResourceHarborExchangePrice = 2;

const int kMinLongestPath = 5;			//ìèíèìàëüíàÿ äëèíà ïóòè, ÷òîáû ïîëó÷èòü î÷êè
const int kLargestArmyBonus = 2;		//áîíóñ çà ñàìîå áîëüøîå âîéñêî
const int kLongestRoadBonus = 2;		//áîíóñ çà ñàìîå áîëüøîå âîéñêî
const int kSettelmentScore = 1;
const int kCityScore = 2;

const int kPlayerContainerWidth = 500;
const int kPlayerContainerHeight = 644;

const std::string kFont = "Font\\RobotoSlab-Regular.ttf";

//ïîñåëåíèå/ãîðîä
enum class building_types { settelment, city, none };

//êàðòû ðàçâèòèÿ
enum class devCard {
	knight,		//ðûöàðü
	monopoly,	//ìîíîïîëèÿ
	roads,		//ñòðîèòåëüñòâî 2-õ äîðîã
	twoRes,		//äâà ëþáûõ ðåñóðñà èç áàíêà
	winPoint,	//1 ïîáåäíîå î÷êî	
};

const std::array<sf::Color, kMaxPlayerCount> kPlayerColors = {
	sf::Color(255, 110, 110, 255),
	sf::Color(71, 135, 232, 255),
	sf::Color(88, 165, 85, 255),
	sf::Color(205, 131, 52, 255),
	sf::Color(0, 0, 0, 255),
	sf::Color(0, 0, 0, 255)
};

namespace Resources
{
	enum class ID : unsigned int
	{
		all = 1000,
		background
	};
}

namespace Sprites {
	enum class ID : unsigned int {
		stone = 0,
		brick,
		sheep,
		wheat,
		wood,
		desert,
		hex_free,
		hex_hover,		
		redSet,
		blueSet,
		greenSet,		
		orangeSet,
		whiteSet,
		brownSet,		
		redCity,		
		blueCity,
		greenCity,
		orangeCity,
		whiteCity,
		brownCity,		
		selectedCity,
		hookCity,
		selRedSet,		
		selBlueSet,
		selGreenSet,
		selOrangeSet,
		selWhiteSet,
		selBrownSet,		
		selRedCity,		
		selBlueCity,
		selGreenCity,
		selOrangeCity,
		selWhiteCity,
		selBrownCity,		
		n2,
		n3,
		n4,
		n5,
		n6,
		n8,
		n9,
		n10,
		n11,
		n12,
		redRoad,
		blueRoad,
		greenRoad,
		orangeRoad,
		whiteRoad,
		brownRoad,		
		selectedRoad,
		hookRoad,
		selRedRoad,
		selBlueRoad,
		selGreenRoad,
		selOrangeRoad,
		selWhiteRoad,
		selBrownRoad,
		robot,
		harbor_stone,
		harbor_3_brick,
		harbor_3_sheep,
		harbor_3,
		harbor_3_weat,
		harbor_wood,
		btnGenHexesUp,
		btnGenHexesDown,
		stoneCard,
		brickCard,
		sheepCard,
		wheatCard,
		woodCard,
		oneScoreTownHallCard,
		oneScoreMarketCard,
		oneScoreUniversityCard,
		oneScoreChurchCard,
		oneScoreLibraryCard,
		roadBuildingCard,
		monopolyCard,
		inventionCard,
		knightCard,
		check,
		background,
		none
	};

	const unsigned int count = static_cast<unsigned int>(Sprites::ID::none);

	struct SpriteTable {
		int left, top, height, width;
		Resources::ID rId;
		Sprites::ID id;
	};

	//SpriteTable sprite_table
	const std::array<SpriteTable, count> sprite_table {
		{
			{0, 0, 200, 174, Resources::ID::all, Sprites::ID::stone},
			{174, 0, 200, 174, Resources::ID::all, Sprites::ID::brick},
			{348, 0, 200, 174, Resources::ID::all, Sprites::ID::sheep},
			{522, 0, 200, 174, Resources::ID::all, Sprites::ID::wheat},
			{696, 0, 200, 174, Resources::ID::all, Sprites::ID::wood},
			{870, 0, 200, 174, Resources::ID::all, Sprites::ID::desert},
			{1044, 0, 200, 174, Resources::ID::all, Sprites::ID::hex_free},
			{1218, 0, 200, 174, Resources::ID::all, Sprites::ID::hex_hover},

			{0, 200, 56, 56, Resources::ID::all, Sprites::ID::redSet},
			{112, 200, 56, 56, Resources::ID::all, Sprites::ID::blueSet},
			{56, 200, 56, 56, Resources::ID::all, Sprites::ID::greenSet},
			{280, 200, 56, 56, Resources::ID::all, Sprites::ID::orangeSet},
			{168, 200, 56, 56, Resources::ID::all, Sprites::ID::whiteSet},
			{224, 200, 56, 56, Resources::ID::all, Sprites::ID::brownSet},

			{336, 200, 56, 56, Resources::ID::all, Sprites::ID::redCity},
			{448, 200, 56, 56, Resources::ID::all, Sprites::ID::blueCity},
			{392, 200, 56, 56, Resources::ID::all, Sprites::ID::greenCity},
			{616, 200, 56, 56, Resources::ID::all, Sprites::ID::orangeCity},
			{504, 200, 56, 56, Resources::ID::all, Sprites::ID::whiteCity},
			{560, 200, 56, 56, Resources::ID::all, Sprites::ID::brownCity},

			{672, 200, 56, 56, Resources::ID::all, Sprites::ID::selectedCity},
			{728, 200, 56, 56, Resources::ID::all, Sprites::ID::hookCity},

			{ 784, 200, 56, 56, Resources::ID::all, Sprites::ID::selRedSet},
			{ 896, 200, 56, 56, Resources::ID::all, Sprites::ID::selBlueSet},
			{ 840, 200, 56, 56, Resources::ID::all, Sprites::ID::selGreenSet},
			{ 1064, 200, 56, 56, Resources::ID::all, Sprites::ID::selOrangeSet},
			{ 952, 200, 56, 56, Resources::ID::all, Sprites::ID::selWhiteSet},
			{ 1008, 200, 56, 56, Resources::ID::all, Sprites::ID::selBrownSet},

			{ 1120, 200, 56, 56, Resources::ID::all, Sprites::ID::selRedCity},
			{ 1232, 200, 56, 56, Resources::ID::all, Sprites::ID::selBlueCity},
			{ 1176, 200, 56, 56, Resources::ID::all, Sprites::ID::selGreenCity},
			{ 1400, 200, 56, 56, Resources::ID::all, Sprites::ID::selOrangeCity},
			{ 1288, 200, 56, 56, Resources::ID::all, Sprites::ID::selWhiteCity},
			{ 1344, 200, 56, 56, Resources::ID::all, Sprites::ID::selBrownCity},

			{ 1456, 200, 56, 56, Resources::ID::all, Sprites::ID::n2 },
			{ 1512, 200, 56, 56, Resources::ID::all, Sprites::ID::n3 },
			{ 1568, 200, 56, 56, Resources::ID::all, Sprites::ID::n4 },
			{ 1624, 200, 56, 56, Resources::ID::all, Sprites::ID::n5 },
			{ 1680, 200, 56, 56, Resources::ID::all, Sprites::ID::n6 },
			{ 1736, 200, 56, 56, Resources::ID::all, Sprites::ID::n8 },
			{ 1792, 200, 56, 56, Resources::ID::all, Sprites::ID::n9 },
			{ 1848, 200, 56, 56, Resources::ID::all, Sprites::ID::n10 },
			{ 1904, 200, 56, 56, Resources::ID::all, Sprites::ID::n11 },
			{ 1960, 200, 56, 56, Resources::ID::all, Sprites::ID::n12 },

			{0, 256, 102, 16, Resources::ID::all, Sprites::ID::redRoad},
			{32, 256, 102, 16, Resources::ID::all, Sprites::ID::blueRoad},
			{16, 256, 102, 16, Resources::ID::all, Sprites::ID::greenRoad},
			{80, 256, 102, 16, Resources::ID::all, Sprites::ID::orangeRoad },
			{48, 256, 102, 16, Resources::ID::all, Sprites::ID::whiteRoad },
			{64, 256, 102, 16, Resources::ID::all, Sprites::ID::brownRoad },

			{96, 256, 102, 16, Resources::ID::all, Sprites::ID::selectedRoad },
			{112, 256, 102, 16, Resources::ID::all, Sprites::ID::hookRoad },

			{128, 256, 102, 16, Resources::ID::all, Sprites::ID::selRedRoad },
			{160, 256, 102, 16, Resources::ID::all, Sprites::ID::selBlueRoad },
			{144, 256, 102, 16, Resources::ID::all, Sprites::ID::selGreenRoad },
			{208, 256, 102, 16, Resources::ID::all, Sprites::ID::selOrangeRoad },
			{176, 256, 102, 16, Resources::ID::all, Sprites::ID::selWhiteRoad },
			{192, 256, 102, 16, Resources::ID::all, Sprites::ID::selBrownRoad },

			{224, 256, 30, 26, Resources::ID::all, Sprites::ID::robot },
			{224, 286, 12, 18, Resources::ID::all, Sprites::ID::check },

			{0, 359, 547, 153, Resources::ID::all, Sprites::ID::harbor_stone },
			{154, 359, 547, 153, Resources::ID::all, Sprites::ID::harbor_3_brick },
			{308, 359, 547, 153, Resources::ID::all, Sprites::ID::harbor_3_sheep },
			{462, 359, 547, 153, Resources::ID::all, Sprites::ID::harbor_3 },
			{616, 359, 547, 153, Resources::ID::all, Sprites::ID::harbor_3_weat },
			{770, 359, 547, 153, Resources::ID::all, Sprites::ID::harbor_wood },

			{1392, 0, 27, 96, Resources::ID::all, Sprites::ID::btnGenHexesUp},
			{1392, 27, 27, 96, Resources::ID::all, Sprites::ID::btnGenHexesDown},
			{0, 0, 1080, 1920, Resources::ID::background, Sprites::ID::background },

			{924, 358, 91, 59, Resources::ID::all, Sprites::ID::stoneCard},
			{983, 358, 91, 59, Resources::ID::all, Sprites::ID::brickCard},
			{1042, 358, 91, 59, Resources::ID::all, Sprites::ID::sheepCard},
			{1101, 358, 91, 59, Resources::ID::all, Sprites::ID::wheatCard},
			{1160, 358, 91, 59, Resources::ID::all, Sprites::ID::woodCard},

			{1219, 358, 108, 71, Resources::ID::all, Sprites::ID::oneScoreTownHallCard},
			{1290, 358, 108, 71, Resources::ID::all, Sprites::ID::oneScoreMarketCard},
			{1361, 358, 108, 71, Resources::ID::all, Sprites::ID::oneScoreUniversityCard},
			{1432, 358, 108, 71, Resources::ID::all, Sprites::ID::oneScoreChurchCard},
			{1503, 358, 108, 71, Resources::ID::all, Sprites::ID::oneScoreLibraryCard},
			{1574, 358, 108, 71, Resources::ID::all, Sprites::ID::roadBuildingCard},
			{1645, 358, 108, 71, Resources::ID::all, Sprites::ID::monopolyCard},
			{1716, 358, 108, 71, Resources::ID::all, Sprites::ID::inventionCard},
			{1787, 358, 108, 71, Resources::ID::all, Sprites::ID::knightCard}
		} 
	};
}


enum class BoardObjects : unsigned int {
	deck = 10000,
	hex,
	city,
	road,
	roadHooks,
	settelment,	
	building,
	buildingHooks,
	borders,
	button,
	label,
	rectangle,
	icon,
	abstract,
	none
};


/* knight, monopoly, roads, twoRes, winPoint */
const std::array<int, kCardCount> max_dev_cards{
	14, 2, 2, 2, 5
};

enum class btnStates: unsigned int {normal = 0, hover, pressed};
enum class objButtonEvents: unsigned int {genHexes = 0, nextTurn, addResource, nothing, clearTrade, bankPortExchange};

//typedef int node[kMaxConnections];
typedef std::array<int, kMaxConnections> node;

//êàæäîìó ãåêñó ïðèíàäëåæèò 6 òî÷åê
typedef std::array<int, kHex_to_points> hex_point;

//ðåñóðñû è ïîðòû â èãðå, ãäå tin1 - ïîðò 3:1, non - îòñóòñòâèå ðåñóðñà (äëÿ ãåêñîâ áåç ðåñóðñà)
enum class resource { wood, brick, sheep, weat, stone, non, tin1 };

//construction and buying objects
enum class construction_and_buying_objects {
	c_road = 0,
	c_settelment,
	c_city,
	c_dev_card
};

//cost of construction and buying objects
const unsigned kPricesCount = 4;
const std::array<std::array<int, kResCount>, kPricesCount> costAndBuyingPrices
{ {
		/*wood, brick, sheep, weat, stone*/
		{1, 1, 0, 0, 0},	//c_road
		{1, 1, 1, 1, 0},	//c_settelment
		{0, 0, 0, 2, 3},	//c_city
		{0, 0, 1, 1, 1}		//c_dev_card
	} };

//standart dices for 4ppl board
const int kStandartDiceSequence = 18;
const std::array<int, kStandartDiceSequence> diceSequence = {5, 2, 6, 3, 8, 10, 9, 12, 11, 4, 8, 10, 9, 4, 5, 6, 3, 11};
const std::array<std::array<int, kHexCount>, 6> hexSequence = { {
	{0, 3, 7, 12, 16, 17, 18, 15, 11, 6, 2, 1, 4, 8, 13, 14, 10, 5, 9 },
	{7, 12, 16, 17, 18, 15, 11, 6, 2, 1, 0, 3, 8, 13, 14, 10, 5, 4, 9 },
	{16, 17, 18, 15, 11, 6, 2, 1, 0, 3, 7, 12, 13, 14, 10, 5, 4, 8, 9 },
	{18, 15, 11, 6, 2, 1, 0, 3, 7, 12, 16, 17, 14, 10, 5, 4, 8, 13, 9 },
	{11, 6, 2, 1, 0, 3, 7, 12, 16, 17, 18, 15, 10, 5, 4, 8, 13, 14, 9 },
	{2, 1, 0, 3, 7, 12, 16, 17, 18, 15, 11, 6, 5, 4, 8, 13, 14, 10, 9 }
}};

const std::array<std::array<int, 2>, 72> road_id_to_from_to = { {
	{0, 4},	{0, 3},	{1, 5},	{1, 4},	{2, 6},	{2, 5},	{3, 7},	{4, 8},	{5, 9},	{6, 10},
	{7, 12}, {7, 11}, {8, 13}, {8, 12},	{9, 14}, {9, 13}, {10, 15},	{10, 14}, {11, 16},	{12, 17},
	{13, 18}, {14, 19},	{15, 20}, {16, 22},	{16, 21}, {17, 23}, {17, 22}, {18, 24},	{18, 23}, {19, 25},
	{19, 24}, {20, 26},	{20, 25}, {21, 27}, {22, 28}, {23, 29},	{24, 30}, {25, 31},	{26, 32}, {27, 33},
	{28, 34},	{28, 33},	{29, 35},	{29, 34},	{30, 36}, {30, 35}, {31, 37}, {31, 36},	{32, 37},	{33, 38},
	{34, 39},	{35, 40},	{36, 41},	{37, 42},	{38, 43},	{39, 44},	{39, 43},	{40, 45},	{40, 44},	{41, 46},
	{41, 45},	{42, 46},	{43, 47},	{44, 48},	{45, 49},	{46, 50},	{47, 51},	{48, 52},	{48, 51},	{49, 53},
	{49, 52},	{50, 53}
} };

//standart ports for 4ppl board
const std::array<int, 30> harborPoints =
{ {
		16, 11, 7, 21, 27,	//0
		4, 1, 5, 0, 3,		//1
		10, 15, 20, 2, 6,	//2
		37, 42, 46, 26, 32,	//3
		49, 52, 48, 50, 53,	//4
		43, 38, 33, 47, 51	//5
	} };

const std::array<resource, 30> harborResources =
{ {
	resource::stone, resource::stone, resource::non, resource::non, resource::non,	//harbor_stone
	resource::non, resource::brick, resource::brick, resource::tin1, resource::tin1,	//harbor_3_brick
	resource::non, resource::sheep, resource::sheep, resource::tin1, resource::tin1,	//harbor_3_sheep
	resource::tin1, resource::tin1, resource::non, resource::non, resource::non,		//harbor_3	
	resource::non, resource::weat, resource::weat, resource::tin1, resource::tin1,	//harbor_3_weat
	resource::wood, resource::wood, resource::non, resource::non, resource::non		//harbor_wood
} };

//hexes for shuffle
const std::vector<resource> hexForShuffling = {
	resource::wood, resource::wood, resource::wood, resource::wood, 
	resource::brick, resource::brick, resource::brick, 
	resource::sheep, resource::sheep, resource::sheep, resource::sheep, 
	resource::weat, resource::weat, resource::weat, resource::weat, 
	resource::stone, resource::stone, resource::stone, 
	resource::non };

class CatanGUI;
class Board;
class Object;
class Drag;
class AiGameBoard;
class CatanAi;
class GameState;
class Roads;
class Players;
class Buildings;
class Bank;
struct _Board;
struct Sample;

extern const std::unique_ptr<CatanGUI> catan;
