#include "d3d9_format.h"

namespace dxvk {

  std::ostream& operator << (std::ostream& os, D3D9Format e) {
    switch (e) {
      ENUM_NAME(D3D9Format::Unknown);

      ENUM_NAME(D3D9Format::R8G8B8);
      ENUM_NAME(D3D9Format::A8R8G8B8);
      ENUM_NAME(D3D9Format::X8R8G8B8);
      ENUM_NAME(D3D9Format::R5G6B5);
      ENUM_NAME(D3D9Format::X1R5G5B5);
      ENUM_NAME(D3D9Format::A1R5G5B5);
      ENUM_NAME(D3D9Format::A4R4G4B4);
      ENUM_NAME(D3D9Format::R3G3B2);
      ENUM_NAME(D3D9Format::A8);
      ENUM_NAME(D3D9Format::A8R3G3B2);
      ENUM_NAME(D3D9Format::X4R4G4B4);
      ENUM_NAME(D3D9Format::A2B10G10R10);
      ENUM_NAME(D3D9Format::A8B8G8R8);
      ENUM_NAME(D3D9Format::X8B8G8R8);
      ENUM_NAME(D3D9Format::G16R16);
      ENUM_NAME(D3D9Format::A2R10G10B10);
      ENUM_NAME(D3D9Format::A16B16G16R16);
      ENUM_NAME(D3D9Format::A8P8);
      ENUM_NAME(D3D9Format::P8);
      ENUM_NAME(D3D9Format::L8);
      ENUM_NAME(D3D9Format::A8L8);
      ENUM_NAME(D3D9Format::A4L4);
      ENUM_NAME(D3D9Format::V8U8);
      ENUM_NAME(D3D9Format::L6V5U5);
      ENUM_NAME(D3D9Format::X8L8V8U8);
      ENUM_NAME(D3D9Format::Q8W8V8U8);
      ENUM_NAME(D3D9Format::V16U16);
      ENUM_NAME(D3D9Format::A2W10V10U10);
      ENUM_NAME(D3D9Format::UYVY);
      ENUM_NAME(D3D9Format::R8G8_B8G8);
      ENUM_NAME(D3D9Format::YUY2);
      ENUM_NAME(D3D9Format::G8R8_G8B8);
      ENUM_NAME(D3D9Format::DXT1);
      ENUM_NAME(D3D9Format::DXT2);
      ENUM_NAME(D3D9Format::DXT3);
      ENUM_NAME(D3D9Format::DXT4);
      ENUM_NAME(D3D9Format::DXT5);
      ENUM_NAME(D3D9Format::D16_LOCKABLE);
      ENUM_NAME(D3D9Format::D32);
      ENUM_NAME(D3D9Format::D15S1);
      ENUM_NAME(D3D9Format::D24S8);
      ENUM_NAME(D3D9Format::D24X8);
      ENUM_NAME(D3D9Format::D24X4S4);
      ENUM_NAME(D3D9Format::D16);
      ENUM_NAME(D3D9Format::D32F_LOCKABLE);
      ENUM_NAME(D3D9Format::D24FS8);
      ENUM_NAME(D3D9Format::D32_LOCKABLE);
      ENUM_NAME(D3D9Format::S8_LOCKABLE);
      ENUM_NAME(D3D9Format::L16);
      ENUM_NAME(D3D9Format::VERTEXDATA);
      ENUM_NAME(D3D9Format::INDEX16);
      ENUM_NAME(D3D9Format::INDEX32);
      ENUM_NAME(D3D9Format::Q16W16V16U16);
      ENUM_NAME(D3D9Format::MULTI2_ARGB8);
      ENUM_NAME(D3D9Format::R16F);
      ENUM_NAME(D3D9Format::G16R16F);
      ENUM_NAME(D3D9Format::A16B16G16R16F);
      ENUM_NAME(D3D9Format::R32F);
      ENUM_NAME(D3D9Format::G32R32F);
      ENUM_NAME(D3D9Format::A32B32G32R32F);
      ENUM_NAME(D3D9Format::CxV8U8);
      ENUM_NAME(D3D9Format::A1);
      ENUM_NAME(D3D9Format::A2B10G10R10_XR_BIAS);
      ENUM_NAME(D3D9Format::BINARYBUFFER);

      // Driver Hacks / Unofficial Formats
      ENUM_NAME(D3D9Format::ATI1);
      ENUM_NAME(D3D9Format::ATI2);
      ENUM_NAME(D3D9Format::INST);
      ENUM_NAME(D3D9Format::DF24);
      ENUM_NAME(D3D9Format::DF16);
      ENUM_NAME(D3D9Format::NULL_FORMAT);
      ENUM_NAME(D3D9Format::GET4);
      ENUM_NAME(D3D9Format::GET1);
      ENUM_NAME(D3D9Format::NVDB);
      ENUM_NAME(D3D9Format::A2M1);
      ENUM_NAME(D3D9Format::A2M0);
      ENUM_NAME(D3D9Format::ATOC);
      ENUM_NAME(D3D9Format::INTZ);
      ENUM_NAME(D3D9Format::RAWZ);
      ENUM_NAME(D3D9Format::RESZ);

      ENUM_NAME(D3D9Format::NV11);
      ENUM_NAME(D3D9Format::NV12);
      ENUM_NAME(D3D9Format::P010);
      ENUM_NAME(D3D9Format::P016);
      ENUM_NAME(D3D9Format::Y210);
      ENUM_NAME(D3D9Format::Y216);
      ENUM_NAME(D3D9Format::Y410);
      ENUM_NAME(D3D9Format::AYUV);
      ENUM_NAME(D3D9Format::YV12);
      ENUM_NAME(D3D9Format::OPAQUE_420);

      ENUM_NAME(D3D9Format::AI44);
      ENUM_NAME(D3D9Format::IA44);
      ENUM_NAME(D3D9Format::R2VB);
      ENUM_NAME(D3D9Format::COPM);
      ENUM_NAME(D3D9Format::SSAA);
      ENUM_NAME(D3D9Format::AL16);
      ENUM_NAME(D3D9Format::R16);

      ENUM_DEFAULT(e);
    }
  }


