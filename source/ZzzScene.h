#ifndef __ZZZSCENE_H__
#define __ZZZSCENE_H__

#include "zzzinfomation.h"

extern int MenuStateCurrent;
extern int MenuStateNext;
extern int  SceneFlag;
extern int  MoveSceneFrame;
//extern bool EnableEdit;
extern int  ErrorMessage;
extern bool InitServerList;
extern bool InitLogIn;
extern bool InitLoading;
extern bool InitCharacterScene;
extern bool InitMainScene;
extern bool EnableMainRender;
extern char *szServerIpAddress;
extern unsigned short g_ServerPort;
extern int g_iLengthAuthorityCode;

extern void LogInScene(HDC hDC);
extern void LoadingScene(HDC hDC);
extern void Scene(HDC Hdc);
extern bool CheckName();
void    StartGame(
#ifdef PJH_CHARACTER_RENAME
			   bool IsConnect = false
#endif //#ifdef PJH_CHARACTER_RENAME
				  );

BOOL	ShowCheckBox( int num, int index, int message=MESSAGE_TRADE_CHECK );

int	SeparateTextIntoLines( const char* lpszText, char *lpszSeparated, int iMaxLine, int iLineSize);

bool	GetTimeCheck(int DelayTime);
void	SetEffectVolumeLevel(int level);
void    SetViewPortLevel ( int level );
void    SetCreateMaxClass ( BYTE MaxClass );
BYTE    GetCreateMaxClass ( void );

#ifdef PSW_BUGFIX_IME
bool IsEnterPressed();
void SetEnterPressed( bool enterpressed );
#endif //PSW_BUGFIX_IME

#ifdef DO_PROCESS_DEBUGCAMERA
void ProcessDebugCamera();
#endif // DO_PROCESS_DEBUGCAMERA

#endif //__ZZZSCENE_H__
