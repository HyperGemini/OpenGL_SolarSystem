#ifndef OPENGL_SOLARSYSTEM_AUDIOMASTER_HPP
#define OPENGL_SOLARSYSTEM_AUDIOMASTER_HPP

#include <AL/al.h>
#include <AL/alc.h>
#include <AL/alut.h>
#include <vector>
#include <string>

class AudioMaster {
public:
    AudioMaster();
    ~AudioMaster();

    static void setListenerData(float x, float y, float z);
    ALuint loadSound(const std::string &audioPath);

private:
    std::vector<ALuint> buffers;

    ALuint source{};
    ALint state{};
};

#endif // OPENGL_SOLARSYSTEM_AUDIOMASTER_HPP
