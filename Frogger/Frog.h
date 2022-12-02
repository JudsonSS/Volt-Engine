/**********************************************************************************
// Frog (Arquivo de Cabeçalho)
// 
// Criação:     19 Dez 2012
// Atualização: 14 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Define o objeto Sapo no jogo Frogger
//
**********************************************************************************/

#ifndef _FROGGER_FROG_H_
#define _FROGGER_FROG_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"             // tipos específicos da engine
#include "Object.h"            // interface de object
#include "Sprite.h"            // interface de sprites

// ---------------------------------------------------------------------------------

class Frog : public Object
{
private:
    Sprite * sprite;

public:
    Frog();
    ~Frog();

    void Update();
    void Draw();
};

// ---------------------------------------------------------------------------------
// Funções Membro Inline

inline void Frog::Draw()
{ sprite->Draw(x,y,z); }

// ---------------------------------------------------------------------------------

#endif