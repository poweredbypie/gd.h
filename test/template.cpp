#include <iostream>
#include <gd.h>
#include <cocos2d.h>

void gd::AnimatedSpriteDelegate::animationFinished(char const*) {}
void gd::ColorSelectPopup::keyDown(int) {}
void gd::ColorSelectPopup::colorValueChanged(cocos2d::ccColor3B) {}
void gd::ColorPickerDelegate::colorValueChanged(cocos2d::ccColor3B) {}
void gd::ColorSelectPopup::idfk(void) {}
void gd::ColorSelectPopup::idfk2(void) {}
void gd::GJSpecialColorSelectDelegate::colorSelectClosed(gd::GJSpecialColorSelect*, int) {}

template <typename T, typename U>
intptr_t offset(T a, U b) {
    return reinterpret_cast<intptr_t>(a) - reinterpret_cast<intptr_t>(b);
}

#define offset_of(a, b) offset(&a->b, a)

int main() {
// {INJECT CODE}
}