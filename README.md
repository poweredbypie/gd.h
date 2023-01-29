# Deprecated

This library has been deprecated in favor of [Geode](https://github.com/geode-sdk/geode), a framework that bundles GD headers along with Cocos2d and lots of other modding utilities. All of my mods will be ported over to Geode, and any new ones will be built on it; and I would highly recommend you do so too, as Geode's main purpose is fixing mod incompatabilities, and mods made with gd.h are not going to work alongside Geode mods. More info about Geode is at <https://geode-sdk.org>.

# gd.h

Windows headers for Geometry Dash. Originally copied from pie's textureldr.

# Usage

 * This fork is dependant on [cocos-headers](https://github.com/HJfod/cocos-headers). CappuccinoSDK is **too outdated & incomplete** to be compatible with this fork of GD.h.

 * Certain compile settings can and will mess up some of these headers. **Recommended compile settings are:** 
    - 32-bit
    - Release mode, maximum optimization for speed (o2)

 * You need to add both the `include/` directory and the root `gd.h` directory in your include path for this to work.

# Contribution

 * If you'd like to contribute, create a pull request.

