/*
-----------------------------------------------------------------------------
 Class: ScreenEz2SelectMusic

 Desc: The screen in PLAY_MODE_ARCADE where you choose a Song and Notes.

 Copyright (c) 2001-2002 by the person(s) listed below.  All rights reserved.
	Chris Danford
	Andrew Livy
-----------------------------------------------------------------------------
*/
/*
#include "Screen.h"
#include "Sprite.h"
#include "BitmapText.h"
#include "RandomStream.h"
#include "GameConstantsAndTypes.h"
#include "MusicWheel.h"
#include "Banner.h"
#include "FadingBanner.h"
#include "BPMDisplay.h"
#include "MenuElements.h"
#include "GrooveRadar.h"
#include "DifficultyIcon.h"
#include "FootMeter.h"
#include "OptionIconRow.h"


class ScreenEz2SelectMusic : public Screen
{
public:
	ScreenEz2SelectMusic();
	virtual ~ScreenEz2SelectMusic();

	virtual void DrawPrimitives();

	virtual void Update( float fDeltaTime );
	virtual void Input( const DeviceInput& DeviceI, const InputEventType type, const GameInput &GameI, const MenuInput &MenuI, const StyleInput &StyleI );
	virtual void HandleScreenMessage( const ScreenMessage SM );

	virtual void MenuLeft( PlayerNumber pn, const InputEventType type );
	virtual void MenuRight( PlayerNumber pn, const InputEventType type );
	virtual void MenuStart( PlayerNumber pn );
	virtual void MenuBack( PlayerNumber pn );

protected:
	void TweenOnScreen();
	void TweenOffScreen();
	void TweenScoreOnAndOffAfterChangeSort();

	void EasierDifficulty( PlayerNumber pn );
	void HarderDifficulty( PlayerNumber pn );

	void AfterNotesChange( PlayerNumber pn );
	void AfterMusicChange();
	void PlayMusicSample();
	void SortOrderChanged();

	void UpdateOptionsDisplays();

	CArray<Notes*, Notes*> m_arrayNotes;
	int					m_iSelection[NUM_PLAYERS];

	MenuElements		m_Menu;

	Sprite				m_sprBannerFrame;

	FadingBanner		m_Banner;
	FadingBanner		m_BannerNext;
	FadingBanner		m_BannerPrevious;

	BPMDisplay			m_BPMDisplay;
	BitmapText			m_textStage;
	Sprite				m_sprCDTitle;
	Sprite				m_sprDifficultyFrame[NUM_PLAYERS];
	DifficultyIcon		m_DifficultyIcon[NUM_PLAYERS];
	GrooveRadar			m_GrooveRadar;
//	BitmapText			m_textPlayerOptions[NUM_PLAYERS];
	BitmapText			m_textSongOptions;
	OptionIconRow		m_OptionIconRow[NUM_PLAYERS];
	Sprite				m_sprMeterFrame[NUM_PLAYERS];
	FootMeter			m_FootMeter[NUM_PLAYERS];
	MusicSortDisplay	m_MusicSortDisplay;
	Sprite				m_sprHighScoreFrame[NUM_PLAYERS];
	ScoreDisplayNormal	m_HighScore[NUM_PLAYERS];
	MusicWheel			m_MusicWheel;

	bool				m_bMadeChoice;
	bool				m_bGoToOptions;
	BitmapText			m_textHoldForOptions;

	RageSoundSample		m_soundSelect;
	RageSoundSample		m_soundChangeNotes;
	RageSoundSample		m_soundOptionsChange;
	RageSoundSample		m_soundLocked;
};

  */