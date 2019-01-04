#ifndef RF_GL_OPENGLX11CONSTANTS_HPP
#define RF_GL_OPENGLX11CONSTANTS_HPP
namespace RadonFramework { namespace GL {

const RF_Type::Int32 GLX_EXTENSION_NAME = "GLX";
const RF_Type::Int32 GLX_VENDOR = 0x1;
const RF_Type::Int32 GLX_VERSION = 0x2;
const RF_Type::Int32 GLX_EXTENSIONS = 0x3;
const RF_Type::Int32 GLX_3DFX_WINDOW_MODE_MESA = 0x1;
const RF_Type::Int32 GLX_3DFX_FULLSCREEN_MODE_MESA = 0x2;
const RF_Type::Int32 GLX_PbufferClobber = 0;
const RF_Type::Int32 GLX_BufferSwapComplete = 1;
const RF_Type::Int32 __GLX_NUMBER_EVENTS = 17;
const RF_Type::Int32 GLX_BAD_SCREEN = 1;
const RF_Type::Int32 GLX_BAD_ATTRIBUTE = 2;
const RF_Type::Int32 GLX_NO_EXTENSION = 3;
const RF_Type::Int32 GLX_BAD_VISUAL = 4;
const RF_Type::Int32 GLX_BAD_CONTEXT = 5;
const RF_Type::Int32 GLX_BAD_VALUE = 6;
const RF_Type::Int32 GLX_BAD_ENUM = 7;
const RF_Type::Int32 GLX_BAD_HYPERPIPE_CONFIG_SGIX = 91;
const RF_Type::Int32 GLX_BAD_HYPERPIPE_SGIX = 92;
const RF_Type::Int32 GLX_STEREO_NOTIFY_EXT = 0x00000000;
const RF_Type::Int32 GLX_WINDOW_BIT = 0x00000001;
const RF_Type::Int32 GLX_WINDOW_BIT_SGIX = 0x00000001;
const RF_Type::Int32 GLX_PIXMAP_BIT = 0x00000002;
const RF_Type::Int32 GLX_PIXMAP_BIT_SGIX = 0x00000002;
const RF_Type::Int32 GLX_PBUFFER_BIT = 0x00000004;
const RF_Type::Int32 GLX_PBUFFER_BIT_SGIX = 0x00000004;
const RF_Type::Int32 GLX_RGBA_BIT = 0x00000001;
const RF_Type::Int32 GLX_RGBA_BIT_SGIX = 0x00000001;
const RF_Type::Int32 GLX_COLOR_INDEX_BIT = 0x00000002;
const RF_Type::Int32 GLX_COLOR_INDEX_BIT_SGIX = 0x00000002;
const RF_Type::Int32 GLX_RGBA_FLOAT_BIT_ARB = 0x00000004;
const RF_Type::Int32 GLX_RGBA_UNSIGNED_FLOAT_BIT_EXT = 0x00000008;
const RF_Type::Int32 GLX_SYNC_FRAME_SGIX = 0x00000000;
const RF_Type::Int32 GLX_SYNC_SWAP_SGIX = 0x00000001;
const RF_Type::Int32 GLX_STEREO_NOTIFY_MASK_EXT = 0x00000001;
const RF_Type::Int32 GLX_BUFFER_SWAP_COMPLETE_INTEL_MASK = 0x04000000;
const RF_Type::Int32 GLX_PBUFFER_CLOBBER_MASK = 0x08000000;
const RF_Type::Int32 GLX_BUFFER_CLOBBER_MASK_SGIX = 0x08000000;
const RF_Type::Int32 GLX_FRONT_LEFT_BUFFER_BIT = 0x00000001;
const RF_Type::Int32 GLX_FRONT_LEFT_BUFFER_BIT_SGIX = 0x00000001;
const RF_Type::Int32 GLX_FRONT_RIGHT_BUFFER_BIT = 0x00000002;
const RF_Type::Int32 GLX_FRONT_RIGHT_BUFFER_BIT_SGIX = 0x00000002;
const RF_Type::Int32 GLX_BACK_LEFT_BUFFER_BIT = 0x00000004;
const RF_Type::Int32 GLX_BACK_LEFT_BUFFER_BIT_SGIX = 0x00000004;
const RF_Type::Int32 GLX_BACK_RIGHT_BUFFER_BIT = 0x00000008;
const RF_Type::Int32 GLX_BACK_RIGHT_BUFFER_BIT_SGIX = 0x00000008;
const RF_Type::Int32 GLX_AUX_BUFFERS_BIT = 0x00000010;
const RF_Type::Int32 GLX_AUX_BUFFERS_BIT_SGIX = 0x00000010;
const RF_Type::Int32 GLX_DEPTH_BUFFER_BIT = 0x00000020;
const RF_Type::Int32 GLX_DEPTH_BUFFER_BIT_SGIX = 0x00000020;
const RF_Type::Int32 GLX_STENCIL_BUFFER_BIT = 0x00000040;
const RF_Type::Int32 GLX_STENCIL_BUFFER_BIT_SGIX = 0x00000040;
const RF_Type::Int32 GLX_ACCUM_BUFFER_BIT = 0x00000080;
const RF_Type::Int32 GLX_ACCUM_BUFFER_BIT_SGIX = 0x00000080;
const RF_Type::Int32 GLX_SAMPLE_BUFFERS_BIT_SGIX = 0x00000100;
const RF_Type::Int32 GLX_HYPERPIPE_DISPLAY_PIPE_SGIX = 0x00000001;
const RF_Type::Int32 GLX_HYPERPIPE_RENDER_PIPE_SGIX = 0x00000002;
const RF_Type::Int32 GLX_PIPE_RECT_SGIX = 0x00000001;
const RF_Type::Int32 GLX_PIPE_RECT_LIMITS_SGIX = 0x00000002;
const RF_Type::Int32 GLX_HYPERPIPE_STEREO_SGIX = 0x00000003;
const RF_Type::Int32 GLX_HYPERPIPE_PIXEL_AVERAGE_SGIX = 0x00000004;
const RF_Type::Int32 GLX_TEXTURE_1D_BIT_EXT = 0x00000001;
const RF_Type::Int32 GLX_TEXTURE_2D_BIT_EXT = 0x00000002;
const RF_Type::Int32 GLX_TEXTURE_RECTANGLE_BIT_EXT = 0x00000004;
const RF_Type::Int32 GLX_CONTEXT_DEBUG_BIT_ARB = 0x00000001;
const RF_Type::Int32 GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB = 0x00000002;
const RF_Type::Int32 GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB = 0x00000004;
const RF_Type::Int32 GLX_CONTEXT_RESET_ISOLATION_BIT_ARB = 0x00000008;
const RF_Type::Int32 GLX_CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001;
const RF_Type::Int32 GLX_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB = 0x00000002;
const RF_Type::Int32 GLX_CONTEXT_ES_PROFILE_BIT_EXT = 0x00000004;
const RF_Type::Int32 GLX_CONTEXT_ES2_PROFILE_BIT_EXT = 0x00000004;
const RF_Type::Int32 GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX = 80;
const RF_Type::Int32 GLX_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB = 0;
const RF_Type::Int32 GLX_DONT_CARE = 0xFFFFFFFF;
const RF_Type::Int32 GLX_USE_GL = 1;
const RF_Type::Int32 GLX_BUFFER_SIZE = 2;
const RF_Type::Int32 GLX_LEVEL = 3;
const RF_Type::Int32 GLX_RGBA = 4;
const RF_Type::Int32 GLX_DOUBLEBUFFER = 5;
const RF_Type::Int32 GLX_STEREO = 6;
const RF_Type::Int32 GLX_AUX_BUFFERS = 7;
const RF_Type::Int32 GLX_RED_SIZE = 8;
const RF_Type::Int32 GLX_GREEN_SIZE = 9;
const RF_Type::Int32 GLX_BLUE_SIZE = 10;
const RF_Type::Int32 GLX_ALPHA_SIZE = 11;
const RF_Type::Int32 GLX_DEPTH_SIZE = 12;
const RF_Type::Int32 GLX_STENCIL_SIZE = 13;
const RF_Type::Int32 GLX_ACCUM_RED_SIZE = 14;
const RF_Type::Int32 GLX_ACCUM_GREEN_SIZE = 15;
const RF_Type::Int32 GLX_ACCUM_BLUE_SIZE = 16;
const RF_Type::Int32 GLX_ACCUM_ALPHA_SIZE = 17;
const RF_Type::Int32 GLX_CONFIG_CAVEAT = 0x20;
const RF_Type::Int32 GLX_VISUAL_CAVEAT_EXT = 0x20;
const RF_Type::Int32 GLX_X_VISUAL_TYPE = 0x22;
const RF_Type::Int32 GLX_X_VISUAL_TYPE_EXT = 0x22;
const RF_Type::Int32 GLX_TRANSPARENT_TYPE = 0x23;
const RF_Type::Int32 GLX_TRANSPARENT_TYPE_EXT = 0x23;
const RF_Type::Int32 GLX_TRANSPARENT_INDEX_VALUE = 0x24;
const RF_Type::Int32 GLX_TRANSPARENT_INDEX_VALUE_EXT = 0x24;
const RF_Type::Int32 GLX_TRANSPARENT_RED_VALUE = 0x25;
const RF_Type::Int32 GLX_TRANSPARENT_RED_VALUE_EXT = 0x25;
const RF_Type::Int32 GLX_TRANSPARENT_GREEN_VALUE = 0x26;
const RF_Type::Int32 GLX_TRANSPARENT_GREEN_VALUE_EXT = 0x26;
const RF_Type::Int32 GLX_TRANSPARENT_BLUE_VALUE = 0x27;
const RF_Type::Int32 GLX_TRANSPARENT_BLUE_VALUE_EXT = 0x27;
const RF_Type::Int32 GLX_TRANSPARENT_ALPHA_VALUE = 0x28;
const RF_Type::Int32 GLX_TRANSPARENT_ALPHA_VALUE_EXT = 0x28;
const RF_Type::Int32 GLX_GPU_VENDOR_AMD = 0x1F00;
const RF_Type::Int32 GLX_GPU_RENDERER_STRING_AMD = 0x1F01;
const RF_Type::Int32 GLX_GPU_OPENGL_VERSION_STRING_AMD = 0x1F02;
const RF_Type::Int32 GLX_CONTEXT_MAJOR_VERSION_ARB = 0x2091;
const RF_Type::Int32 GLX_CONTEXT_MINOR_VERSION_ARB = 0x2092;
const RF_Type::Int32 GLX_CONTEXT_FLAGS_ARB = 0x2094;
const RF_Type::Int32 GLX_CONTEXT_ALLOW_BUFFER_BYTE_ORDER_MISMATCH_ARB = 0x2095;
const RF_Type::Int32 GLX_CONTEXT_RELEASE_BEHAVIOR_ARB = 0x2097;
const RF_Type::Int32 GLX_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB = 0x2098;
const RF_Type::Int32 GLX_FLOAT_COMPONENTS_NV = 0x20B0;
const RF_Type::Int32 GLX_RGBA_UNSIGNED_FLOAT_TYPE_EXT = 0x20B1;
const RF_Type::Int32 GLX_FRAMEBUFFER_SRGB_CAPABLE_ARB = 0x20B2;
const RF_Type::Int32 GLX_FRAMEBUFFER_SRGB_CAPABLE_EXT = 0x20B2;
const RF_Type::Int32 GLX_COLOR_SAMPLES_NV = 0x20B3;
const RF_Type::Int32 GLX_RGBA_FLOAT_TYPE_ARB = 0x20B9;
const RF_Type::Int32 GLX_VIDEO_OUT_COLOR_NV = 0x20C3;
const RF_Type::Int32 GLX_VIDEO_OUT_ALPHA_NV = 0x20C4;
const RF_Type::Int32 GLX_VIDEO_OUT_DEPTH_NV = 0x20C5;
const RF_Type::Int32 GLX_VIDEO_OUT_COLOR_AND_ALPHA_NV = 0x20C6;
const RF_Type::Int32 GLX_VIDEO_OUT_COLOR_AND_DEPTH_NV = 0x20C7;
const RF_Type::Int32 GLX_VIDEO_OUT_FRAME_NV = 0x20C8;
const RF_Type::Int32 GLX_VIDEO_OUT_FIELD_1_NV = 0x20C9;
const RF_Type::Int32 GLX_VIDEO_OUT_FIELD_2_NV = 0x20CA;
const RF_Type::Int32 GLX_VIDEO_OUT_STACKED_FIELDS_1_2_NV = 0x20CB;
const RF_Type::Int32 GLX_VIDEO_OUT_STACKED_FIELDS_2_1_NV = 0x20CC;
const RF_Type::Int32 GLX_DEVICE_ID_NV = 0x20CD;
const RF_Type::Int32 GLX_UNIQUE_ID_NV = 0x20CE;
const RF_Type::Int32 GLX_NUM_VIDEO_CAPTURE_SLOTS_NV = 0x20CF;
const RF_Type::Int32 GLX_BIND_TO_TEXTURE_RGB_EXT = 0x20D0;
const RF_Type::Int32 GLX_BIND_TO_TEXTURE_RGBA_EXT = 0x20D1;
const RF_Type::Int32 GLX_BIND_TO_MIPMAP_TEXTURE_EXT = 0x20D2;
const RF_Type::Int32 GLX_BIND_TO_TEXTURE_TARGETS_EXT = 0x20D3;
const RF_Type::Int32 GLX_Y_INVERTED_EXT = 0x20D4;
const RF_Type::Int32 GLX_TEXTURE_FORMAT_EXT = 0x20D5;
const RF_Type::Int32 GLX_TEXTURE_TARGET_EXT = 0x20D6;
const RF_Type::Int32 GLX_MIPMAP_TEXTURE_EXT = 0x20D7;
const RF_Type::Int32 GLX_TEXTURE_FORMAT_NONE_EXT = 0x20D8;
const RF_Type::Int32 GLX_TEXTURE_FORMAT_RGB_EXT = 0x20D9;
const RF_Type::Int32 GLX_TEXTURE_FORMAT_RGBA_EXT = 0x20DA;
const RF_Type::Int32 GLX_TEXTURE_1D_EXT = 0x20DB;
const RF_Type::Int32 GLX_TEXTURE_2D_EXT = 0x20DC;
const RF_Type::Int32 GLX_TEXTURE_RECTANGLE_EXT = 0x20DD;
const RF_Type::Int32 GLX_FRONT_LEFT_EXT = 0x20DE;
const RF_Type::Int32 GLX_FRONT_RIGHT_EXT = 0x20DF;
const RF_Type::Int32 GLX_BACK_LEFT_EXT = 0x20E0;
const RF_Type::Int32 GLX_BACK_RIGHT_EXT = 0x20E1;
const RF_Type::Int32 GLX_FRONT_EXT = 0x20DE;
const RF_Type::Int32 GLX_BACK_EXT = 0x20E0;
const RF_Type::Int32 GLX_AUX0_EXT = 0x20E2;
const RF_Type::Int32 GLX_AUX1_EXT = 0x20E3;
const RF_Type::Int32 GLX_AUX2_EXT = 0x20E4;
const RF_Type::Int32 GLX_AUX3_EXT = 0x20E5;
const RF_Type::Int32 GLX_AUX4_EXT = 0x20E6;
const RF_Type::Int32 GLX_AUX5_EXT = 0x20E7;
const RF_Type::Int32 GLX_AUX6_EXT = 0x20E8;
const RF_Type::Int32 GLX_AUX7_EXT = 0x20E9;
const RF_Type::Int32 GLX_AUX8_EXT = 0x20EA;
const RF_Type::Int32 GLX_AUX9_EXT = 0x20EB;
const RF_Type::Int32 GLX_NUM_VIDEO_SLOTS_NV = 0x20F0;
const RF_Type::Int32 GLX_SWAP_INTERVAL_EXT = 0x20F1;
const RF_Type::Int32 GLX_MAX_SWAP_INTERVAL_EXT = 0x20F2;
const RF_Type::Int32 GLX_LATE_SWAPS_TEAR_EXT = 0x20F3;
const RF_Type::Int32 GLX_BACK_BUFFER_AGE_EXT = 0x20F4;
const RF_Type::Int32 GLX_STEREO_TREE_EXT = 0x20F5;
const RF_Type::Int32 GLX_GPU_FASTEST_TARGET_GPUS_AMD = 0x21A2;
const RF_Type::Int32 GLX_GPU_RAM_AMD = 0x21A3;
const RF_Type::Int32 GLX_GPU_CLOCK_AMD = 0x21A4;
const RF_Type::Int32 GLX_GPU_NUM_PIPES_AMD = 0x21A5;
const RF_Type::Int32 GLX_GPU_NUM_SIMD_AMD = 0x21A6;
const RF_Type::Int32 GLX_GPU_NUM_RB_AMD = 0x21A7;
const RF_Type::Int32 GLX_GPU_NUM_SPI_AMD = 0x21A8;
const RF_Type::Int32 GLX_NONE = 0x8000;
const RF_Type::Int32 GLX_SLOW_CONFIG = 0x8001;
const RF_Type::Int32 GLX_TRUE_COLOR = 0x8002;
const RF_Type::Int32 GLX_DIRECT_COLOR = 0x8003;
const RF_Type::Int32 GLX_PSEUDO_COLOR = 0x8004;
const RF_Type::Int32 GLX_STATIC_COLOR = 0x8005;
const RF_Type::Int32 GLX_GRAY_SCALE = 0x8006;
const RF_Type::Int32 GLX_STATIC_GRAY = 0x8007;
const RF_Type::Int32 GLX_TRANSPARENT_RGB = 0x8008;
const RF_Type::Int32 GLX_TRANSPARENT_INDEX = 0x8009;
const RF_Type::Int32 GLX_VISUAL_ID = 0x800B;
const RF_Type::Int32 GLX_SCREEN = 0x800C;
const RF_Type::Int32 GLX_NON_CONFORMANT_CONFIG = 0x800D;
const RF_Type::Int32 GLX_DRAWABLE_TYPE = 0x8010;
const RF_Type::Int32 GLX_RENDER_TYPE = 0x8011;
const RF_Type::Int32 GLX_X_RENDERABLE = 0x8012;
const RF_Type::Int32 GLX_FBCONFIG_ID = 0x8013;
const RF_Type::Int32 GLX_RGBA_TYPE = 0x8014;
const RF_Type::Int32 GLX_COLOR_INDEX_TYPE = 0x8015;
const RF_Type::Int32 GLX_MAX_PBUFFER_WIDTH = 0x8016;
const RF_Type::Int32 GLX_MAX_PBUFFER_HEIGHT = 0x8017;
const RF_Type::Int32 GLX_MAX_PBUFFER_PIXELS = 0x8018;
const RF_Type::Int32 GLX_PRESERVED_CONTENTS = 0x801B;
const RF_Type::Int32 GLX_LARGEST_PBUFFER = 0x801C;
const RF_Type::Int32 GLX_WIDTH = 0x801D;
const RF_Type::Int32 GLX_HEIGHT = 0x801E;
const RF_Type::Int32 GLX_EVENT_MASK = 0x801F;
const RF_Type::Int32 GLX_DAMAGED = 0x8020;
const RF_Type::Int32 GLX_SAVED = 0x8021;
const RF_Type::Int32 GLX_WINDOW = 0x8022;
const RF_Type::Int32 GLX_PBUFFER = 0x8023;
const RF_Type::Int32 GLX_NONE_EXT = 0x8000;
const RF_Type::Int32 GLX_SLOW_VISUAL_EXT = 0x8001;
const RF_Type::Int32 GLX_TRUE_COLOR_EXT = 0x8002;
const RF_Type::Int32 GLX_DIRECT_COLOR_EXT = 0x8003;
const RF_Type::Int32 GLX_PSEUDO_COLOR_EXT = 0x8004;
const RF_Type::Int32 GLX_STATIC_COLOR_EXT = 0x8005;
const RF_Type::Int32 GLX_GRAY_SCALE_EXT = 0x8006;
const RF_Type::Int32 GLX_STATIC_GRAY_EXT = 0x8007;
const RF_Type::Int32 GLX_TRANSPARENT_RGB_EXT = 0x8008;
const RF_Type::Int32 GLX_TRANSPARENT_INDEX_EXT = 0x8009;
const RF_Type::Int32 GLX_SHARE_CONTEXT_EXT = 0x800A;
const RF_Type::Int32 GLX_VISUAL_ID_EXT = 0x800B;
const RF_Type::Int32 GLX_SCREEN_EXT = 0x800C;
const RF_Type::Int32 GLX_NON_CONFORMANT_VISUAL_EXT = 0x800D;
const RF_Type::Int32 GLX_DRAWABLE_TYPE_SGIX = 0x8010;
const RF_Type::Int32 GLX_RENDER_TYPE_SGIX = 0x8011;
const RF_Type::Int32 GLX_X_RENDERABLE_SGIX = 0x8012;
const RF_Type::Int32 GLX_FBCONFIG_ID_SGIX = 0x8013;
const RF_Type::Int32 GLX_RGBA_TYPE_SGIX = 0x8014;
const RF_Type::Int32 GLX_COLOR_INDEX_TYPE_SGIX = 0x8015;
const RF_Type::Int32 GLX_MAX_PBUFFER_WIDTH_SGIX = 0x8016;
const RF_Type::Int32 GLX_MAX_PBUFFER_HEIGHT_SGIX = 0x8017;
const RF_Type::Int32 GLX_MAX_PBUFFER_PIXELS_SGIX = 0x8018;
const RF_Type::Int32 GLX_OPTIMAL_PBUFFER_WIDTH_SGIX = 0x8019;
const RF_Type::Int32 GLX_OPTIMAL_PBUFFER_HEIGHT_SGIX = 0x801A;
const RF_Type::Int32 GLX_PRESERVED_CONTENTS_SGIX = 0x801B;
const RF_Type::Int32 GLX_LARGEST_PBUFFER_SGIX = 0x801C;
const RF_Type::Int32 GLX_WIDTH_SGIX = 0x801D;
const RF_Type::Int32 GLX_HEIGHT_SGIX = 0x801E;
const RF_Type::Int32 GLX_EVENT_MASK_SGIX = 0x801F;
const RF_Type::Int32 GLX_DAMAGED_SGIX = 0x8020;
const RF_Type::Int32 GLX_SAVED_SGIX = 0x8021;
const RF_Type::Int32 GLX_WINDOW_SGIX = 0x8022;
const RF_Type::Int32 GLX_PBUFFER_SGIX = 0x8023;
const RF_Type::Int32 GLX_DIGITAL_MEDIA_PBUFFER_SGIX = 0x8024;
const RF_Type::Int32 GLX_BLENDED_RGBA_SGIS = 0x8025;
const RF_Type::Int32 GLX_MULTISAMPLE_SUB_RECT_WIDTH_SGIS = 0x8026;
const RF_Type::Int32 GLX_MULTISAMPLE_SUB_RECT_HEIGHT_SGIS = 0x8027;
const RF_Type::Int32 GLX_VISUAL_SELECT_GROUP_SGIX = 0x8028;
const RF_Type::Int32 GLX_HYPERPIPE_ID_SGIX = 0x8030;
const RF_Type::Int32 GLX_PBUFFER_HEIGHT = 0x8040;
const RF_Type::Int32 GLX_PBUFFER_WIDTH = 0x8041;
const RF_Type::Int32 GLX_SAMPLE_BUFFERS_3DFX = 0x8050;
const RF_Type::Int32 GLX_SAMPLES_3DFX = 0x8051;
const RF_Type::Int32 GLX_SWAP_METHOD_OML = 0x8060;
const RF_Type::Int32 GLX_SWAP_EXCHANGE_OML = 0x8061;
const RF_Type::Int32 GLX_SWAP_COPY_OML = 0x8062;
const RF_Type::Int32 GLX_SWAP_UNDEFINED_OML = 0x8063;
const RF_Type::Int32 GLX_EXCHANGE_COMPLETE_INTEL = 0x8180;
const RF_Type::Int32 GLX_COPY_COMPLETE_INTEL = 0x8181;
const RF_Type::Int32 GLX_FLIP_COMPLETE_INTEL = 0x8182;
const RF_Type::Int32 GLX_RENDERER_VENDOR_ID_MESA = 0x8183;
const RF_Type::Int32 GLX_RENDERER_DEVICE_ID_MESA = 0x8184;
const RF_Type::Int32 GLX_RENDERER_VERSION_MESA = 0x8185;
const RF_Type::Int32 GLX_RENDERER_ACCELERATED_MESA = 0x8186;
const RF_Type::Int32 GLX_RENDERER_VIDEO_MEMORY_MESA = 0x8187;
const RF_Type::Int32 GLX_RENDERER_UNIFIED_MEMORY_ARCHITECTURE_MESA = 0x8188;
const RF_Type::Int32 GLX_RENDERER_PREFERRED_PROFILE_MESA = 0x8189;
const RF_Type::Int32 GLX_RENDERER_OPENGL_CORE_PROFILE_VERSION_MESA = 0x818A;
const RF_Type::Int32 GLX_RENDERER_OPENGL_COMPATIBILITY_PROFILE_VERSION_MESA = 0x818B;
const RF_Type::Int32 GLX_RENDERER_OPENGL_ES_PROFILE_VERSION_MESA = 0x818C;
const RF_Type::Int32 GLX_RENDERER_OPENGL_ES2_PROFILE_VERSION_MESA = 0x818D;
const RF_Type::Int32 GLX_RENDERER_ID_MESA = 0x818E;
const RF_Type::Int32 GLX_LOSE_CONTEXT_ON_RESET_ARB = 0x8252;
const RF_Type::Int32 GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB = 0x8256;
const RF_Type::Int32 GLX_NO_RESET_NOTIFICATION_ARB = 0x8261;
const RF_Type::Int32 GLX_CONTEXT_PROFILE_MASK_ARB = 0x9126;
const RF_Type::Int32 GLX_SAMPLE_BUFFERS = 100000;
const RF_Type::Int32 GLX_SAMPLE_BUFFERS_ARB = 100000;
const RF_Type::Int32 GLX_SAMPLE_BUFFERS_SGIS = 100000;
const RF_Type::Int32 GLX_SAMPLES = 100001;
const RF_Type::Int32 GLX_SAMPLES_ARB = 100001;
const RF_Type::Int32 GLX_SAMPLES_SGIS = 100001;
const RF_Type::Int32 GLX_COVERAGE_SAMPLES_NV = 100001;

} }

#ifndef RF_SHORTHAND_NAMESPACE_OGL
#define RF_SHORTHAND_NAMESPACE_OGL
    namespace RF_GL = RadonFramework::GL;
#endif

#endif // RF_GL_OPENGLX11CONSTANTS_HPP