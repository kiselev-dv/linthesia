// -*- mode: c++; coding: utf-8 -*-

// Linthesia

#ifndef __OPTIONS_STATE_H
#define __OPTIONS_STATE_H

#include "SharedState.h"
#include "StringTile.h"
#include "GameState.h"
#include "CompatibleSystem.h"
#include "MenuLayout.h"

#include <string>

class OptionsState : public GameState {

public:
    OptionsState(const SharedState &state): 
    m_state(state){
    }

protected:
    virtual void Init();
    virtual void Update();
    virtual void Resize();
    virtual void Draw(Renderer &renderer) const;

private:
    ButtonState m_back_button;

    StringTile* m_min_key;
    StringTile* m_max_key;

    SharedState m_state;
    bool m_skip_next_mouse_up;
};

#endif // __OPTIONS_STATE_H