#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring
JNICALL
Java_com_example_cmakesecureapikeys_MainActivity_stringFromJNI(JNIEnv *env, jobject object) {
    std::string hello = "Hello from Jni";
    return env->NewStringUTF(hello.c_str());
}