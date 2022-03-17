#ifndef OPENGL_SOLARSYSTEM_AUDIOSOURCE_HPP
#define OPENGL_SOLARSYSTEM_AUDIOSOURCE_HPP

#include <AL/al.h>
#include <AL/alc.h>
#include <AL/alut.h>

#include <AL/al.h>
#include <AL/alc.h>
#include <AL/alut.h>

class AudioSource {
public:
    AudioSource(float x, float y, float z, float maxDistance);
    ~AudioSource();

    void play(ALuint buffer) const;
    void stop() const;

    bool isPlaying() const;
    void setLooping(bool loop) const;
    void setVolume(float volume) const;
    void setPosition(float x, float y, float z) const;

private:
    ALuint sourceId{};
    ALint state{};
};

#endif // OPENGL_SOLARSYSTEM_AUDIOSOURCE_HPP