  std::ostream& operator << (std::ostream& os, D3DRENDERSTATETYPE e) {
    switch (e) {
      ENUM_NAME(D3DRS_ZENABLE);
      ENUM_NAME(D3DRS_FILLMODE);
      ENUM_NAME(D3DRS_SHADEMODE);
      ENUM_NAME(D3DRS_ZWRITEENABLE);
      ENUM_NAME(D3DRS_ALPHATESTENABLE);
      ENUM_NAME(D3DRS_LASTPIXEL);
      ENUM_NAME(D3DRS_SRCBLEND);
      ENUM_NAME(D3DRS_DESTBLEND);
      ENUM_NAME(D3DRS_CULLMODE);
      ENUM_NAME(D3DRS_ZFUNC);
      ENUM_NAME(D3DRS_ALPHAREF);
      ENUM_NAME(D3DRS_ALPHAFUNC);
      ENUM_NAME(D3DRS_DITHERENABLE);
      ENUM_NAME(D3DRS_ALPHABLENDENABLE);
      ENUM_NAME(D3DRS_FOGENABLE);
      ENUM_NAME(D3DRS_SPECULARENABLE);
      ENUM_NAME(D3DRS_FOGCOLOR);
      ENUM_NAME(D3DRS_FOGTABLEMODE);
      ENUM_NAME(D3DRS_FOGSTART);
      ENUM_NAME(D3DRS_FOGEND);
      ENUM_NAME(D3DRS_FOGDENSITY);
      ENUM_NAME(D3DRS_RANGEFOGENABLE);
      ENUM_NAME(D3DRS_STENCILENABLE);
      ENUM_NAME(D3DRS_STENCILFAIL);
      ENUM_NAME(D3DRS_STENCILZFAIL);
      ENUM_NAME(D3DRS_STENCILPASS);
      ENUM_NAME(D3DRS_STENCILFUNC);
      ENUM_NAME(D3DRS_STENCILREF);
      ENUM_NAME(D3DRS_STENCILMASK);
      ENUM_NAME(D3DRS_STENCILWRITEMASK);
      ENUM_NAME(D3DRS_TEXTUREFACTOR);
      ENUM_NAME(D3DRS_WRAP0);
      ENUM_NAME(D3DRS_WRAP1);
      ENUM_NAME(D3DRS_WRAP2);
      ENUM_NAME(D3DRS_WRAP3);
      ENUM_NAME(D3DRS_WRAP4);
      ENUM_NAME(D3DRS_WRAP5);
      ENUM_NAME(D3DRS_WRAP6);
      ENUM_NAME(D3DRS_WRAP7);
      ENUM_NAME(D3DRS_CLIPPING);
      ENUM_NAME(D3DRS_LIGHTING);
      ENUM_NAME(D3DRS_AMBIENT);
      ENUM_NAME(D3DRS_FOGVERTEXMODE);
      ENUM_NAME(D3DRS_COLORVERTEX);
      ENUM_NAME(D3DRS_LOCALVIEWER);
      ENUM_NAME(D3DRS_NORMALIZENORMALS);
      ENUM_NAME(D3DRS_DIFFUSEMATERIALSOURCE);
      ENUM_NAME(D3DRS_SPECULARMATERIALSOURCE);
      ENUM_NAME(D3DRS_AMBIENTMATERIALSOURCE);
      ENUM_NAME(D3DRS_EMISSIVEMATERIALSOURCE);
      ENUM_NAME(D3DRS_VERTEXBLEND);
      ENUM_NAME(D3DRS_CLIPPLANEENABLE);
      ENUM_NAME(D3DRS_POINTSIZE);
      ENUM_NAME(D3DRS_POINTSIZE_MIN);
      ENUM_NAME(D3DRS_POINTSPRITEENABLE);
      ENUM_NAME(D3DRS_POINTSCALEENABLE);
      ENUM_NAME(D3DRS_POINTSCALE_A);
      ENUM_NAME(D3DRS_POINTSCALE_B);
      ENUM_NAME(D3DRS_POINTSCALE_C);
      ENUM_NAME(D3DRS_MULTISAMPLEANTIALIAS);
      ENUM_NAME(D3DRS_MULTISAMPLEMASK);
      ENUM_NAME(D3DRS_PATCHEDGESTYLE);
      ENUM_NAME(D3DRS_DEBUGMONITORTOKEN);
      ENUM_NAME(D3DRS_POINTSIZE_MAX);
      ENUM_NAME(D3DRS_INDEXEDVERTEXBLENDENABLE);
      ENUM_NAME(D3DRS_COLORWRITEENABLE);
      ENUM_NAME(D3DRS_TWEENFACTOR);
      ENUM_NAME(D3DRS_BLENDOP);
      ENUM_NAME(D3DRS_POSITIONDEGREE);
      ENUM_NAME(D3DRS_NORMALDEGREE);
      ENUM_NAME(D3DRS_SCISSORTESTENABLE);
      ENUM_NAME(D3DRS_SLOPESCALEDEPTHBIAS);
      ENUM_NAME(D3DRS_ANTIALIASEDLINEENABLE);
      ENUM_NAME(D3DRS_MINTESSELLATIONLEVEL);
      ENUM_NAME(D3DRS_MAXTESSELLATIONLEVEL);
      ENUM_NAME(D3DRS_ADAPTIVETESS_X);
      ENUM_NAME(D3DRS_ADAPTIVETESS_Y);
      ENUM_NAME(D3DRS_ADAPTIVETESS_Z);
      ENUM_NAME(D3DRS_ADAPTIVETESS_W);
      ENUM_NAME(D3DRS_ENABLEADAPTIVETESSELLATION);
      ENUM_NAME(D3DRS_TWOSIDEDSTENCILMODE);
      ENUM_NAME(D3DRS_CCW_STENCILFAIL);
      ENUM_NAME(D3DRS_CCW_STENCILZFAIL);
      ENUM_NAME(D3DRS_CCW_STENCILPASS);
      ENUM_NAME(D3DRS_CCW_STENCILFUNC);
      ENUM_NAME(D3DRS_COLORWRITEENABLE1);
      ENUM_NAME(D3DRS_COLORWRITEENABLE2);
      ENUM_NAME(D3DRS_COLORWRITEENABLE3);
      ENUM_NAME(D3DRS_BLENDFACTOR);
      ENUM_NAME(D3DRS_SRGBWRITEENABLE);
      ENUM_NAME(D3DRS_DEPTHBIAS);
      ENUM_NAME(D3DRS_WRAP8);
      ENUM_NAME(D3DRS_WRAP9);
      ENUM_NAME(D3DRS_WRAP10);
      ENUM_NAME(D3DRS_WRAP11);
      ENUM_NAME(D3DRS_WRAP12);
      ENUM_NAME(D3DRS_WRAP13);
      ENUM_NAME(D3DRS_WRAP14);
      ENUM_NAME(D3DRS_WRAP15);
      ENUM_NAME(D3DRS_SEPARATEALPHABLENDENABLE);
      ENUM_NAME(D3DRS_SRCBLENDALPHA);
      ENUM_NAME(D3DRS_DESTBLENDALPHA);
      ENUM_NAME(D3DRS_BLENDOPALPHA);

      ENUM_DEFAULT(e);
    }
  }

}