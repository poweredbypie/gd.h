#ifndef __CCSPRITEPLUS_H__
#define __CCSPRITEPLUS_H__
#include <gd.h>
class CCSpritePlus : public cocos2d::CCSprite {
public:
  virtual void setFlipX(bool);
  virtual void setFlipY(bool);
  virtual void setPosition(cocos2d::CCPoint const&);
  virtual void setRotation(float);
  virtual void setScale(float);
  virtual void setScaleX(float);
  virtual void setScaleY(float);
protected:
  CCArray *m_followers;
  CCSpritePlus *m_followingSprite;
  bool m_hasFollower;
  bool m_propagateScaleChanges;
  bool m_propagateFlipChanges;
};
//credit to zmx
#endif