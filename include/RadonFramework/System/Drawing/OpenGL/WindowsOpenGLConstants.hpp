#ifndef RF_GL_WINDOWSOPENGLCONSTANTS_HPP
#define RF_GL_WINDOWSOPENGLCONSTANTS_HPP

#include <RadonFramework/Core/Types/Int32.hpp>

namespace RadonFramework { namespace GL {

const RF_Type::Int32 WGL_SWAP_MAIN_PLANE = 0x00000001;
const RF_Type::Int32 WGL_SWAP_OVERLAY1 = 0x00000002;
const RF_Type::Int32 WGL_SWAP_OVERLAY2 = 0x00000004;
const RF_Type::Int32 WGL_SWAP_OVERLAY3 = 0x00000008;
const RF_Type::Int32 WGL_SWAP_OVERLAY4 = 0x00000010;
const RF_Type::Int32 WGL_SWAP_OVERLAY5 = 0x00000020;
const RF_Type::Int32 WGL_SWAP_OVERLAY6 = 0x00000040;
const RF_Type::Int32 WGL_SWAP_OVERLAY7 = 0x00000080;
const RF_Type::Int32 WGL_SWAP_OVERLAY8 = 0x00000100;
const RF_Type::Int32 WGL_SWAP_OVERLAY9 = 0x00000200;
const RF_Type::Int32 WGL_SWAP_OVERLAY10 = 0x00000400;
const RF_Type::Int32 WGL_SWAP_OVERLAY11 = 0x00000800;
const RF_Type::Int32 WGL_SWAP_OVERLAY12 = 0x00001000;
const RF_Type::Int32 WGL_SWAP_OVERLAY13 = 0x00002000;
const RF_Type::Int32 WGL_SWAP_OVERLAY14 = 0x00004000;
const RF_Type::Int32 WGL_SWAP_OVERLAY15 = 0x00008000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY1 = 0x00010000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY2 = 0x00020000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY3 = 0x00040000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY4 = 0x00080000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY5 = 0x00100000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY6 = 0x00200000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY7 = 0x00400000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY8 = 0x00800000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY9 = 0x01000000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY10 = 0x02000000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY11 = 0x04000000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY12 = 0x08000000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY13 = 0x10000000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY14 = 0x20000000;
const RF_Type::Int32 WGL_SWAP_UNDERLAY15 = 0x40000000;
const RF_Type::Int32 WGL_FRONT_COLOR_BUFFER_BIT_ARB = 0x00000001;
const RF_Type::Int32 WGL_BACK_COLOR_BUFFER_BIT_ARB = 0x00000002;
const RF_Type::Int32 WGL_DEPTH_BUFFER_BIT_ARB = 0x00000004;
const RF_Type::Int32 WGL_STENCIL_BUFFER_BIT_ARB = 0x00000008;
const RF_Type::Int32 WGL_CONTEXT_DEBUG_BIT_ARB = 0x00000001;
const RF_Type::Int32 WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB = 0x00000002;
const RF_Type::Int32 WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB = 0x00000004;
const RF_Type::Int32 WGL_CONTEXT_RESET_ISOLATION_BIT_ARB = 0x00000008;
const RF_Type::Int32 WGL_CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001;
const RF_Type::Int32 WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB = 0x00000002;
const RF_Type::Int32 WGL_CONTEXT_ES_PROFILE_BIT_EXT = 0x00000004;
const RF_Type::Int32 WGL_CONTEXT_ES2_PROFILE_BIT_EXT = 0x00000004;
const RF_Type::Int32 WGL_IMAGE_BUFFER_MIN_ACCESS_I3D = 0x00000001;
const RF_Type::Int32 WGL_IMAGE_BUFFER_LOCK_I3D = 0x00000002;
const RF_Type::Int32 WGL_ACCESS_READ_ONLY_NV = 0x00000000;
const RF_Type::Int32 WGL_ACCESS_READ_WRITE_NV = 0x00000001;
const RF_Type::Int32 WGL_ACCESS_WRITE_DISCARD_NV = 0x00000002;
const RF_Type::Int32 WGL_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB = 0;
const RF_Type::Int32 WGL_FONT_LINES = 0;
const RF_Type::Int32 WGL_FONT_POLYGONS = 1;
const RF_Type::Int32 WGL_GPU_VENDOR_AMD = 0x1F00;
const RF_Type::Int32 WGL_GPU_RENDERER_STRING_AMD = 0x1F01;
const RF_Type::Int32 WGL_GPU_OPENGL_VERSION_STRING_AMD = 0x1F02;
const RF_Type::Int32 WGL_NUMBER_PIXEL_FORMATS_ARB = 0x2000;
const RF_Type::Int32 WGL_NUMBER_PIXEL_FORMATS_EXT = 0x2000;
const RF_Type::Int32 WGL_DRAW_TO_WINDOW_ARB = 0x2001;
const RF_Type::Int32 WGL_DRAW_TO_WINDOW_EXT = 0x2001;
const RF_Type::Int32 WGL_DRAW_TO_BITMAP_ARB = 0x2002;
const RF_Type::Int32 WGL_DRAW_TO_BITMAP_EXT = 0x2002;
const RF_Type::Int32 WGL_ACCELERATION_ARB = 0x2003;
const RF_Type::Int32 WGL_ACCELERATION_EXT = 0x2003;
const RF_Type::Int32 WGL_NEED_PALETTE_ARB = 0x2004;
const RF_Type::Int32 WGL_NEED_PALETTE_EXT = 0x2004;
const RF_Type::Int32 WGL_NEED_SYSTEM_PALETTE_ARB = 0x2005;
const RF_Type::Int32 WGL_NEED_SYSTEM_PALETTE_EXT = 0x2005;
const RF_Type::Int32 WGL_SWAP_LAYER_BUFFERS_ARB = 0x2006;
const RF_Type::Int32 WGL_SWAP_LAYER_BUFFERS_EXT = 0x2006;
const RF_Type::Int32 WGL_SWAP_METHOD_ARB = 0x2007;
const RF_Type::Int32 WGL_SWAP_METHOD_EXT = 0x2007;
const RF_Type::Int32 WGL_NUMBER_OVERLAYS_ARB = 0x2008;
const RF_Type::Int32 WGL_NUMBER_OVERLAYS_EXT = 0x2008;
const RF_Type::Int32 WGL_NUMBER_UNDERLAYS_ARB = 0x2009;
const RF_Type::Int32 WGL_NUMBER_UNDERLAYS_EXT = 0x2009;
const RF_Type::Int32 WGL_TRANSPARENT_ARB = 0x200A;
const RF_Type::Int32 WGL_TRANSPARENT_EXT = 0x200A;
const RF_Type::Int32 WGL_TRANSPARENT_VALUE_EXT = 0x200B;
const RF_Type::Int32 WGL_SHARE_DEPTH_ARB = 0x200C;
const RF_Type::Int32 WGL_SHARE_DEPTH_EXT = 0x200C;
const RF_Type::Int32 WGL_SHARE_STENCIL_ARB = 0x200D;
const RF_Type::Int32 WGL_SHARE_STENCIL_EXT = 0x200D;
const RF_Type::Int32 WGL_SHARE_ACCUM_ARB = 0x200E;
const RF_Type::Int32 WGL_SHARE_ACCUM_EXT = 0x200E;
const RF_Type::Int32 WGL_SUPPORT_GDI_ARB = 0x200F;
const RF_Type::Int32 WGL_SUPPORT_GDI_EXT = 0x200F;
const RF_Type::Int32 WGL_SUPPORT_OPENGL_ARB = 0x2010;
const RF_Type::Int32 WGL_SUPPORT_OPENGL_EXT = 0x2010;
const RF_Type::Int32 WGL_DOUBLE_BUFFER_ARB = 0x2011;
const RF_Type::Int32 WGL_DOUBLE_BUFFER_EXT = 0x2011;
const RF_Type::Int32 WGL_STEREO_ARB = 0x2012;
const RF_Type::Int32 WGL_STEREO_EXT = 0x2012;
const RF_Type::Int32 WGL_PIXEL_TYPE_ARB = 0x2013;
const RF_Type::Int32 WGL_PIXEL_TYPE_EXT = 0x2013;
const RF_Type::Int32 WGL_COLOR_BITS_ARB = 0x2014;
const RF_Type::Int32 WGL_COLOR_BITS_EXT = 0x2014;
const RF_Type::Int32 WGL_RED_BITS_ARB = 0x2015;
const RF_Type::Int32 WGL_RED_BITS_EXT = 0x2015;
const RF_Type::Int32 WGL_RED_SHIFT_ARB = 0x2016;
const RF_Type::Int32 WGL_RED_SHIFT_EXT = 0x2016;
const RF_Type::Int32 WGL_GREEN_BITS_ARB = 0x2017;
const RF_Type::Int32 WGL_GREEN_BITS_EXT = 0x2017;
const RF_Type::Int32 WGL_GREEN_SHIFT_ARB = 0x2018;
const RF_Type::Int32 WGL_GREEN_SHIFT_EXT = 0x2018;
const RF_Type::Int32 WGL_BLUE_BITS_ARB = 0x2019;
const RF_Type::Int32 WGL_BLUE_BITS_EXT = 0x2019;
const RF_Type::Int32 WGL_BLUE_SHIFT_ARB = 0x201A;
const RF_Type::Int32 WGL_BLUE_SHIFT_EXT = 0x201A;
const RF_Type::Int32 WGL_ALPHA_BITS_ARB = 0x201B;
const RF_Type::Int32 WGL_ALPHA_BITS_EXT = 0x201B;
const RF_Type::Int32 WGL_ALPHA_SHIFT_ARB = 0x201C;
const RF_Type::Int32 WGL_ALPHA_SHIFT_EXT = 0x201C;
const RF_Type::Int32 WGL_ACCUM_BITS_ARB = 0x201D;
const RF_Type::Int32 WGL_ACCUM_BITS_EXT = 0x201D;
const RF_Type::Int32 WGL_ACCUM_RED_BITS_ARB = 0x201E;
const RF_Type::Int32 WGL_ACCUM_RED_BITS_EXT = 0x201E;
const RF_Type::Int32 WGL_ACCUM_GREEN_BITS_ARB = 0x201F;
const RF_Type::Int32 WGL_ACCUM_GREEN_BITS_EXT = 0x201F;
const RF_Type::Int32 WGL_ACCUM_BLUE_BITS_ARB = 0x2020;
const RF_Type::Int32 WGL_ACCUM_BLUE_BITS_EXT = 0x2020;
const RF_Type::Int32 WGL_ACCUM_ALPHA_BITS_ARB = 0x2021;
const RF_Type::Int32 WGL_ACCUM_ALPHA_BITS_EXT = 0x2021;
const RF_Type::Int32 WGL_DEPTH_BITS_ARB = 0x2022;
const RF_Type::Int32 WGL_DEPTH_BITS_EXT = 0x2022;
const RF_Type::Int32 WGL_STENCIL_BITS_ARB = 0x2023;
const RF_Type::Int32 WGL_STENCIL_BITS_EXT = 0x2023;
const RF_Type::Int32 WGL_AUX_BUFFERS_ARB = 0x2024;
const RF_Type::Int32 WGL_AUX_BUFFERS_EXT = 0x2024;
const RF_Type::Int32 WGL_NO_ACCELERATION_ARB = 0x2025;
const RF_Type::Int32 WGL_NO_ACCELERATION_EXT = 0x2025;
const RF_Type::Int32 WGL_GENERIC_ACCELERATION_ARB = 0x2026;
const RF_Type::Int32 WGL_GENERIC_ACCELERATION_EXT = 0x2026;
const RF_Type::Int32 WGL_FULL_ACCELERATION_ARB = 0x2027;
const RF_Type::Int32 WGL_FULL_ACCELERATION_EXT = 0x2027;
const RF_Type::Int32 WGL_SWAP_EXCHANGE_ARB = 0x2028;
const RF_Type::Int32 WGL_SWAP_EXCHANGE_EXT = 0x2028;
const RF_Type::Int32 WGL_SWAP_COPY_ARB = 0x2029;
const RF_Type::Int32 WGL_SWAP_COPY_EXT = 0x2029;
const RF_Type::Int32 WGL_SWAP_UNDEFINED_ARB = 0x202A;
const RF_Type::Int32 WGL_SWAP_UNDEFINED_EXT = 0x202A;
const RF_Type::Int32 WGL_TYPE_RGBA_ARB = 0x202B;
const RF_Type::Int32 WGL_TYPE_RGBA_EXT = 0x202B;
const RF_Type::Int32 WGL_TYPE_COLORINDEX_ARB = 0x202C;
const RF_Type::Int32 WGL_TYPE_COLORINDEX_EXT = 0x202C;
const RF_Type::Int32 WGL_DRAW_TO_PBUFFER_ARB = 0x202D;
const RF_Type::Int32 WGL_DRAW_TO_PBUFFER_EXT = 0x202D;
const RF_Type::Int32 WGL_MAX_PBUFFER_PIXELS_ARB = 0x202E;
const RF_Type::Int32 WGL_MAX_PBUFFER_PIXELS_EXT = 0x202E;
const RF_Type::Int32 WGL_MAX_PBUFFER_WIDTH_ARB = 0x202F;
const RF_Type::Int32 WGL_MAX_PBUFFER_WIDTH_EXT = 0x202F;
const RF_Type::Int32 WGL_MAX_PBUFFER_HEIGHT_ARB = 0x2030;
const RF_Type::Int32 WGL_MAX_PBUFFER_HEIGHT_EXT = 0x2030;
const RF_Type::Int32 WGL_OPTIMAL_PBUFFER_WIDTH_EXT = 0x2031;
const RF_Type::Int32 WGL_OPTIMAL_PBUFFER_HEIGHT_EXT = 0x2032;
const RF_Type::Int32 WGL_PBUFFER_LARGEST_ARB = 0x2033;
const RF_Type::Int32 WGL_PBUFFER_LARGEST_EXT = 0x2033;
const RF_Type::Int32 WGL_PBUFFER_WIDTH_ARB = 0x2034;
const RF_Type::Int32 WGL_PBUFFER_WIDTH_EXT = 0x2034;
const RF_Type::Int32 WGL_PBUFFER_HEIGHT_ARB = 0x2035;
const RF_Type::Int32 WGL_PBUFFER_HEIGHT_EXT = 0x2035;
const RF_Type::Int32 WGL_PBUFFER_LOST_ARB = 0x2036;
const RF_Type::Int32 WGL_TRANSPARENT_RED_VALUE_ARB = 0x2037;
const RF_Type::Int32 WGL_TRANSPARENT_GREEN_VALUE_ARB = 0x2038;
const RF_Type::Int32 WGL_TRANSPARENT_BLUE_VALUE_ARB = 0x2039;
const RF_Type::Int32 WGL_TRANSPARENT_ALPHA_VALUE_ARB = 0x203A;
const RF_Type::Int32 WGL_TRANSPARENT_INDEX_VALUE_ARB = 0x203B;
const RF_Type::Int32 WGL_DEPTH_FLOAT_EXT = 0x2040;
const RF_Type::Int32 WGL_SAMPLE_BUFFERS_ARB = 0x2041;
const RF_Type::Int32 WGL_SAMPLE_BUFFERS_EXT = 0x2041;
const RF_Type::Int32 WGL_COVERAGE_SAMPLES_NV = 0x2042;
const RF_Type::Int32 WGL_SAMPLES_ARB = 0x2042;
const RF_Type::Int32 WGL_SAMPLES_EXT = 0x2042;
const RF_Type::Int32 ERROR_INVALID_PIXEL_TYPE_ARB = 0x2043;
const RF_Type::Int32 ERROR_INVALID_PIXEL_TYPE_EXT = 0x2043;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_MULTIVIEW_I3D = 0x2044;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_EXTERNAL_SYNC_I3D = 0x2045;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_EXTERNAL_FIELD_I3D = 0x2046;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_EXTERNAL_TTL_I3D = 0x2047;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_DIGITAL_SYNC_I3D = 0x2048;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_DIGITAL_FIELD_I3D = 0x2049;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_EDGE_FALLING_I3D = 0x204A;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_EDGE_RISING_I3D = 0x204B;
const RF_Type::Int32 WGL_GENLOCK_SOURCE_EDGE_BOTH_I3D = 0x204C;
const RF_Type::Int32 WGL_GAMMA_TABLE_SIZE_I3D = 0x204E;
const RF_Type::Int32 WGL_GAMMA_EXCLUDE_DESKTOP_I3D = 0x204F;
const RF_Type::Int32 WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D = 0x2050;
const RF_Type::Int32 WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D = 0x2051;
const RF_Type::Int32 WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D = 0x2052;
const RF_Type::Int32 WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D = 0x2053;
const RF_Type::Int32 ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB = 0x2054;
const RF_Type::Int32 WGL_STEREO_EMITTER_ENABLE_3DL = 0x2055;
const RF_Type::Int32 WGL_STEREO_EMITTER_DISABLE_3DL = 0x2056;
const RF_Type::Int32 WGL_STEREO_POLARITY_NORMAL_3DL = 0x2057;
const RF_Type::Int32 WGL_STEREO_POLARITY_INVERT_3DL = 0x2058;
const RF_Type::Int32 WGL_SAMPLE_BUFFERS_3DFX = 0x2060;
const RF_Type::Int32 WGL_SAMPLES_3DFX = 0x2061;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RGB_ARB = 0x2070;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RGBA_ARB = 0x2071;
const RF_Type::Int32 WGL_TEXTURE_FORMAT_ARB = 0x2072;
const RF_Type::Int32 WGL_TEXTURE_TARGET_ARB = 0x2073;
const RF_Type::Int32 WGL_MIPMAP_TEXTURE_ARB = 0x2074;
const RF_Type::Int32 WGL_TEXTURE_RGB_ARB = 0x2075;
const RF_Type::Int32 WGL_TEXTURE_RGBA_ARB = 0x2076;
const RF_Type::Int32 WGL_NO_TEXTURE_ARB = 0x2077;
const RF_Type::Int32 WGL_TEXTURE_CUBE_MAP_ARB = 0x2078;
const RF_Type::Int32 WGL_TEXTURE_1D_ARB = 0x2079;
const RF_Type::Int32 WGL_TEXTURE_2D_ARB = 0x207A;
const RF_Type::Int32 WGL_MIPMAP_LEVEL_ARB = 0x207B;
const RF_Type::Int32 WGL_CUBE_MAP_FACE_ARB = 0x207C;
const RF_Type::Int32 WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB = 0x207D;
const RF_Type::Int32 WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB = 0x207E;
const RF_Type::Int32 WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB = 0x207F;
const RF_Type::Int32 WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB = 0x2080;
const RF_Type::Int32 WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB = 0x2081;
const RF_Type::Int32 WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB = 0x2082;
const RF_Type::Int32 WGL_FRONT_LEFT_ARB = 0x2083;
const RF_Type::Int32 WGL_FRONT_RIGHT_ARB = 0x2084;
const RF_Type::Int32 WGL_BACK_LEFT_ARB = 0x2085;
const RF_Type::Int32 WGL_BACK_RIGHT_ARB = 0x2086;
const RF_Type::Int32 WGL_AUX0_ARB = 0x2087;
const RF_Type::Int32 WGL_AUX1_ARB = 0x2088;
const RF_Type::Int32 WGL_AUX2_ARB = 0x2089;
const RF_Type::Int32 WGL_AUX3_ARB = 0x208A;
const RF_Type::Int32 WGL_AUX4_ARB = 0x208B;
const RF_Type::Int32 WGL_AUX5_ARB = 0x208C;
const RF_Type::Int32 WGL_AUX6_ARB = 0x208D;
const RF_Type::Int32 WGL_AUX7_ARB = 0x208E;
const RF_Type::Int32 WGL_AUX8_ARB = 0x208F;
const RF_Type::Int32 WGL_AUX9_ARB = 0x2090;
const RF_Type::Int32 WGL_CONTEXT_MAJOR_VERSION_ARB = 0x2091;
const RF_Type::Int32 WGL_CONTEXT_MINOR_VERSION_ARB = 0x2092;
const RF_Type::Int32 WGL_CONTEXT_LAYER_PLANE_ARB = 0x2093;
const RF_Type::Int32 WGL_CONTEXT_FLAGS_ARB = 0x2094;
const RF_Type::Int32 ERROR_INVALID_VERSION_ARB = 0x2095;
const RF_Type::Int32 ERROR_INVALID_PROFILE_ARB = 0x2096;
const RF_Type::Int32 WGL_CONTEXT_RELEASE_BEHAVIOR_ARB = 0x2097;
const RF_Type::Int32 WGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB = 0x2098;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RECTANGLE_RGB_NV = 0x20A0;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RECTANGLE_RGBA_NV = 0x20A1;
const RF_Type::Int32 WGL_TEXTURE_RECTANGLE_NV = 0x20A2;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_DEPTH_NV = 0x20A3;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV = 0x20A4;
const RF_Type::Int32 WGL_DEPTH_TEXTURE_FORMAT_NV = 0x20A5;
const RF_Type::Int32 WGL_TEXTURE_DEPTH_COMPONENT_NV = 0x20A6;
const RF_Type::Int32 WGL_DEPTH_COMPONENT_NV = 0x20A7;
const RF_Type::Int32 WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT = 0x20A8;
const RF_Type::Int32 WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB = 0x20A9;
const RF_Type::Int32 WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT = 0x20A9;
const RF_Type::Int32 WGL_FLOAT_COMPONENTS_NV = 0x20B0;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV = 0x20B1;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV = 0x20B2;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV = 0x20B3;
const RF_Type::Int32 WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV = 0x20B4;
const RF_Type::Int32 WGL_TEXTURE_FLOAT_R_NV = 0x20B5;
const RF_Type::Int32 WGL_TEXTURE_FLOAT_RG_NV = 0x20B6;
const RF_Type::Int32 WGL_TEXTURE_FLOAT_RGB_NV = 0x20B7;
const RF_Type::Int32 WGL_TEXTURE_FLOAT_RGBA_NV = 0x20B8;
const RF_Type::Int32 WGL_COLOR_SAMPLES_NV = 0x20B9;
const RF_Type::Int32 WGL_BIND_TO_VIDEO_RGB_NV = 0x20C0;
const RF_Type::Int32 WGL_BIND_TO_VIDEO_RGBA_NV = 0x20C1;
const RF_Type::Int32 WGL_BIND_TO_VIDEO_RGB_AND_DEPTH_NV = 0x20C2;
const RF_Type::Int32 WGL_VIDEO_OUT_COLOR_NV = 0x20C3;
const RF_Type::Int32 WGL_VIDEO_OUT_ALPHA_NV = 0x20C4;
const RF_Type::Int32 WGL_VIDEO_OUT_DEPTH_NV = 0x20C5;
const RF_Type::Int32 WGL_VIDEO_OUT_COLOR_AND_ALPHA_NV = 0x20C6;
const RF_Type::Int32 WGL_VIDEO_OUT_COLOR_AND_DEPTH_NV = 0x20C7;
const RF_Type::Int32 WGL_VIDEO_OUT_FRAME = 0x20C8;
const RF_Type::Int32 WGL_VIDEO_OUT_FIELD_1 = 0x20C9;
const RF_Type::Int32 WGL_VIDEO_OUT_FIELD_2 = 0x20CA;
const RF_Type::Int32 WGL_VIDEO_OUT_STACKED_FIELDS_1_2 = 0x20CB;
const RF_Type::Int32 WGL_VIDEO_OUT_STACKED_FIELDS_2_1 = 0x20CC;
const RF_Type::Int32 WGL_UNIQUE_ID_NV = 0x20CE;
const RF_Type::Int32 WGL_NUM_VIDEO_CAPTURE_SLOTS_NV = 0x20CF;
const RF_Type::Int32 ERROR_INCOMPATIBLE_AFFINITY_MASKS_NV = 0x20D0;
const RF_Type::Int32 ERROR_MISSING_AFFINITY_MASK_NV = 0x20D1;
const RF_Type::Int32 WGL_NUM_VIDEO_SLOTS_NV = 0x20F0;
const RF_Type::Int32 WGL_TYPE_RGBA_FLOAT_ARB = 0x21A0;
const RF_Type::Int32 WGL_TYPE_RGBA_FLOAT_ATI = 0x21A0;
const RF_Type::Int32 WGL_GPU_FASTEST_TARGET_GPUS_AMD = 0x21A2;
const RF_Type::Int32 WGL_GPU_RAM_AMD = 0x21A3;
const RF_Type::Int32 WGL_GPU_CLOCK_AMD = 0x21A4;
const RF_Type::Int32 WGL_GPU_NUM_PIPES_AMD = 0x21A5;
const RF_Type::Int32 WGL_GPU_NUM_SIMD_AMD = 0x21A6;
const RF_Type::Int32 WGL_GPU_NUM_RB_AMD = 0x21A7;
const RF_Type::Int32 WGL_GPU_NUM_SPI_AMD = 0x21A8;
const RF_Type::Int32 WGL_LOSE_CONTEXT_ON_RESET_ARB = 0x8252;
const RF_Type::Int32 WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB = 0x8256;
const RF_Type::Int32 WGL_NO_RESET_NOTIFICATION_ARB = 0x8261;
const RF_Type::Int32 WGL_CONTEXT_PROFILE_MASK_ARB = 0x9126;

} }

#ifndef RF_SHORTHAND_NAMESPACE_OGL
#define RF_SHORTHAND_NAMESPACE_OGL
    namespace RF_GL = RadonFramework::GL;
#endif

#endif // RF_GL_WINDOWSOPENGLCONSTANTS_HPP