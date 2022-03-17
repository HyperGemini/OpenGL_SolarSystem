#include "audiosource.hpp"

AudioSource::AudioSource(float x, float y, float z, float maxDistance) {
    alGenSources(1, &sourceId);
    alSourcef(sourceId, AL_GAIN, 1);
    alSourcef(sourceId, AL_PITCH, 1);
    alSource3f(sourceId, AL_POSITION, x, y, z);

    alSourcef(sourceId, AL_ROLLOFF_FACTOR, 1);
    alSourcef(sourceId, AL_REFERENCE_DISTANCE, 6);
    alSourcef(sourceId, AL_MAX_DISTANCE, maxDistance);
}

AudioSource::~AudioSource() {
    stop();
    alDeleteSources(1, &sourceId);

    alutExit();
}

void AudioSource::play(ALuint buffer) const {
    stop();

    alSourcei(sourceId, AL_BUFFER, buffer);
    alSourcePlay(sourceId);
}

void AudioSource::stop() const { alSourceStop(sourceId); }

bool AudioSource::isPlaying() const { return (state == AL_PLAYING); }

void AudioSource::setLooping(bool loop) const {
    alSourcei(sourceId, AL_LOOPING, loop ? AL_TRUE : AL_FALSE);
}

void AudioSource::setVolume(float volume) const {
    alSourcef(sourceId, AL_GAIN, volume);
}

void AudioSource::setPosition(float x, float y, float z) const {
    alSource3f(sourceId, AL_POSITION, x, y, z);
}

