from conans import ConanFile, CMake


class MytestlibbConan(ConanFile):
    name = "MyTestConanPackage"
    version = "1.0"
    url = "https://blah.co.uk"
    url_version = "1.2.5"
    author = "james.bourne"
    description = "Test conan package for git branch name"
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False]}
    default_options = {"shared": False}
    generators = "cmake"
    exports_sources = "src/*", "!conanfile.py"
    

    def build(self):
        cmake = CMake(self)
        cmake.configure(source_folder="src")
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.configure(source_folder="src")
        cmake.install()

    def package_info(self):
        self.cpp_info.libs = ["MyTestConanPackage"]
