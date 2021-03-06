////////////////////////////////////////////////////////////////////////
// OpenTibia - an opensource roleplaying game
////////////////////////////////////////////////////////////////////////
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////

#ifndef __ENUMS__
#define __ENUMS__

#include <string>
#include <list>

#define PLAYER_ID_RANGE 0x10000000
#define MONSTER_ID_RANGE 0x40000000
#define NPC_ID_RANGE 0x80000000

enum Vocation_t
{
	VOCATION_NONE = 0,
	VOCATION_SORCERER = 1,
	VOCATION_DRUID = 2,
	VOCATION_PALADIN = 3,
	VOCATION_KNIGHT = 4,
	VOCATION_MASTERSORCERER = 5,
	VOCATION_ELDERDRUID = 6,
	VOCATION_ROYALPALADIN = 7,
	VOCATION_ELITEKNIGHT = 8
};

enum VipStatus_t
{
	VIPSTATUS_OFFLINE = 0,
	VIPSTATUS_ONLINE = 1,
	VIPSTATUS_PENDING = 2
};

enum MarketAction_t
{
	MARKETACTION_BUY = 0,
	MARKETACTION_SELL = 1
};

enum MarketRequest_t
{
	MARKETREQUEST_OWN_OFFERS = 0xFFFE,
	MARKETREQUEST_OWN_HISTORY = 0xFFFF
};

enum MarketOfferState_t
{
	OFFERSTATE_ACTIVE = 0,
	OFFERSTATE_CANCELLED = 1,
	OFFERSTATE_EXPIRED = 2,
	OFFERSTATE_ACCEPTED = 3,

	OFFERSTATE_ACCEPTEDEX = 255
};

enum CreatureType_t
{
	CREATURETYPE_PLAYER = 0,
	CREATURETYPE_MONSTER = 1,
	CREATURETYPE_NPC = 2,
	CREATURETYPE_SUMMON_OWN = 3,
	CREATURETYPE_SUMMON_OTHERS = 4
};

enum DatabaseEngine_t
{
	DATABASE_ENGINE_NONE = 0,
	DATABASE_ENGINE_MYSQL,
	DATABASE_ENGINE_SQLITE,
	DATABASE_ENGINE_POSTGRESQL
};

enum Encryption_t
{
	ENCRYPTION_PLAIN = 0,
	ENCRYPTION_MD5,
	ENCRYPTION_SHA1,
	ENCRYPTION_SHA256,
	ENCRYPTION_SHA512
};

enum GuildLevel_t
{
	GUILDLEVEL_NONE = 0,
	GUILDLEVEL_MEMBER,
	GUILDLEVEL_VICE,
	GUILDLEVEL_LEADER
};

enum Channels_t
{
	CHANNEL_GUILD = 0x00,
	CHANNEL_PARTY = 0x01,
	CHANNEL_HELP = 0x07,
	CHANNEL_DEFAULT = 0xFFFE, //internal usage only, there is no such channel
	CHANNEL_PRIVATE = 0xFFFF
};

enum RaceType_t
{
	RACE_NONE = 0,
	RACE_VENOM,
	RACE_BLOOD,
	RACE_UNDEAD,
	RACE_FIRE,
	RACE_ENERGY
};

enum CombatType_t
{
	COMBAT_NONE				= 0x00,
	COMBAT_ALL				= COMBAT_NONE, /* for internal use only.*/

	COMBAT_PHYSICALDAMAGE	= 1 << 0,
	COMBAT_ENERGYDAMAGE		= 1 << 1,
	COMBAT_EARTHDAMAGE		= 1 << 2,
	COMBAT_FIREDAMAGE		= 1 << 3,
	COMBAT_UNDEFINEDDAMAGE	= 1 << 4,
	COMBAT_LIFEDRAIN		= 1 << 5,
	COMBAT_MANADRAIN		= 1 << 6,
	COMBAT_HEALING			= 1 << 7,
	COMBAT_DROWNDAMAGE		= 1 << 8,
	COMBAT_ICEDAMAGE		= 1 << 9,
	COMBAT_HOLYDAMAGE		= 1 << 10,
	COMBAT_DEATHDAMAGE		= 1 << 11,

