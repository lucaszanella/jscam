#include <jni.h>
#include <android/log.h>
#include <string>
#include "native-lib1.h"

JNIEXPORT jstring JNICALL Java_com_rtsp_RtspInterface_helloWorld(
    JNIEnv *env, jobject thiz) {

   return (*env)->NewStringUTF(env, "Hello from JNI !
Compiled with ABI " ABI ".");
}