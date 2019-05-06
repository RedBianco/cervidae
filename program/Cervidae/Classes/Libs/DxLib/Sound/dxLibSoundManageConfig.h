#pragma once


//===================================================================//
//
//
//  Created by kashima akihiro on 2019/03/09.
//===================================================================//

namespace DxLibSound
{
	namespace BaseInfo
	{
		const static char *		SE_PLAY_RESULT_OK		= "SE_Answer.mp3";
		const static char *		SE_PLAY_SELECT			= "SE_Select.mp3";
		const static char *		SE_PLAY_CANCEL			= "SE_Cancel.mp3";

		const static int	SOUND_STREAM_NORMALPLAY		= DX_PLAYTYPE_NORMAL;	// ノーマル再生
		const static int	SOUND_STREAM_BACKGRPLAY		= DX_PLAYTYPE_BACK;		// バックグラウンド再生
		const static int	SOUND_STREAM_BACKGRLOOP		= DX_PLAYTYPE_LOOP;		// バックグラウンド＋ループ再生

		const static int	SETTING_STREAM_SYNCHRO_PLAY_MAX	= ( 4 );	// ストリーム同時再生最大数
		const static int	SETTING_FILE_MEMORY_ENTRY_MAX	= ( 8 );	// メモリ登録ＳＥファイル最大数
		const static int	SETTING_BGM_SYNCHRO_PLAY_MAX	= ( 2 );	// BGMの同時最大保持数(再生数)
	}
	namespace Command
	{
		typedef enum// @enum 
		{
			eSYSTEM_SE_SELECT		= 0,	// 選択
			eSYSTEM_SE_OK			= 1,	// 決定
			eSYSTEM_SE_CANCEL		= 2,	// キャンセル
			eSYSTEM_SE_PAUSE		= 3,	// ポーズ

			eSYSTEM_SE_COMMAND_MAX
		} ENUM_SYSTEM_SE_COMMAND;
        
		typedef enum// @enum 
		{
			eSOUND_PLAY_STREAM		= 0,	// ストリーム再生
			eSOUND_PLAY_MEMORY		= 1,	// メモリロード再生

			eSOUND_PLAY_MODE_MAX
		} ENUM_SOUND_PLAY_MODE;

		typedef enum// @enum 
		{
			eSOUND_PROCESS_STOP		= 0,	// 再生停止命令
			eSOUND_PROCESS_PLAY,			// 再生開始命令
			eSOUND_PROCESS_CHECK,			// 再生状況チェック命令

			eSOUND_PROCESS_MAX
		} ENUM_SOUND_PROCESS_LIST;

		typedef enum// @enum 
		{
			eSOUND_ORDER_STOP		= 0,	// 再生停止
			eSOUND_ORDER_PLAY,				// 再生中
			eSOUND_ORDER_PAUSE,				// 再生一時停止

			eSOUND_ORDER_MAX
		} ENUM_SOUND_ORDER_LIST;

		typedef enum// @enum 
		{
			eSEDATA_ENTRY_NON		= -1,	// 未登録
			eSEDATA_ENTRY_SET, 

			eSEDATA_ENTRY_MAX
		} ENUM_SOUND_SEDATA_ENTRY;
	}
}



/* End dxLibSoundManageConfig.h */
