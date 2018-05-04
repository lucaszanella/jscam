#include <jni.h>
#include <android/log.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL Java_com_rtsp_RtspInterface_helloWorld(
    JNIEnv *env, jobject thiz) {
    std::string hello = "Hello from C++";
   return env->NewStringUTF(hello.c_str());
}