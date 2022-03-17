#ifndef GLSOLARSYSTEM_SOLARSYSTEM_H
#define GLSOLARSYSTEM_SOLARSYSTEM_H

#include "../display/display.hpp"
#include "../gui/gui.hpp"
#include "../model/loader.hpp"
#include "../shader/sunshader.hpp"
#include "../shader/planetshader.hpp"
#include "../shader/regularshader.hpp"
#include "../render/renderer.hpp"
#include "../entity/planets/mercury.hpp"
#include "../entity/planets/sun.hpp"
#include "../entity/planets/venus.hpp"
#include "../entity/planets/earth.hpp"
#include "../entity/planets/mars.hpp"
#include "../entity/planets/jupiter.hpp"
#include "../entity/planets/saturn.hpp"
#include "../entity/planets/uranus.hpp"
#include "../entity/planets/neptune.hpp"
#include "../entity/skybox.hpp"
#include "../entity/planets/saturnrings.hpp"
#include "../audio/audiomaster.hpp"
#include "../audio/audiosource.hpp"

class SolarSystem {

public:
    SolarSystem();
    ~SolarSystem();

    void update();
    void render();

    Display *getDisplay() const;

private:
    std::vector<Entity *> planets;
    std::vector<AudioSource *> sounds;

    Display *display = nullptr;
    Gui *gui = nullptr;

    Loader *loader = nullptr;
    SunShader *sunShader = nullptr;
    PlanetShader *planetShader = nullptr;
    RegularShader *regularShader = nullptr;
    Renderer *renderer = nullptr;

    Light *sunLight = nullptr;
    Sun *sun = nullptr;

    Mercury *mercury = nullptr;
    Venus *venus = nullptr;
    Earth *earth = nullptr;
    Mars *mars = nullptr;
    Jupiter *jupiter = nullptr;
    Saturn *saturn = nullptr;
    SaturnRings *saturnRings = nullptr;
    Uranus *uranus = nullptr;
    Neptune *neptune = nullptr;

    Camera *camera = nullptr;
    Skybox *skybox = nullptr;

    AudioMaster *audioMaster = nullptr;
    AudioSource *sunSound = nullptr;
    AudioSource *mercurySound = nullptr;
    AudioSource *venusSound = nullptr;
    AudioSource *earthSound = nullptr;
    AudioSource *marsSound = nullptr;
    AudioSource *jupiterSound = nullptr;
    AudioSource *saturnSound = nullptr;
    AudioSource *uranusSound = nullptr;
    AudioSource *neptuneSound = nullptr;
    ALuint sunBuffer{};
    ALuint mercuryBuffer{};
    ALuint venusBuffer{};
    ALuint earthBuffer{};
    ALuint marsBuffer{};
    ALuint jupiterBuffer{};
    ALuint saturnBuffer{};
    ALuint uranusBuffer{};
    ALuint neptuneBuffer{};

    void initWindow();
    void initShaders();
    void initRenderer();
    void initEntities();
    void initCameraAndSkybox();
    void initAudio();

    void updateAudio();

    void updatePlanetAroundSunRotation(float time);
    void updatePlanetSelfRotation(float time);

    void updateCameraPosition();

    void renderRegularEntities();
    void renderSun();
    void renderPlanetsAndMoons();
    void updateAndRenderGui();
};

#endif // GLSOLARSYSTEM_SOLARSYSTEM_H