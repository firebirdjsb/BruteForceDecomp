/* Brute Force original Xbox - explicit guest32 call and return model.
 * Input x86 body SHA-256: D3270BE9D4962CDCDB62EF4C3242B41B960C1F0CB7621E035393E8B7607DE92C
 * Entry: 0x00311a58, Ghidra index: 11910, label: IDirectSoundBuffer_Release
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_indirect_wrappers.h"

void DSOUND__IDirectSoundBuffer_Release(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch)
{
    bf_guest32_sound_release_wrapper(guest, 0x00311a58u, 0x1cu, dispatch);
}
