package com.rtsp;

public class RtspInterface {

    public static native String helloWorld();

    /* This is another native method declaration that is *not*
     * implemented by 'hello-jni'. This is simply to show that
     * you can declare as many native methods in your Java code
     * as you want, their implementation is searched in the
     * currently loaded native libraries only the first time
     * you call them.
     *
     * Trying to call this function will result in a
     * java.lang.UnsatisfiedLinkError exception !
     */
    //public native String  unimplementedStringFromJNI();

    static {
        System.loadLibrary("myRtspClient");
        System.loadLibrary("rtspInterface");
    }
}
