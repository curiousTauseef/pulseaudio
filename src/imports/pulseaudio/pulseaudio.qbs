import qbs 1.0

LiriQmlPlugin {
    name: "pulseaudioplugin"
    pluginPath: "Liri/PulseAudio"

    Depends { name: "PulseAudio" }

    condition: {
        if (!PulseAudio.found)
            throw "PulseAudio is required to build " + targetName;

        return true;
    }

    cpp.defines: []
    cpp.includePaths: base.concat(["qpulseaudio"])

    files: ["*.cpp", "*.h", "qpulseaudio/*.cpp", "qpulseaudio/*.h", "qmldir", "*.qml", "*.qmltypes"]
}