	COMBAT_FIRST			= COMBAT_NONE,
	COMBAT_LAST				= COMBAT_DEATHDAMAGE
};

enum CombatParam_t
{
	COMBATPARAM_NONE = 0,
	COMBATPARAM_COMBATTYPE,
	COMBATPARAM_EFFECT,
	COMBATPARAM_DISTANCEEFFECT,
	COMBATPARAM_BLOCKEDBYSHIELD,
	COMBATPARAM_BLOCKEDBYARMOR,
	COMBATPARAM_TARGETCASTERORTOPMOST,
	COMBATPARAM_CREATEITEM,
	COMBATPARAM_AGGRESSIVE,
	COMBATPARAM_DISPEL,
	COMBATPARAM_USECHARGES,
	COMBATPARAM_TARGETPLAYERSORSUMMONS,
	COMBATPARAM_DIFFERENTAREADAMAGE,
	COMBATPARAM_HITEFFECT,
	COMBATPARAM_HITCOLOR,
	COMBATPARAM_ELEMENTTYPE,
	COMBATPARAM_ELEMENTDAMAGE
};

enum CallBackParam_t
{
	CALLBACKPARAM_NONE = 0,
	CALLBACKPARAM_LEVELMAGICVALUE,
	CALLBACKPARAM_SKILLVALUE,
	CALLBACKPARAM_TARGETTILECALLBACK,
	CALLBACKPARAM_TARGETCREATURECALLBACK
};

enum ConditionParam_t
{
	CONDITIONPARAM_OWNER = 1,
	CONDITIONPARAM_TICKS,
	CONDITIONPARAM_OUTFIT,
	CONDITIONPARAM_HEALTHGAIN,
	CONDITIONPARAM_HEALTHTICKS,
	CONDITIONPARAM_MANAGAIN,
	CONDITIONPARAM_MANATICKS,
	CONDITIONPARAM_DELAYED,
	CONDITIONPARAM_SPEED,
	CONDITIONPARAM_LIGHT_LEVEL,
	CONDITIONPARAM_LIGHT_COLOR,
	CONDITIONPARAM_SOULGAIN,
	CONDITIONPARAM_SOULTICKS,
	CONDITIONPARAM_MINVALUE,
	CONDITIONPARAM_MAXVALUE,
	CONDITIONPARAM_STARTVALUE,
	CONDITIONPARAM_TICKINTERVAL,
	CONDITIONPARAM_FORCEUPDATE,
	CONDITIONPARAM_SKILL_MELEE,
	CONDITIONPARAM_SKILL_FIST,
	CONDITIONPARAM_SKILL_CLUB,
	CONDITIONPARAM_SKILL_SWORD,
	CONDITIONPARAM_SKILL_AXE,
	CONDITIONPARAM_SKILL_DISTANCE,
	CONDITIONPARAM_SKILL_SHIELD,
	CONDITIONPARAM_SKILL_FISHING,
	CONDITIONPARAM_STAT_MAXHEALTH,
	CONDITIONPARAM_STAT_MAXMANA,
	CONDITIONPARAM_STAT_SOUL,
	CONDITIONPARAM_STAT_MAGICLEVEL,
	CONDITIONPARAM_STAT_MAXHEALTHPERCENT,
	CONDITIONPARAM_STAT_MAXMANAPERCENT,
	CONDITIONPARAM_STAT_SOULPERCENT,
	CONDITIONPARAM_STAT_MAGICLEVELPERCENT,
	CONDITIONPARAM_SKILL_MELEEPERCENT,
	CONDITIONPARAM_SKILL_FISTPERCENT,
	CONDITIONPARAM_SKILL_CLUBPERCENT,
	CONDITIONPARAM_SKILL_SWORDPERCENT,
	CONDITIONPARAM_SKILL_AXEPERCENT,
	CONDITIONPARAM_SKILL_DISTANCEPERCENT,
	CONDITIONPARAM_SKILL_SHIELDPERCENT,
	CONDITIONPARAM_SKILL_FISHINGPERCENT,
	CONDITIONPARAM_PERIODICDAMAGE,
	CONDITIONPARAM_BUFF,
	CONDITIONPARAM_SUBID,
	CONDITIONPARAM_FIELD,
	CONDITIONPARAM_COMBAT_PHYSICALDAMAGE,
	CONDITIONPARAM_COMBAT_ENERGYDAMAGE,
	CONDITIONPARAM_COMBAT_EARTHDAMAGE,
	CONDITIONPARAM_COMBAT_FIREDAMAGE,
	CONDITIONPARAM_COMBAT_UNDEFINEDDAMAGE,
	CONDITIONPARAM_COMBAT_LIFEDRAIN,
	CONDITIONPARAM_COMBAT_MANADRAIN,
	CONDITIONPARAM_COMBAT_HEALING,
	CONDITIONPARAM_COMBAT_DROWNDAMAGE,
	CONDITIONPARAM_COMBAT_ICEDAMAGE,
	CONDITIONPARAM_COMBAT_HOLYDAMAGE,
	CONDITIONPARAM_COMBAT_DEATHDAMAGE
};

