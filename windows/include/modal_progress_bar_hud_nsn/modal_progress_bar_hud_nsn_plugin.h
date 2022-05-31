#ifndef FLUTTER_PLUGIN_MODAL_PROGRESS_BAR_HUD_NSN_PLUGIN_H_
#define FLUTTER_PLUGIN_MODAL_PROGRESS_BAR_HUD_NSN_PLUGIN_H_

#include <flutter_plugin_registrar.h>

#ifdef FLUTTER_PLUGIN_IMPL
#define FLUTTER_PLUGIN_EXPORT __declspec(dllexport)
#else
#define FLUTTER_PLUGIN_EXPORT __declspec(dllimport)
#endif

#if defined(__cplusplus)
extern "C" {
#endif

FLUTTER_PLUGIN_EXPORT void ModalProgressBarHudNsnPluginRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar);

#if defined(__cplusplus)
}  // extern "C"
#endif

#endif  // FLUTTER_PLUGIN_MODAL_PROGRESS_BAR_HUD_NSN_PLUGIN_H_