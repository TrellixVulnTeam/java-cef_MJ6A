/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_network_CefWebPluginManager_N */

#ifndef _Included_org_cef_network_CefWebPluginManager_N
#define _Included_org_cef_network_CefWebPluginManager_N
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_network_CefWebPluginManager_N
 * Method:    N_VisitPlugins
 * Signature: (Lorg/cef/callback/CefWebPluginInfoVisitor;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefWebPluginManager_1N_N_1VisitPlugins(JNIEnv*,
                                                            jobject,
                                                            jobject);

/*
 * Class:     org_cef_network_CefWebPluginManager_N
 * Method:    N_RefreshPlugins
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefWebPluginManager_1N_N_1RefreshPlugins(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefWebPluginManager_N
 * Method:    N_UnregisterInternalPlugin
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefWebPluginManager_1N_N_1UnregisterInternalPlugin(
    JNIEnv*,
    jobject,
    jstring);

/*
 * Class:     org_cef_network_CefWebPluginManager_N
 * Method:    N_RegisterPluginCrash
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefWebPluginManager_1N_N_1RegisterPluginCrash(JNIEnv*,
                                                                   jobject,
                                                                   jstring);

/*
 * Class:     org_cef_network_CefWebPluginManager_N
 * Method:    N_IsWebPluginUnstable
 * Signature:
 * (Ljava/lang/String;Lorg/cef/callback/CefWebPluginUnstableCallback;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefWebPluginManager_1N_N_1IsWebPluginUnstable(JNIEnv*,
                                                                   jobject,
                                                                   jstring,
                                                                   jobject);

#ifdef __cplusplus
}
#endif
#endif
