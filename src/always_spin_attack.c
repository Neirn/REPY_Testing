#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "repy_api.h"

// Patches a function in the base game that's used to check if the player should quickspin.
RECOMP_PATCH s32 Player_CanSpinAttack(Player* this) {
    recomp_printf("HELLO\n");
    REPY_FN_SETUP;
    REPY_FN_CLEANUP;
    recomp_printf("WORLD\n");

    // Always spin attack.
    return true;
}


