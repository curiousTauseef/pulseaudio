liri_add_settings_module(PulseAudio
    CONTENTS
        contents/main.qml
        contents/AppsPage.qml
        contents/InputPage.qml
        contents/OutputPage.qml
        contents/SinkDelegate.qml
        contents/StreamDelegate.qml
        contents/VolumePage.qml
        contents/VolumeSlider.qml
    TRANSLATIONS_PATH
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../translations/settings"
)
