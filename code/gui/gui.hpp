#ifndef OPENGL_SOLARSYSTEM_GUI_HPP
#define OPENGL_SOLARSYSTEM_GUI_HPP

#include "../display/display.hpp"
#include "../../libraries/imgui/imgui.h"
#include "../../libraries/imgui/imgui_impl_glfw.h"
#include "../../libraries/imgui/imgui_impl_opengl3.h"

#include <string>

enum class FocusState {
    NONE,
    SUN,
    MERCURY,
    VENUS,
    EARTH,
    MARS,
    JUPITER,
    SATURN,
    URANUS,
    NEPTUNE
};

class Gui {
public:
    explicit Gui(Display *display);
    virtual ~Gui();

    static void initFrame();
    void update();
    static void render();

    FocusState getFocusState() const;

    float getVolumeScale() const;
    float getTimeScale() const;
    float getLightIntensityScale() const;

    const float *getColors() const;

private:
    bool freePressed{};

    bool sunPressed{};
    bool mercuryPressed{};
    bool venusPressed{};
    bool earthPressed{};
    bool marsPressed{};
    bool jupiterPressed{};
    bool saturnPressed{};
    bool uranusPressed{};
    bool neptunePressed{};

    float volumeScale = 1.0f;
    float timeScale = 1.0f;
    float lightIntensityScale = 1.0f;
    float colors[3] = {1, 1, 1};

    FocusState focusState = FocusState::NONE;
    static void button(const std::string &label, const std::string &info,
                       bool *value);
    void displayCameraWindow();
    void displaySettingsWindow();
    void displayInfoWindow();
};

#endif // OPENGL_SOLARSYSTEM_GUI_HPP
