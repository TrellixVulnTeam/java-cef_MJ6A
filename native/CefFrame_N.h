/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_browser_CefFrame_N */

#ifndef _Included_org_cef_browser_CefFrame_N
#define _Included_org_cef_browser_CefFrame_N
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_Dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefFrame_1N_N_1Dispose(JNIEnv*,
                                                                   jobject,
                                                                   jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_GetIdentifier
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_org_cef_browser_CefFrame_1N_N_1GetIdentifier(JNIEnv*, jobject, jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_GetURL
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_cef_browser_CefFrame_1N_N_1GetURL(JNIEnv*,
                                                                     jobject,
                                                                     jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_GetName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_cef_browser_CefFrame_1N_N_1GetName(JNIEnv*,
                                                                      jobject,
                                                                      jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_IsMain
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_browser_CefFrame_1N_N_1IsMain(JNIEnv*,
                                                                      jobject,
                                                                      jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_IsValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_browser_CefFrame_1N_N_1IsValid(JNIEnv*,
                                                                       jobject,
                                                                       jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_IsFocused
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_cef_browser_CefFrame_1N_N_1IsFocused(JNIEnv*, jobject, jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_GetParent
 * Signature: (J)Lorg/cef/browser/CefFrame;
 */
JNIEXPORT jobject JNICALL Java_org_cef_browser_CefFrame_1N_N_1GetParent(JNIEnv*,
                                                                        jobject,
                                                                        jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_ExecuteJavaScript
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL
Java_org_cef_browser_CefFrame_1N_N_1ExecuteJavaScript(JNIEnv*,
                                                      jobject,
                                                      jlong,
                                                      jstring,
                                                      jstring,
                                                      jint);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_Undo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefFrame_1N_N_1Undo(JNIEnv*,
                                                                jobject,
                                                                jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_Redo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefFrame_1N_N_1Redo(JNIEnv*,
                                                                jobject,
                                                                jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_Cut
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefFrame_1N_N_1Cut(JNIEnv*,
                                                               jobject,
                                                               jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_Copy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefFrame_1N_N_1Copy(JNIEnv*,
                                                                jobject,
                                                                jlong);

/*
 * Class:     org_cef_browser_CefFrame_N
 * Method:    N_Paste
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefFrame_1N_N_1Paste(JNIEnv*,
                                                                 jobject,
                                                                 jlong);

#ifdef __cplusplus
}
#endif
#endif
