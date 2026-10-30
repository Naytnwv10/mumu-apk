plugins {
    id("com.android.application")
    id("org.jetbrains.kotlin.android")
}

android {
    namespace = "com.mumu.virtualizer"
    compileSdk = 35

    defaultConfig {
        applicationId = "com.mumu.virtualizer"
        minSdk = 28
        targetSdk = 35
        versionCode = 1
        versionName = "1.0.0"

        externalNativeBuild { cmake { cppFlags += "-std=c++17" } }
        ndk { abiFilters += listOf("arm64-v8a", "x86_64") }
    }

    externalNativeBuild { cmake { path = file("src/main/cpp/CMakeLists.txt") } }
}
