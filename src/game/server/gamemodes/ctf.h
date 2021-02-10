/* (c) Shereef Marzouk. See "licence DDRace.txt" and the readme.txt in the root of the distribution for more information. */
#ifndef GAME_SERVER_GAMEMODES_ICTF_H
#define GAME_SERVER_GAMEMODES_ICTF_H
#include <game/server/gamecontroller.h>
#include <game/server/entity.h>

#include <map>
#include <vector>

struct CScoreInitResult;
class CGameControllerCtf : public IGameController
{
public:
	class CFlag *m_apFlags[2];

	CGameControllerCtf(class CGameContext *pGameServer);
	~CGameControllerCtf();

    virtual void OnCharacterSpawn(CCharacter *pChr) override;

	void Tick() override;

	virtual void DoWincheck();
	virtual bool CanBeMovedOnBalance(int ClientID) override;
	virtual void Snap(int SnappingClient) override;

	virtual bool OnEntity(int Index, vec2 Pos, int Layer, int Flags, int Number = 0) override;
	virtual int OnCharacterDeath(class CCharacter *pVictim, class CPlayer *pKiller, int Weapon) override;

	std::shared_ptr<CScoreInitResult> m_pInitResult;
};
#endif // GAME_SERVER_GAMEMODES_ICTF_H
