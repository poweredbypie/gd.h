#ifndef __PLAYLAYER_H__
#define __PLAYLAYER_H__

#include <gd.h>

namespace gd {

	class GJBaseGameLayer;
	class GameObject;
	// class EndPortalObject;
	using EndPortalObject = GameObject;
	// class AudioEffectsLayer;
	using AudioEffectsLayer = cocos2d::CCLayerColor;
	// class GJGroundLayer;
	class GJGroundLayer : public cocos2d::CCLayer {
		public:
			void updateGroundWidth() {
				reinterpret_cast<void(__thiscall*)(GJGroundLayer*)>(
					base + 0x12dda0
				)(this);
			}
	};
	class GJGameLevel;
	// class UILayer;
	using UILayer = cocos2d::CCLayerColor;

	class PlayLayer : public GJBaseGameLayer {
	public:
		PAD(8); // stupid vtables i cant be bothered
		unsigned int unk_2D8;
		bool unk_2DC;
		bool has_cheated; //0x02DD // by taking less than 30s to beat lvl
		PAD(2);
		int rand_0_100_plus_2E8; //0x02E0
		int rand_0_100; //0x02E4
		int unk_2E8;
		bool opposite_is_frozen; //0x02EC
		bool unk_2ED;
		PAD(10);
		cocos2d::CCDrawNode* draw_node; //0x02F8
		float camera_y_again_maybe; //0x02FC
		float unk_300;
		float unk_304;
		float bottom_ground_y_maybe; //0x0308
		float unk_30C; //0x030C // last y or smth idk
		bool unk_310;
		bool unk_311;
		bool unk_312;
		PAD(33);
		EndPortalObject* end_portal; //0x0334
		cocos2d::CCArray* checkpoint_array; //0x0338
		cocos2d::CCArray* unk_33C; //0x033C
		cocos2d::CCArray* unk_340; //0x0340
		cocos2d::CCArray* unk_344; //0x0344
		cocos2d::CCSprite* unk_348;
		PAD(8);
		cocos2d::CCArray* unk_354;
		cocos2d::CCArray* unk_358;
		cocos2d::CCArray* unk_35C;
		cocos2d::CCArray* unk_360;
		bool is_mute; //0x0364 // maybe
		PAD(7);
		cocos2d::CCArray* ringObjectsOnScreen; //0x036C
		cocos2d::CCParticleSystemQuad* unk_370;
		cocos2d::CCDictionary* unk_374;
		cocos2d::CCArray* circleWaves; //0x0378
		cocos2d::CCArray* unk_37C;
		AudioEffectsLayer* audio_effects_layer; //0x0380
		PAD(8);
		GJGroundLayer* ground1; //0x038C
		GJGroundLayer* ground2; //0x0390
		PAD(8);
		bool is_dead; //0x039C
		bool unk_39D; //0x039D // smth to do with the camera
		bool cameraMoveX_called; //0x039E
		bool cameraMoveY_called; //0x039F
		PAD(4);
		int unk_3A4;
		PAD(12);
		float level_length; //0x03B4
		float unk_3B8;
		cocos2d::CCLabelBMFont* attempt_label; //0x03BC
		cocos2d::CCLabelBMFont* percent_label; //0x03C0
		bool is_camera_shaking; //0x03C4
		PAD(3);
		float current_shake_strength; //0x03C8
		float current_shake_interval; //0x03CC
		double last_shake_time; //0x03D0
		cocos2d::CCPoint unk_3D8;
		PAD(16);
		int unk_always_40; //0x03F0
		cocos2d::CCDictionary* particleSystemPlistEffectDict; //0x03F4
		cocos2d::CCDictionary* unk_3F8;
		cocos2d::CCArray* particleSystemArr; //0x03FC
		cocos2d::CCNode* unk_400;
		cocos2d::CCSprite* spr_slidergroove2; //0x0404
		cocos2d::CCSprite* spr_sliderBar2; //0x0408
		float slider_width; //0x040C //sliderbar2 width (?) minus 4
		float unk_always_8; //0x0410
		PAD(4);
		int unk_always_4; //0x0418
		PAD(8);
		cocos2d::CCArray* arr_GravityEffectSprite; //0x0424
		bool unk_428;
		bool do_record_actions; //0x0429
		bool unk_42A;
		bool is_paused; //0x042B
		bool unk_42C;
		bool is_player_2_frozen; //0x042D // wtf
		PAD(2);
		std::string record_string; //0x0430
		PAD(8);
		double time; //0x0450
		PAD(9);
		bool unk_461;
		PAD(2);
		cocos2d::CCDictionary* unk_464;
		PAD(8);
		bool playback_mode; //0x0470
		PAD(19);
		UILayer* ui_layer; //0x0484
		GJGameLevel* level; //0x0488
		float camera_x; //0x048C
		float camera_y; //0x0490
		bool is_test_mode; //0x0494
		bool is_practice_mode; //0x0495
		bool unk_496;
		bool unk_497;
		cocos2d::CCArray* animationsArrMaybe; //0x0498
		bool unk_49C;
		PAD(11);
		int current_attempt; //0x04A8
		int jump_count; //0x04AC
		bool unk_4B0;
		PAD(3);
		float total_time; //0x04B4
		int jump_count_resets_when_you_die; //0x04B8
		bool unk_4BC;
		bool has_lvl_complete_menu; //0x04BD
		bool has_completed_lvl; //0x04BE
		PAD(1);
		int last_death_percent; //0x04C0
		bool unk_4C4;
		PAD(11);
		bool unk_4D0;
		PAD(3);
		cocos2d::CCArray* unk_4d4; //0x04D4
		cocos2d::CCDictionary* unk_4d8; //0x04D8
		PAD(4);
		double unk_4E0;
		double unk_4e8; //0x04E8 // seems to be time modulo 2 for some reason
		PAD(24);
		double time_again; //0x0508
		PAD(31);
		bool is_paused_again; //0x052F
		GameObject* unk_game_object; //0x0530
		bool unk_534; //0x0534
		bool unk_535;
		bool gv_value_0072; //0x0536
		PAD(1);
	};
}

#endif