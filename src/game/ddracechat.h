/* (c) Shereef Marzouk. See "licence DDRace.txt" and the readme.txt in the root of the distribution for more information. */

// This file can be included several times.

#ifndef CHAT_COMMAND
#define CHAT_COMMAND(name, params, flags, callback, userdata, help)
#endif

CHAT_COMMAND("credits", "", CFGFLAG_CHAT | CFGFLAG_SERVER, ConCredits, this, "Shows the credits of the DDNet mod")
CHAT_COMMAND("rules", "", CFGFLAG_CHAT | CFGFLAG_SERVER, ConRules, this, "Shows the server rules")
CHAT_COMMAND("emote", "?s[emote name] i[duration in seconds]", CFGFLAG_CHAT | CFGFLAG_SERVER, ConEyeEmote, this, "Sets your tee's eye emote")
CHAT_COMMAND("eyeemote", "?s['on'|'off'|'toggle']", CFGFLAG_CHAT | CFGFLAG_SERVER, ConSetEyeEmote, this, "Toggles use of standard eye-emotes on/off, eyeemote s, where s = on for on, off for off, toggle for toggle and nothing to show current status")
CHAT_COMMAND("settings", "?s[configname]", CFGFLAG_CHAT | CFGFLAG_SERVER, ConSettings, this, "Shows gameplay information for this server")
CHAT_COMMAND("help", "?r[command]", CFGFLAG_CHAT | CFGFLAG_SERVER, ConHelp, this, "Shows help to command r, general help if left blank")
CHAT_COMMAND("info", "", CFGFLAG_CHAT | CFGFLAG_SERVER, ConInfo, this, "Shows info about this server")
CHAT_COMMAND("list", "?s[filter]", CFGFLAG_CHAT, ConList, this, "List connected players with optional case-insensitive substring matching filter")
CHAT_COMMAND("me", "r[message]", CFGFLAG_CHAT | CFGFLAG_SERVER | CFGFLAG_NONTEEHISTORIC, ConMe, this, "Like the famous irc command '/me says hi' will display '<yourname> says hi'")
CHAT_COMMAND("w", "s[player name] r[message]", CFGFLAG_CHAT | CFGFLAG_SERVER | CFGFLAG_NONTEEHISTORIC, ConWhisper, this, "Whisper something to someone (private message)")
CHAT_COMMAND("whisper", "s[player name] r[message]", CFGFLAG_CHAT | CFGFLAG_SERVER | CFGFLAG_NONTEEHISTORIC, ConWhisper, this, "Whisper something to someone (private message)")
CHAT_COMMAND("c", "r[message]", CFGFLAG_CHAT | CFGFLAG_SERVER | CFGFLAG_NONTEEHISTORIC, ConConverse, this, "Converse with the last person you whispered to (private message)")
CHAT_COMMAND("converse", "r[message]", CFGFLAG_CHAT | CFGFLAG_SERVER | CFGFLAG_NONTEEHISTORIC, ConConverse, this, "Converse with the last person you whispered to (private message)")
CHAT_COMMAND("dnd", "", CFGFLAG_CHAT | CFGFLAG_SERVER | CFGFLAG_NONTEEHISTORIC, ConDND, this, "Toggle Do Not Disturb (no chat and server messages)")
CHAT_COMMAND("dnd", "", CFGFLAG_CHAT | CFGFLAG_SERVER | CFGFLAG_NONTEEHISTORIC, ConXONX, this, "Toggle Do Not Disturb (no chat and server messages)")

#undef CHAT_COMMAND