enum Exhaust_t
{
	EXHAUST_OTHER = 0,
	EXHAUST_SPELLGROUP_NONE = 1,
	EXHAUST_SPELLGROUP_ATTACK = 2,
	EXHAUST_SPELLGROUP_HEALING = 3,
	EXHAUST_SPELLGROUP_SUPPORT = 4,
	EXHAUST_SPELLGROUP_SPECIAL = 5,
	EXHAUST_MELEE = 6
};

enum BlockType_t
{
	BLOCK_NONE = 0,
	BLOCK_DEFENSE,
	BLOCK_ARMOR,
	BLOCK_IMMUNITY
};

enum Reflect_t
{
	REFLECT_FIRST = 0,
	REFLECT_PERCENT = REFLECT_FIRST,
	REFLECT_CHANCE,
	REFLECT_LAST = REFLECT_CHANCE
};

enum Increment_t
{
	INCREMENT_FIRST = 0,
	HEALING_VALUE = INCREMENT_FIRST,
	HEALING_PERCENT,
	MAGIC_VALUE,
	MAGIC_PERCENT,
	INCREMENT_LAST = MAGIC_PERCENT
};

enum stats_t
{
	STAT_FIRST = 0,
	STAT_MAXHEALTH = STAT_FIRST,
	STAT_MAXMANA,
	STAT_SOUL,
	STAT_LEVEL,
	STAT_MAGICLEVEL,
	STAT_LAST = STAT_MAGICLEVEL
};

enum lossTypes_t
{
	LOSS_FIRST = 0,
	LOSS_EXPERIENCE = LOSS_FIRST,
	LOSS_MANA,
	LOSS_SKILLS,
	LOSS_CONTAINERS,
	LOSS_ITEMS,
	LOSS_LAST = LOSS_ITEMS
};

enum formulaType_t
{
	FORMULA_UNDEFINED = 0,
	FORMULA_LEVELMAGIC,
	FORMULA_SKILL,
	FORMULA_VALUE
};

enum ConditionId_t
{
	CONDITIONID_DEFAULT = -1,
	CONDITIONID_COMBAT = 0,
	CONDITIONID_HEAD,
	CONDITIONID_NECKLACE,
	CONDITIONID_BACKPACK,
	CONDITIONID_ARMOR,
	CONDITIONID_RIGHT,
	CONDITIONID_LEFT,
	CONDITIONID_LEGS,
	CONDITIONID_FEET,
	CONDITIONID_RING,
	CONDITIONID_AMMO,
	CONDITIONID_OUTFIT,
	CONDITIONID_MOUNT
};

enum PlayerSex_t
{
	PLAYERSEX_FEMALE = 0,
	PLAYERSEX_MALE
	// DO NOT ADD HERE! Every higher sex is only for your
	// own use- each female should be even and male odd.
};

enum WarType_t
{
	WAR_FIRST = 0,
	WAR_GUILD = WAR_FIRST,
	WAR_ENEMY,
	WAR_LAST = WAR_ENEMY
};

struct War_t
{
	War_t()
	{
		war = 0;
		type = WAR_FIRST;

		memset(ids, 0, sizeof(ids));
		memset(frags, 0, sizeof(frags));

		limit = 0;
		payment = 0;
	}

	uint32_t war;
	WarType_t type;

