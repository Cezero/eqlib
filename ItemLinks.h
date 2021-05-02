/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include "Containers.h"
#include "CXStr.h"

namespace eqlib {

class ItemClient;

// Strips raw item links from the input text. Returns new string with the links stripped.
EQLIB_OBJECT CXStr CleanItemTags(const CXStr& In, bool bKeepSpam = false);

// Converts raw item links in the string into STML tags that can be displayed in an STML window.
EQLIB_OBJECT void ConvertItemTags(CXStr& str, bool canDisplay = true);

// Enumeration of different types of item tags
enum ETagCodes
{
	ETAG_ITEM = 0,
	ETAG_PLAYER,
	ETAG_SPAM,
	ETAG_ACHIEVEMENT,
	ETAG_DIALOG_RESPONSE,
	ETAG_COMMAND,
	ETAG_SPELL,
	ETAG_FACTION,
	ETAG_COMMAND2,
	ETAG_UNKNOWN9,

	ETAG_COUNT,
	ETAG_FIRST = ETAG_ITEM,
	ETAG_LAST = ETAG_UNKNOWN9,

	ETAG_INVALID = -1,
};

struct TextTagInfo
{
	ETagCodes tagCode = ETAG_INVALID;
	std::string_view link;
	std::string_view text;
};

//----------------------------------------------------------------------------
// ExtractLinks:
// Finds all linked tags in the provided message and returns them through the provided buffer.
// These results are only valid for as long as the input string is valid. That is, the tags
// returned are simply references into the source string.
//
// |outTagInfo| should be an array of TextTagInfos, and |numTagInfo|s should be its size.
// The max number of links in a single message should be 10, so the largest array that should
// be needed is 11. (10 links + the message author link).
EQLIB_OBJECT size_t ExtractLinks(std::string_view str, TextTagInfo* outTagInfo, size_t numTagInfos);

// The max number of links that are possible to find in a single message.
constexpr int MAX_EXTRACT_LINKS = 11;

// Returns the first link found in the given string. This information references the input string and
// is only valid for as long as the input string is valid.
EQLIB_OBJECT TextTagInfo ExtractLink(std::string_view inputString);

//----------------------------------------------------------------------------
// Item Links

// Create an item link from the given item.
EQLIB_API bool GetItemLink(ItemClient* Item, char* Buffer, size_t BufferSize, bool Clickable = true);

template <size_t Size>
inline bool GetItemLink(ItemClient* Item, char(&Buffer)[Size], bool Clickable = true) { return GetItemLink(Item, Buffer, Size, Clickable); }

struct ItemLinkInfo
{
	int itemID;
	int sockets[MAX_AUG_SOCKETS];
	int socketLuck[MAX_AUG_SOCKETS];
	bool isEvolving;
	int evolutionGroup;
	int evolutionLevel;
	int ornamentationIconID;
	int luck;
	uint32_t itemHash;
	std::string_view itemName;       // only provided if full link is passed.

	inline bool IsSocketed() const
	{
		for (int i = 0; i < MAX_AUG_SOCKETS; ++i)
		{
			if (sockets[i] != 0)
				return true;
		}
		return false;
	}
};

// Parses an item link. Can take a full link or just the data part. If only the data
// is provided, then the item name will be absent.
EQLIB_API bool ParseItemLink(std::string_view link, ItemLinkInfo& linkInfo);

} // namespace eqlib
