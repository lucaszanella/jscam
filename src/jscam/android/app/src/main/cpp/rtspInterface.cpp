#include <jni.h>
#include <android/log.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL Java_com_rtsp_RtspInterface_helloWorld(
    JNIEnv *env, jobject thiz) {

   return (*env)->NewStringUTF(env, "Hello from JNI !");
}