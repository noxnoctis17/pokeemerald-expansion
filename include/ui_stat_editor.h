#ifndef GUARD_UI_MENU_H
#define GUARD_UI_MENU_H

#include "main.h"

void Task_OpenStatEditorFromStartMenu(u8 taskId);
void StatEditor_Init(MainCallback callback);

extern const u8 *const gNatureNamePointers[];
// extern const struct Ability gAbilitiesInfo[][ABILITY_NAME_LENGTH + 1]; //--nox stat editor change to abilitiesinfo to keep up with rhh?
// extern const u8 gAbilityNames[][ABILITY_NAME_LENGTH + 1]; //--nox stat editor ability names original
extern const struct SpeciesInfo gSpeciesInfo[];


#endif // GUARD_UI_MENU_H
