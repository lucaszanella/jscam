#include <jni.h>
#include <android/log.h>
#include <string>
#include <iostream>
#include "rtspClient.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

using std::cout;
using std::endl;

extern "C" JNIEXPORT jstring JNICALL Java_com_rtsp_RtspInterface_helloWorld(JNIEnv *env, jobject thiz) {
    std::string hello = "Hello from C++";
   return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL Java_com_rtsp_RtspInterface_rtspInit(JNIEnv *env, jobject thiz, jstring address) {
    __android_log_print(ANDROID_LOG_WARN, "rtspInterface.cpp", "Starting RTSP describe operation");
    
    string RtspUri(env->GetStringUTFChars(address, 0));
	// string RtspUri("rtsp://192.168.81.145/ansersion");
	RtspClient Client;

	/* Set up rtsp server resource URI */
	Client.SetURI(RtspUri);
	
	/* Send DESCRIBE command to server */
	Client.DoDESCRIBE();

}