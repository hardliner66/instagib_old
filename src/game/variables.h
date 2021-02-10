
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_VARIABLES_H
#define GAME_VARIABLES_H
#undef GAME_VARIABLES_H // this file will be included several times

// client
MACRO_CONFIG_INT(ClPredict, cl_predict, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict client movements")
MACRO_CONFIG_INT(ClPredictDummy, cl_predict_dummy, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict dummy movements")
MACRO_CONFIG_INT(ClAntiPingLimit, cl_antiping_limit, 0, 0, 200, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Antiping limit (0 to disable)")
MACRO_CONFIG_INT(ClAntiPing, cl_antiping, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable antiping, i. e. more aggressive prediction.")
MACRO_CONFIG_INT(ClAntiPingPlayers, cl_antiping_players, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict other player's movement more aggressively (only enabled if cl_antiping is set to 1)")
MACRO_CONFIG_INT(ClAntiPingGrenade, cl_antiping_grenade, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict grenades (only enabled if cl_antiping is set to 1)")
MACRO_CONFIG_INT(ClAntiPingWeapons, cl_antiping_weapons, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict weapon projectiles (only enabled if cl_antiping is set to 1)")
MACRO_CONFIG_INT(ClAntiPingSmooth, cl_antiping_smooth, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Make the prediction of other player's movement smoother")
MACRO_CONFIG_INT(ClAntiPingGunfire, cl_antiping_gunfire, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict gunfire and show predicted weapon physics (with cl_antiping_grenade 1 and cl_antiping_weapons 1)")

MACRO_CONFIG_INT(ClNameplates, cl_nameplates, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show name plates")
MACRO_CONFIG_INT(ClAfkEmote, cl_afk_emote, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show zzz emote next to afk players")
MACRO_CONFIG_INT(ClNameplatesAlways, cl_nameplates_always, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Always show name plates disregarding of distance")
MACRO_CONFIG_INT(ClNameplatesTeamcolors, cl_nameplates_teamcolors, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Use team colors for name plates")
MACRO_CONFIG_INT(ClNameplatesSize, cl_nameplates_size, 50, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of the name plates from 0 to 100%")
MACRO_CONFIG_INT(ClNameplatesClan, cl_nameplates_clan, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show clan in name plates")
MACRO_CONFIG_INT(ClNameplatesClanSize, cl_nameplates_clan_size, 30, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of the clan plates from 0 to 100%")
MACRO_CONFIG_INT(ClNameplatesIDs, cl_nameplates_ids, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show IDs in name plates")
MACRO_CONFIG_INT(ClNameplatesHA, cl_nameplates_ha, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show Health and Armor in name plates")
MACRO_CONFIG_INT(ClNameplatesHASize, cl_nameplates_ha_size, 50, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of the health and armor nameplates from 0 to 100%")
MACRO_CONFIG_INT(ClNameplatesOwn, cl_nameplates_own, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show own name plate (useful for demo recording)")
MACRO_CONFIG_INT(ClNameplatesFriendMark, cl_nameplates_friendmark, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show friend mark (♥) in name plates")
MACRO_CONFIG_INT(ClTextEntities, cl_text_entities, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render textual entity data")
MACRO_CONFIG_INT(ClTextEntitiesSize, cl_text_entities_size, 100, 1, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of textual entity data from 1 to 100%")

MACRO_CONFIG_COL(ClAuthedPlayerColor, cl_authed_player_color, 5898211, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color of name of authenticated player in scoreboard")
MACRO_CONFIG_COL(ClSameClanColor, cl_same_clan_color, 5898211, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Clan color of players with the same clan as you in scoreboard.")

MACRO_CONFIG_INT(ClEnablePingColor, cl_enable_ping_color, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Whether ping is colored in scoreboard.")
MACRO_CONFIG_INT(ClAutoswitchWeapons, cl_autoswitch_weapons, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Auto switch weapon on pickup")
MACRO_CONFIG_INT(ClAutoswitchWeaponsOutOfAmmo, cl_autoswitch_weapons_out_of_ammo, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Auto switch weapon when out of ammo")

MACRO_CONFIG_INT(ClShowhud, cl_showhud, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD")
MACRO_CONFIG_INT(ClShowhudHealthAmmo, cl_showhud_healthammo, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Health + Ammo)")
MACRO_CONFIG_INT(ClShowhudScore, cl_showhud_score, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Score)")
MACRO_CONFIG_INT(ClShowhudTimer, cl_showhud_timer, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD (Timer)")
MACRO_CONFIG_INT(ClShowRecord, cl_showrecord, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show old style DDRace client records")
MACRO_CONFIG_INT(ClShowNotifications, cl_shownotifications, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Make the client notify when someone highlights you")
MACRO_CONFIG_INT(ClShowEmotes, cl_showemotes, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show tee emotes")
MACRO_CONFIG_INT(ClShowChat, cl_showchat, 1, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show chat (2 to always show large chat area)")
MACRO_CONFIG_INT(ClShowChatFriends, cl_show_chat_friends, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show only chat messages from friends")
MACRO_CONFIG_INT(ClShowChatSystem, cl_show_chat_system, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show chat messages from the server")
MACRO_CONFIG_INT(ClShowKillMessages, cl_showkillmessages, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show kill messages")
MACRO_CONFIG_INT(ClShowVotesAfterVoting, cl_show_votes_after_voting, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show votes window after voting")
MACRO_CONFIG_INT(ClShowLocalTimeAlways, cl_show_local_time_always, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Always show local time")
MACRO_CONFIG_INT(ClShowfps, cl_showfps, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame FPS counter")
MACRO_CONFIG_INT(ClShowpred, cl_showpred, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame prediction time in milliseconds")
MACRO_CONFIG_INT(ClEyeWheel, cl_eye_wheel, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show eye wheel along together with emotes")
MACRO_CONFIG_INT(ClEyeDuration, cl_eye_duration, 999999, 1, 999999, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How long the eyes emotes last")

MACRO_CONFIG_INT(ClAirjumpindicator, cl_airjumpindicator, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClThreadsoundloading, cl_threadsoundloading, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Load sound files threaded")

MACRO_CONFIG_INT(ClWarningTeambalance, cl_warning_teambalance, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Warn about team balance")

MACRO_CONFIG_INT(ClMouseDeadzone, cl_mouse_deadzone, 0, 0, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClMouseFollowfactor, cl_mouse_followfactor, 0, 0, 200, CFGFLAG_CLIENT | CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClMouseMaxDistance, cl_mouse_max_distance, 400, 0, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClMouseMinDistance, cl_mouse_min_distance, 0, 0, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "")

MACRO_CONFIG_INT(ClDyncam, cl_dyncam, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable dyncam")
MACRO_CONFIG_INT(ClDyncamMaxDistance, cl_dyncam_max_distance, 1000, 0, 2000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Maximum dynamic camera distance")
MACRO_CONFIG_INT(ClDyncamMinDistance, cl_dyncam_min_distance, 0, 0, 2000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Minimum dynamic camera distance")
MACRO_CONFIG_INT(ClDyncamMousesens, cl_dyncam_mousesens, 0, 0, 100000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Mouse sens used when dyncam is toggled on")
MACRO_CONFIG_INT(ClDyncamDeadzone, cl_dyncam_deadzone, 300, 1, 1300, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Dynamic camera dead zone")
MACRO_CONFIG_INT(ClDyncamFollowFactor, cl_dyncam_follow_factor, 60, 0, 200, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Dynamic camera follow factor")

MACRO_CONFIG_INT(ClDyncamSmoothness, cl_dyncam_smoothness, 0, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Transition amount of the camera movement, 0=instant, 100=slow and smooth")
MACRO_CONFIG_INT(ClDyncamStabilizing, cl_dyncam_stabilizing, 0, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Amount of camera slowdown during fast cursor movement. High value can cause delay in camera movement")

MACRO_CONFIG_INT(EdZoomTarget, ed_zoom_target, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Zoom to the current mouse target")
MACRO_CONFIG_INT(EdShowkeys, ed_showkeys, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "")

MACRO_CONFIG_INT(ClShowWelcome, cl_show_welcome, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClMotdTime, cl_motd_time, 10, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How long to show the server message of the day")

// http map download
MACRO_CONFIG_STR(ClMapDownloadUrl, cl_map_download_url, 100, "https://maps2.ddnet.tw", CFGFLAG_CLIENT | CFGFLAG_SAVE, "URL used to download maps (can start with http:// or https://)")
MACRO_CONFIG_INT(ClMapDownloadConnectTimeoutMs, cl_map_download_connect_timeout_ms, 2000, 0, 100000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "HTTP map downloads: timeout for the connect phase in milliseconds (0 to disable)")
MACRO_CONFIG_INT(ClMapDownloadLowSpeedLimit, cl_map_download_low_speed_limit, 4000, 0, 100000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "HTTP map downloads: Set low speed limit in bytes per second (0 to disable)")
MACRO_CONFIG_INT(ClMapDownloadLowSpeedTime, cl_map_download_low_speed_time, 3, 0, 100000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "HTTP map downloads: Set low speed limit time period (0 to disable)")

MACRO_CONFIG_STR(ClLanguagefile, cl_languagefile, 255, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "What language file to use")
MACRO_CONFIG_STR(ClSkinDownloadUrl, cl_skin_download_url, 100, "https://skins.ddnet.tw/skin/", CFGFLAG_CLIENT | CFGFLAG_SAVE, "URL used to download skins")
MACRO_CONFIG_INT(ClVanillaSkinsOnly, cl_vanilla_skins_only, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Only show skins available in Vanilla Teeworlds")
MACRO_CONFIG_INT(ClDownloadSkins, cl_download_skins, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Download skins from cl_skin_download_url on-the-fly")
MACRO_CONFIG_INT(ClAutoStatboardScreenshot, cl_auto_statboard_screenshot, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Automatically take game over statboard screenshot")
MACRO_CONFIG_INT(ClAutoStatboardScreenshotMax, cl_auto_statboard_screenshot_max, 10, 0, 1000, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Maximum number of automatically created statboard screenshots (0 = no limit)")

MACRO_CONFIG_INT(ClDefaultZoom, cl_default_zoom, 10, 0, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Default zoom level (10 default, min 0, max 20)")
MACRO_CONFIG_INT(ClSmoothZoomTime, cl_smooth_zoom_time, 250, 0, 5000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Time of smooth zoom animation in ms (0 for off)")
MACRO_CONFIG_INT(ClLimitMaxZoomLevel, cl_limit_max_zoom_level, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Specifies, if zooming should be limited or not (0 = no limit)")

MACRO_CONFIG_INT(ClPlayerUseCustomColor, player_use_custom_color, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Toggles usage of custom colors")
MACRO_CONFIG_COL(ClPlayerColorBody, player_color_body, 65408, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_COLLIGHT, "Player body color")
MACRO_CONFIG_COL(ClPlayerColorFeet, player_color_feet, 65408, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_COLLIGHT, "Player feet color")
MACRO_CONFIG_STR(ClPlayerSkin, player_skin, 24, "default", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Player skin")
MACRO_CONFIG_STR(ClSkinPrefix, cl_skin_prefix, 12, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Replace the skins by skins with this prefix (e.g. kitty, santa)")
MACRO_CONFIG_INT(ClFatSkins, cl_fat_skins, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable fat skins")

MACRO_CONFIG_INT(UiPage, ui_page, 9, 6, 10, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Interface page")
MACRO_CONFIG_INT(UiSettingsPage, ui_settings_page, 0, 0, 9, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Interface settings page")
MACRO_CONFIG_INT(UiToolboxPage, ui_toolbox_page, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Toolbox page")
MACRO_CONFIG_STR(UiServerAddress, ui_server_address, 64, "localhost:8303", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Interface server address")
MACRO_CONFIG_INT(UiScale, ui_scale, 100, 50, 150, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Interface scale")
MACRO_CONFIG_INT(UiMousesens, ui_mousesens, 200, 1, 100000, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Mouse sensitivity for menus/editor")

MACRO_CONFIG_COL(UiColor, ui_color, 0xE4A046AF, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_COLALPHA, "Interface color") // 160 70 175 228 hasalpha

MACRO_CONFIG_INT(UiColorizePing, ui_colorize_ping, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Highlight ping")
MACRO_CONFIG_INT(UiColorizeGametype, ui_colorize_gametype, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Highlight gametype")

MACRO_CONFIG_STR(UiDemoSelected, ui_demo_selected, 256, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Selected demo file")
MACRO_CONFIG_INT(UiCloseWindowAfterChangingSetting, ui_close_window_after_changing_setting, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Close window after changing setting")
MACRO_CONFIG_INT(UiUnreadNews, ui_unread_news, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Whether there is unread news")

MACRO_CONFIG_INT(GfxNoclip, gfx_noclip, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Disable clipping")

// dummy
MACRO_CONFIG_STR(ClDummyName, dummy_name, 16, "", CFGFLAG_SAVE | CFGFLAG_CLIENT, "Name of the dummy")
MACRO_CONFIG_STR(ClDummyClan, dummy_clan, 12, "", CFGFLAG_SAVE | CFGFLAG_CLIENT, "Clan of the dummy")
MACRO_CONFIG_INT(ClDummyCountry, dummy_country, -1, -1, 1000, CFGFLAG_SAVE | CFGFLAG_CLIENT, "Country of the Dummy")
MACRO_CONFIG_INT(ClDummyUseCustomColor, dummy_use_custom_color, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Toggles usage of custom colors")
MACRO_CONFIG_COL(ClDummyColorBody, dummy_color_body, 65408, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_COLLIGHT, "Dummy body color")
MACRO_CONFIG_COL(ClDummyColorFeet, dummy_color_feet, 65408, CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_COLLIGHT, "Dummy feet color")
MACRO_CONFIG_STR(ClDummySkin, dummy_skin, 24, "default", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Dummy skin")
MACRO_CONFIG_INT(ClDummy, cl_dummy, 0, 0, 1, CFGFLAG_CLIENT, "0 - player / 1 - dummy")
MACRO_CONFIG_INT(ClDummyHammer, cl_dummy_hammer, 0, 0, 1, CFGFLAG_CLIENT, "Whether dummy is hammering for a hammerfly")
MACRO_CONFIG_INT(ClDummyResetOnSwitch, cl_dummy_resetonswitch, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Whether dummy or player should stop pressing keys when you switch. 0 = off, 1 = dummy, 2 = player")
MACRO_CONFIG_INT(ClDummyRestoreWeapon, cl_dummy_restore_weapon, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Whether dummy should switch to last weapon after hammerfly")
MACRO_CONFIG_INT(ClDummyCopyMoves, cl_dummy_copy_moves, 0, 0, 1, CFGFLAG_CLIENT, "Whether dummy should copy your moves")

// more controlable dummy command
MACRO_CONFIG_INT(ClDummyControl, cl_dummy_control, 0, 0, 1, CFGFLAG_CLIENT, "Whether can you control dummy at the same time")
MACRO_CONFIG_INT(ClDummyJump, cl_dummy_jump, 0, 0, 1, CFGFLAG_CLIENT, "Whether dummy is jumping")
MACRO_CONFIG_INT(ClDummyFire, cl_dummy_fire, 0, 0, 1, CFGFLAG_CLIENT, "Whether dummy is firing")
MACRO_CONFIG_INT(ClDummyHook, cl_dummy_hook, 0, 0, 1, CFGFLAG_CLIENT, "Whether dummy is hooking")

// start menu
MACRO_CONFIG_INT(ClShowStartMenuImages, cl_show_start_menu_images, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show start menu images")
MACRO_CONFIG_INT(ClSkipStartMenu, cl_skip_start_menu, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Skip the start menu")

// server
MACRO_CONFIG_INT(SvWarmup, sv_warmup, 0, 0, 0, CFGFLAG_SERVER, "Number of seconds to do warmup before round starts")
MACRO_CONFIG_STR(SvMotd, sv_motd, 900, "", CFGFLAG_SERVER, "Message of the day to display for the clients")
MACRO_CONFIG_INT(SvTeamdamage, sv_teamdamage, 0, 0, 1, CFGFLAG_SERVER, "Team damage")
MACRO_CONFIG_INT(SvRoundsPerMap, sv_rounds_per_map, 1, 1, 100, CFGFLAG_SERVER, "Number of rounds on each map before rotating")
MACRO_CONFIG_INT(SvRoundSwap, sv_round_swap, 1, 0, 1, CFGFLAG_SERVER, "Swap teams between rounds")
MACRO_CONFIG_INT(SvPowerups, sv_powerups, 1, 0, 1, CFGFLAG_SERVER, "Allow powerups like ninja")
MACRO_CONFIG_INT(SvScorelimit, sv_scorelimit, 20, 0, 1000, CFGFLAG_SERVER, "Score limit (0 disables)")
MACRO_CONFIG_INT(SvTimelimit, sv_timelimit, 0, 0, 1000, CFGFLAG_SERVER, "Time limit in minutes (0 disables)")
MACRO_CONFIG_STR(SvGametype, sv_gametype, 32, "dm", CFGFLAG_SERVER, "Game type (dm, tdm, ctf, idm, itdm, ictf, ifreeze, gdm, gtdm, gctf)")
MACRO_CONFIG_INT(SvTournamentMode, sv_tournament_mode, 0, 0, 1, CFGFLAG_SERVER, "Tournament mode. When enabled, players joins the server as spectator")

MACRO_CONFIG_INT(SvSpamprotection, sv_spamprotection, 1, 0, 1, CFGFLAG_SERVER, "Spam protection")

MACRO_CONFIG_INT(SvRespawnDelayTDM, sv_respawn_delay_tdm, 3, 0, 10, CFGFLAG_SERVER, "Time needed to respawn after death in tdm gametype")

MACRO_CONFIG_INT(SvSpectatorSlots, sv_spectator_slots, 0, 0, MAX_CLIENTS, CFGFLAG_SERVER, "Number of slots to reserve for spectators")
MACRO_CONFIG_INT(SvTeambalanceTime, sv_teambalance_time, 1, 0, 1000, CFGFLAG_SERVER, "How many minutes to wait before autobalancing teams")
MACRO_CONFIG_INT(SvInactiveKickTime, sv_inactivekick_time, 0, 0, 1000, CFGFLAG_SERVER, "How many minutes to wait before taking care of inactive players")
MACRO_CONFIG_INT(SvInactiveKick, sv_inactivekick, 0, 0, 2, CFGFLAG_SERVER, "How to deal with inactive players (0=move to spectator, 1=move to free spectator slot/kick, 2=kick)")

MACRO_CONFIG_INT(SvStrictSpectateMode, sv_strict_spectate_mode, 0, 0, 1, CFGFLAG_SERVER, "Restricts information in spectator mode")
MACRO_CONFIG_INT(SvVoteSpectate, sv_vote_spectate, 1, 0, 1, CFGFLAG_SERVER, "Allow voting to move players to spectators")
MACRO_CONFIG_INT(SvVoteSpectateRejoindelay, sv_vote_spectate_rejoindelay, 3, 0, 1000, CFGFLAG_SERVER, "How many minutes to wait before a player can rejoin after being moved to spectators by vote")
MACRO_CONFIG_INT(SvVoteKick, sv_vote_kick, 1, 0, 1, CFGFLAG_SERVER, "Allow voting to kick players")
MACRO_CONFIG_INT(SvVoteKickMin, sv_vote_kick_min, 0, 0, MAX_CLIENTS, CFGFLAG_SERVER, "Minimum number of players required to start a kick vote")
MACRO_CONFIG_INT(SvVoteKickBantime, sv_vote_kick_bantime, 5, 0, 1440, CFGFLAG_SERVER, "The time in seconds to ban a player if kicked by vote. 0 makes it just use kick")
MACRO_CONFIG_INT(SvJoinVoteDelay, sv_join_vote_delay, 300, 0, 1000, CFGFLAG_SERVER, "Add a delay before recently joined players can call any vote or participate in a kick/spec vote (in seconds)")
MACRO_CONFIG_INT(SvOldTeleportWeapons, sv_old_teleport_weapons, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Teleporting of all weapons (deprecated, use special entities instead)")
MACRO_CONFIG_INT(SvOldTeleportHook, sv_old_teleport_hook, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Hook through teleporter (deprecated, use special entities instead)")
MACRO_CONFIG_INT(SvTeleportHoldHook, sv_teleport_hold_hook, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Hold hook when teleported")
MACRO_CONFIG_INT(SvTeleportLoseWeapons, sv_teleport_lose_weapons, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Lose weapons when teleported (useful for some race maps)")
MACRO_CONFIG_INT(SvDeepfly, sv_deepfly, 1, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Allow fire non auto weapons when deep")
MACRO_CONFIG_INT(SvDestroyBulletsOnDeath, sv_destroy_bullets_on_death, 1, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Destroy bullets when their owner dies")
MACRO_CONFIG_INT(SvDestroyLasersOnDeath, sv_destroy_lasers_on_death, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Destroy lasers when their owner dies")

MACRO_CONFIG_INT(SvMapUpdateRate, sv_mapupdaterate, 5, 1, 100, CFGFLAG_SERVER, "64 player id <-> vanilla id players map update rate")

MACRO_CONFIG_STR(SvServerType, sv_server_type, 64, "none", CFGFLAG_SERVER, "Type of the server (novice, moderate, ...)")

MACRO_CONFIG_INT(SvSendVotesPerTick, sv_send_votes_per_tick, 5, 1, 15, CFGFLAG_SERVER, "Number of vote options being send per tick")

MACRO_CONFIG_INT(SvRescue, sv_rescue, 0, 0, 1, CFGFLAG_SERVER, "Allow /rescue command so players can teleport themselves out of freeze (setting only works in initial config)")
MACRO_CONFIG_INT(SvRescueDelay, sv_rescue_delay, 1, 0, 1000, CFGFLAG_SERVER, "Number of seconds between two rescues")
MACRO_CONFIG_INT(SvPractice, sv_practice, 1, 0, 1, CFGFLAG_SERVER, "Enable practice mode for teams. Means you can use /rescue, but in turn your rank doesn't count.")

MACRO_CONFIG_INT(ClVideoPauseWithDemo, cl_video_pausewithdemo, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Pause video rendering when demo playing pause")
MACRO_CONFIG_INT(ClVideoShowhud, cl_video_showhud, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ingame HUD when rendering video")
MACRO_CONFIG_INT(ClVideoShowChat, cl_video_showchat, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show chat when rendering video")
MACRO_CONFIG_INT(ClVideoSndEnable, cl_video_sound_enable, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Use sound when rendering video")
MACRO_CONFIG_INT(ClVideoShowHookCollOther, cl_video_show_hook_coll_other, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show other players' hook collision lines when rendering video")
MACRO_CONFIG_INT(ClVideoShowDirection, cl_video_showdirection, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show other players' key presses when rendering video")
MACRO_CONFIG_INT(ClVideoX264Crf, cl_video_crf, 18, 0, 51, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Set crf when encode video with libx264 (0 for highest quality, 51 for lowest)")
MACRO_CONFIG_INT(ClVideoX264Preset, cl_video_preset, 5, 0, 9, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Set preset when encode video with libx264, default is 5 (medium), 0 is ultrafast, 9 is placebo (the slowest, not recommend)")

// Mute-On-Spam
MACRO_CONFIG_INT(SvChatValue, sv_chat_value, 250, 100, 1000, CFGFLAG_SERVER, "A value which is added on each message and decreased on each tick")
/* MACRO_CONFIG_INT(SvChatThreshold, sv_chat_threshold, 1000, 250, 10000, CFGFLAG_SERVER, "If this threshold will exceed by too many messages the player will be muted") */
MACRO_CONFIG_INT(SvMuteDuration, sv_mute_duration, 60, 0, 3600, CFGFLAG_SERVER, "How long the player will be muted (in seconds)")
MACRO_CONFIG_INT(SvChatMaxDuplicates, sv_chat_max_duplicates, 3, -1, 25, CFGFLAG_SERVER, "How many duplicates of a chat messages is allowed to send in a row (-1 for no limit)")
MACRO_CONFIG_INT(SvVoteMute, sv_vote_mute, 1, 0, 1, CFGFLAG_SERVER, "Allow voting to mute players")
MACRO_CONFIG_INT(SvVoteMuteDuration, sv_vote_mute_duration, 300, 0, 600, CFGFLAG_SERVER, "How many seconds to mute a player after being muted by vote.")

// Anti Capslock
MACRO_CONFIG_INT(SvAntiCapslock, sv_anticapslock, 1, 0, 1, CFGFLAG_SERVER, "If all letters of a chat-message are capitalized they will be lowercased")
MACRO_CONFIG_INT(SvAntiCapslockTolerance, sv_anticapslock_tolerance, 5, 0, 10, CFGFLAG_SERVER, "How many letters of 10 are allowed to be lowercased that it just work")
MACRO_CONFIG_INT(SvAntiCapslockMinimum, sv_anticapslock_minimum, 8, 1, 128, CFGFLAG_SERVER, "Minimum number of letters that the anti-capslock feature works")

//Anticamper
MACRO_CONFIG_INT(SvAnticamper, sv_anticamper, 0, 0, 2, CFGFLAG_SERVER, "0 disables, 1 enables anticamper in all modes and 2 only in instagib gamemodes")
MACRO_CONFIG_INT(SvAnticamperFreeze, sv_anticamper_freeze, 0, 0, 15, CFGFLAG_SERVER, "If a player should freeze on camping (and how long) or die")
MACRO_CONFIG_INT(SvAnticamperTime, sv_anticamper_time, 9, 5, 20, CFGFLAG_SERVER, "How many seconds to wait till the player dies/freezes")
MACRO_CONFIG_INT(SvAnticamperRange, sv_anticamper_range, 300, 100, 1000, CFGFLAG_SERVER, "Distance how far away the player must move to escape anticamper")

// General Stuff
MACRO_CONFIG_INT(SvVoteForceReason, sv_vote_forcereason, 1, 0, 1, CFGFLAG_SERVER, "Allow only votes with a reason (except settings)")
MACRO_CONFIG_INT(SvGoTime, sv_go_time, 5, 0, 10, CFGFLAG_SERVER, "The restart time for the go-command")
MACRO_CONFIG_INT(SvStopGoFeature, sv_stopgo_feature, 1, 0, 1, CFGFLAG_SERVER, "Enable stop/go-feature in chat")
MACRO_CONFIG_INT(SvXonxFeature, sv_xonx_feature, 1, 0, 1, CFGFLAG_SERVER, "Enables chat-commands like /1on1 - /6on6 for wars")
MACRO_CONFIG_INT(SvWarTime, sv_war_time, 15, 0, 600, CFGFLAG_SERVER, "Default warmup-time before a war")
MACRO_CONFIG_INT(SvLaserjumps, sv_laserjumps, 0, 0, 1, CFGFLAG_SERVER, "Enable laserjumps (only in instagib)")
/* MACRO_CONFIG_INT(SvEmotionalTees, sv_emotional_tees, 1, 0, 1, CFGFLAG_SERVER, "Enable emotional tees") */
MACRO_CONFIG_INT(SvPrivateMessage, sv_private_message, 1, 0, 1, CFGFLAG_SERVER, "Enable/Disable private message")
MACRO_CONFIG_INT(SvSpawnprotection, sv_spawnprotection, 0, 0, 5, CFGFLAG_SERVER, "Spawnprotection in seconds (0 disables)")
MACRO_CONFIG_INT(SvLaserReloadTime, sv_laser_reload_time, 800, 0, 2400, CFGFLAG_SERVER, "Reload-time for laser when you are not at killing-spree (Default: 800)")
//
MACRO_CONFIG_STR(SvStatsFile, sv_stats_file, 256, "stats.txt", CFGFLAG_SERVER, "Name of the file where the statistics are stored in")
MACRO_CONFIG_INT(SvStatsOutputlevel, sv_stats_outputlevel, 0, 0, 3, CFGFLAG_SERVER, "How much informations in the statistics-file should be saved (0 to disable saving)")
//
MACRO_CONFIG_STR(SvChatMessage, sv_chat_message, 256, "", CFGFLAG_SERVER, "A message which will be periodically shown in chat")
MACRO_CONFIG_INT(SvChatMessageInterval, sv_chat_message_interval, 15, 7, 1000000, CFGFLAG_SERVER, "The interval in minutes where the message is sent to chat")
MACRO_CONFIG_INT(SvWallshotOnly, sv_wallshot_only, 0, 0, 1, CFGFLAG_SERVER, "Only wallshots can kill if this is set to 1")

// Loltext
MACRO_CONFIG_INT(SvLoltextHspace, sv_loltext_hspace, 14, 10, 25, CFGFLAG_SERVER, "Horizontal offset between loltext 'pixels'")
MACRO_CONFIG_INT(SvLoltextVspace, sv_loltext_vspace, 14, 10, 25, CFGFLAG_SERVER, "Vertical offset between loltext 'pixels'")
MACRO_CONFIG_INT(SvLoltextLifespan, sv_loltext_lifespan, 50, 25, 100, CFGFLAG_SERVER, "How long the loltext is shown")
MACRO_CONFIG_INT(SvLoltextShow, sv_loltext_show, 0, 0, 1, CFGFLAG_SERVER, "Show loltext")

// Grenade
MACRO_CONFIG_INT(SvGrenadeMinDamage, sv_grenade_min_damage, 4, 3, 6, CFGFLAG_SERVER, "Minimum damage the grenade must make to kill the player (depends how far away the bullet explodes)")
MACRO_CONFIG_INT(SvGrenadeAmmo, sv_grenade_ammo, 6, -1, 10, CFGFLAG_SERVER, "How much ammo for the grenade")
MACRO_CONFIG_INT(SvGrenadeAmmoRegen, sv_grenade_ammo_regen, 1000, 800, 2000, CFGFLAG_SERVER, "Time till one bullet regenerates")

//iFreeze
MACRO_CONFIG_INT(SvIFreezeAutomeltTime, sv_ifreeze_automelt_time, 30, 10, 120, CFGFLAG_SERVER, "Time till the player respawn automatically when he's frozen")
MACRO_CONFIG_INT(SvIFreezeMeltRange, sv_ifreeze_melt_range, 100, 10, 1000, CFGFLAG_SERVER, "Maximum range to melt a player")
MACRO_CONFIG_INT(SvIFreezeMeltTime, sv_ifreeze_melt_time, 1200, 500, 5000, CFGFLAG_SERVER, "Time (in ms) the player must stand next to a player to melt him")
MACRO_CONFIG_INT(SvIFreezeMeltRespawn, sv_ifreeze_melt_respawn, 1, 0, 1, CFGFLAG_SERVER, "If a player respawns after he was being melted")
MACRO_CONFIG_INT(SvIFreezeFrozenTag, sv_ifreeze_frozen_tag, 1, 0, 1, CFGFLAG_SERVER, "If frozen players have \"[F]\" in front of their name")
MACRO_CONFIG_INT(SvIFreezeJoinFrozen, sv_ifreeze_join_frozen, 0, 0, 1, CFGFLAG_SERVER, "New players join a current game as frozen players")

// Killingspree
MACRO_CONFIG_INT(SvKillingspreeKills, sv_kspree_kills, 5, 3, 20, CFGFLAG_SERVER, "How many kills are needed to be on a killing-spree")
MACRO_CONFIG_INT(SvKillingspreeIFreeze, sv_kspree_ifreeze, 1, 0, 1, CFGFLAG_SERVER, "Give the killingspree award only in iFreeze")
MACRO_CONFIG_INT(SvKillingspreeAward, sv_kspree_award, 0, 0, 1, CFGFLAG_SERVER, "If players with more than \"sv_killingspree_kills\" kills get the killingspree award")
MACRO_CONFIG_INT(SvKillingspreeAwardLasers, sv_kspree_award_laser, 3, 1, 10, CFGFLAG_SERVER, "How many lasers will shot when you got the award")
MACRO_CONFIG_INT(SvKillingspreeAwardLasersSplit, sv_kspree_award_laser_split, 1, 1, 10, CFGFLAG_SERVER, "Split of the lasers while having the award")
MACRO_CONFIG_INT(SvKillingspreeAwardFiredelay, sv_kspree_award_laser_firedelay, 100, 0, 800, CFGFLAG_SERVER, "Firedelay of the weapon when you got the award")

MACRO_CONFIG_INT(SvBotDbEnabled, sv_bot_db_enabled, 0, 0, 1, CFGFLAG_SERVER, "Enables the bot.db")
MACRO_CONFIG_STR(SvBotDbFile, sv_bot_db_file, 1024, "", CFGFLAG_SERVER, "The name of the bot.db")

// debug
#ifdef CONF_DEBUG // this one can crash the server if not used correctly
MACRO_CONFIG_INT(DbgDummies, dbg_dummies, 0, 0, 15, CFGFLAG_SERVER, "")
#endif

MACRO_CONFIG_INT(DbgFocus, dbg_focus, 0, 0, 1, CFGFLAG_CLIENT, "")
MACRO_CONFIG_INT(DbgTuning, dbg_tuning, 0, 0, 1, CFGFLAG_CLIENT, "")
#endif
