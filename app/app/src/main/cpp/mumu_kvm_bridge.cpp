
#include <jni.h>
#include <string>
#include <android/log.h>
#include <fcntl.h>
#include <unistd.h>

#define LOG_TAG "MuMuNativeKVM"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

extern "C" JNIEXPORT jboolean JNICALL
Java_com_mumu_virtualizer_MainActivity_nativeInitAVFHypervisor(
        JNIEnv* env, jobject, jint cores, jlong ramMB) {
    int kvm_fd = open("/dev/kvm", O_RDWR | O_CLOEXEC);
    if (kvm_fd < 0) return JNI_FALSE;
    close(kvm_fd);
    return JNI_TRUE;
}

extern "C" JNIEXPORT jint JNICALL
Java_com_mumu_virtualizer_MainActivity_nativeStartVirtualMachine(
        JNIEnv* env, jobject, jstring apkPath) {
    return 0;
}
