/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_yinyuetai_fangarden_exo_view_LiveVideoView */

#ifndef _Included_com_yinyuetai_tools_live_LiveVideoView
#define _Included_com_yinyuetai_tools_live_LiveVideoView
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_yinyuetai_tools_live_LiveVideoView
 * Method:    init_media
 * Signature: (Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;)I
 */
JNIEXPORT jint JNICALL Java_com_yinyuetai_tools_live_XPlayer_initVideoPlayer
(JNIEnv *, jobject, jstring);


JNIEXPORT jint JNICALL Java_com_yinyuetai_tools_live_XPlayer_readThread
  (JNIEnv *, jobject ,jint);
/*
 * Class:     com_chris_yanlong_XPlayer
 * Method:    play
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_yinyuetai_tools_live_XPlayer_play
  (JNIEnv *, jobject ,jint);

JNIEXPORT jint JNICALL Java_com_yinyuetai_tools_live_XPlayer_decodeVideo
  (JNIEnv *env, jobject obj ,jint handle);

/*
 * Class:     com_chris_yanlong_XPlayer
 * Method:    pauseVideoPlayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_yinyuetai_tools_live_XPlayer_pauseVideoPlayer
  (JNIEnv *, jobject);

/*
 * Class:     com_chris_yanlong_XPlayer
 * Method:    stopVideoPlayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_yinyuetai_tools_live_XPlayer_stopVideoPlayer
  (JNIEnv *, jobject ,jint handle);


JNIEXPORT void JNICALL Java_com_yinyuetai_tools_live_XPlayer_initOpenGL
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_com_yinyuetai_tools_live_XPlayer_openGLResize
  (JNIEnv *env, jobject obj ,jint ,jint ,jint ,jint );


JNIEXPORT void JNICALL Java_com_yinyuetai_tools_live_XPlayer_openGLRend
  (JNIEnv *env, jobject obj);
#ifdef __cplusplus
}
#endif
#endif
