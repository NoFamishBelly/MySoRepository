//
// Created by lizheng.zhao on 2023/7/4.
//
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_leon_mysotest_LeonNdkTool_getLeonString(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello I'm Leon";
    return env->NewStringUTF(hello.c_str());
}