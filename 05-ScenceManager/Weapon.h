#include "GameObject.h"

#define WEAPON_BBOX_WIDTH 23
#define WEAPON_BBOX_HEIGHT 7

#define WEAPON_UP_BBOX_WIDTH 7
#define WEAPON_UP_BBOX_HEIGHT 23

#define WEAPON_STATE_FIRE		700
#define WEAPON_STATE_FIRE_UP		701
#define WEAPON_STATE_NONE		100

#define WEAPON_ANI_FLY_HORIZONTAL 0
#define WEAPON_ANI_FLY_VERTICAL 1

#define WEAPON_FLY_SPEED 0.3f;
#define WEAPON_CHARACTER_JUMP_SPEED_Y	0.3f;
class CWeapon : public CGameObject
{
	
	
public:
	CWeapon(float x, float y, int nx, int state,bool isBarrelUp);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* colliable_object = NULL);
	virtual void Render();

	void SetState(int state);
	void Reset();

	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
};