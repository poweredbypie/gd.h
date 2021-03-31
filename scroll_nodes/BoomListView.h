#ifndef __BOOMLISTVIEW_H__
#define __BOOMLISTVIEW_H__

#include <gd.h>

namespace gd {

	class TableViewDelegate;
	class TableViewDataSource;
	class TableView;
	class TableViewCell;

	class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
	protected:
		TableView* m_pTableView;
		cocos2d::CCArray* m_pEntries;
		int m_eType; //? probably wrong type
		float m_fWidth;
		float m_fHeight;
		PAD(8);

	public:
		//TableViewDelegate vtable
		virtual float cellHeightForRowAtIndexPath(CCIndexPath& path, TableView* view) {
			return reinterpret_cast<float(__thiscall*)(char*, CCIndexPath&, TableView*)>(
				base + 0x10E50
				)(reinterpret_cast<char*>(this) + 0x11C, path, view);
		}

		//TableViewDataSource vtable
		virtual unsigned int numberOfRowsInSection(unsigned int section, TableView* view) {
			return reinterpret_cast<unsigned int(__thiscall*)(char*, unsigned int, TableView*)>(
				base + 0x10E60
				)(reinterpret_cast<char*>(this) + 0x120, section, view);
		}
		virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& path, TableView* view) {
			return reinterpret_cast<TableViewCell* (__thiscall*)(char*, CCIndexPath&, TableView*)>(
				base + 0x10E70
				)(reinterpret_cast<char*>(this) + 0x120, path, view);
		}

		//own vtable
		virtual void setupList() {
			return reinterpret_cast<void(__thiscall*)(BoomListView*)>(
				base + 0x10DC0
				)(this);
		}
		virtual TableViewCell* getListCell(const char* key) {
			return reinterpret_cast<TableViewCell* (__thiscall*)(BoomListView*, const char*)>(
				base + 0x10ED0
				)(this, key);
		}
		virtual void loadCell(TableViewCell* cell, unsigned int index) {
			return reinterpret_cast<void(__thiscall*)(BoomListView*, TableViewCell*, unsigned int)>(
				base + 0x10FF0
				)(this, cell, index);
		}

		virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) {}
	};
}

#endif