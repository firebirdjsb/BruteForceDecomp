/* Brute Force original Xbox - explicit guest32 call and return model.
 * Input x86 body SHA-256: 0A72B625B8E9E1A301DDF3C84EC304EDED77FC8886C86F41F03EFD6FA1FAC2B5
 * Entry: 0x00311a3d, Ghidra index: 11908, label: IDirectSound_Release
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_indirect_wrappers.h"

void DSOUND__IDirectSound_Release(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch)
{
    bf_guest32_sound_release_wrapper(guest, 0x00311a3du, 8u, dispatch);
}