	uint32_t ids[WAR_LAST + 1];
	std::string names[WAR_LAST + 1];
	uint16_t frags[WAR_LAST + 1];

	uint16_t limit;
	uint64_t payment;
};

struct Outfit_t
{
	Outfit_t()
	{
		lookType = lookTypeEx = lookMount = 0;
		lookHead = lookBody = lookLegs = lookFeet = lookAddons = 0;
	}
	Outfit_t(uint16_t _lookType)
	{
		lookType = _lookType;
		lookTypeEx = lookMount = 0;
		lookHead = lookBody = lookLegs = lookFeet = lookAddons = 0;
	}

	uint16_t lookType, lookMount, lookTypeEx;
	uint8_t lookHead, lookBody, lookLegs, lookFeet, lookAddons;

	bool operator==(const Outfit_t& o) const
	{
		return (o.lookAddons == lookAddons && o.lookMount == lookMount
			&& o.lookType == lookType && o.lookTypeEx == lookTypeEx
			&& o.lookHead == lookHead && o.lookBody == lookBody
			&& o.lookLegs == lookLegs && o.lookFeet == lookFeet);
	}

	bool operator!=(const Outfit_t& o) const
	{
		return !(*this == o);
	}
};

struct LightInfo
{
	uint32_t level, color;

	LightInfo() {level = color = 0;}
	LightInfo(uint32_t _level, uint32_t _color):
		level(_level), color(_color) {}
};

struct ShopInfo
{
	uint32_t itemId;
	int32_t subType, buyPrice, sellPrice;
	std::string itemName;

	ShopInfo()
	{
		itemId = 0;
		subType = 1;
		buyPrice = sellPrice = -1;
		itemName = "";
	}
	ShopInfo(uint32_t _itemId, int32_t _subType = 1, int32_t _buyPrice = -1, int32_t _sellPrice = -1,
		const std::string& _itemName = ""): itemId(_itemId), subType(_subType), buyPrice(_buyPrice),
		sellPrice(_sellPrice), itemName(_itemName) {}
};

struct MarketOffer
{
	uint32_t price;
	uint32_t timestamp;
	uint16_t amount;
	uint16_t counter;
	uint16_t itemId;
	std::string playerName;
};

struct MarketOfferEx
{
	uint32_t playerId;
	uint32_t timestamp;
	uint32_t price;
	uint16_t amount;
	uint16_t counter;
	uint16_t itemId;
	MarketAction_t type;
	std::string playerName;
};

struct ExpiredMarketOffer
{
	uint32_t id;
	uint32_t price;
	uint16_t amount;
	uint16_t itemId;
	uint32_t playerId;
};

struct HistoryMarketOffer
{
	uint32_t timestamp;
	uint32_t price;
	uint16_t itemId;
	uint16_t amount;
	MarketOfferState_t state;
};

struct MarketStatistics
{
	MarketStatistics()
	{
		numTransactions = 0;
		highestPrice = 0;
		totalPrice = 0;
		lowestPrice = 0;
	}

	uint32_t numTransactions;
	uint32_t highestPrice;
	uint64_t totalPrice;
	uint32_t lowestPrice;
};

struct ModalChoice
{
	ModalChoice() 
	{
		id = 0;
		value = "";
	}
	uint8_t id;
	std::string value;
};

struct ModalDialog
{
	ModalDialog() 
	{
		id = 0;
		title = "";
		message = "";
		buttonEnter = 0;
		buttonEscape = 0;
		popup = false;
	}

	uint32_t id;
	std::string title;
	std::string message;
	uint8_t buttonEnter;
	uint8_t buttonEscape; 
	std::vector<ModalChoice> buttons; 
	std::vector<ModalChoice> choices;
	bool popup;
};

struct VIP_t
{
	VIP_t()
	{
		icon = 0;
		description = "";
		notify = false;
	};

	uint32_t icon;
	std::string description;
	bool notify;
};

typedef std::list<MarketOffer> MarketOfferList;
typedef std::list<ExpiredMarketOffer> ExpiredMarketOfferList;
typedef std::list<HistoryMarketOffer> HistoryMarketOfferList;
typedef std::list<ShopInfo> ShopInfoList;
#endif
