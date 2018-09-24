OSX_MIN_VERSION=10.8
OSX_SDK_VERSION=10.11
OSX_SDK=/home/user/qmctor/depends/SDKs/MacOSX10.11.sdk
LD64_VERSION=253.9
darwin_CC=clang -target $(host) -mmacosx-version-min=$(OSX_MIN_VERSION) --sysroot /home/user/qmctor/depends/SDKs/MacOSX10.11.sdk -mlinker-version=$(LD64_VERSION)
darwin_CXX=clang++ -target $(host) -mmacosx-version-min=$(OSX_MIN_VERSION) --sysroot /home/user/qmctor/depends/SDKs/MacOSX10.11.sdk -mlinker-version=$(LD64_VERSION) -stdlib=libc++

darwin_CFLAGS=-pipe
darwin_CXXFLAGS=$(darwin_CFLAGS)

darwin_release_CFLAGS=-O2
darwin_release_CXXFLAGS=$(darwin_release_CFLAGS)

darwin_debug_CFLAGS=-O1
darwin_debug_CXXFLAGS=$(darwin_debug_CFLAGS)

darwin_native_toolchain=native_cctools
