#ifndef __CUSTOMLISTVIEW_H__
#define __CUSTOMLISTVIEW_H__

#include <gd.h>

namespace gd {

	class BoomListView;

	#pragma runtime_checks("s", off)
	class CustomListView : public BoomListView {
		//no members
	protected:
		CustomListView() {
			reinterpret_cast<void(__thiscall*)(CustomListView*)>(
				base + 0x57E60
				)(this);
		}
		virtual bool init(cocos2d::CCArray* entries, int type, float width, float height) {
			__asm {
				movss xmm2, width
				movss xmm3, height
			}
			return reinterpret_cast<bool(__thiscall*)(CustomListView*, int, int)>(
				base + 0x10C20
				)(this, 0, type);
		}

	public:
		static CustomListView* create(cocos2d::CCArray* entries, int type, float width, float height) {
			__asm {
				movss xmm1, width
				movss xmm2, height
			}
			auto pRet = reinterpret_cast<CustomListView* (__thiscall*)(cocos2d::CCArray*, int)>(
				base + 0x57F90
				)(entries, type);
			__asm add esp, 0x4
			return pRet;
		}

		virtual void setupList() {
			return reinterpret_cast<void(__thiscall*)(BoomListView*)>(
				base + 0x58870
				)(this);
		}
		virtual TableViewCell* getListCell(const char* key) {
			return reinterpret_cast<TableViewCell * (__thiscall*)(BoomListView*, const char*)>(
				base + 0x58050
				)(this, key);
		}
		virtual void loadCell(TableViewCell* cell, unsigned int index) {
			return reinterpret_cast<void(__thiscall*)(BoomListView*, TableViewCell*, unsigned int)>(
				base + 0x585C0
				)(this, cell, index);
		}
	};
	#pragma runtime_checks("s", restore)
}

#endif