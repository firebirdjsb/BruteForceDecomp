/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EDC83B52044530DECCD50B5803D0E152ADCDEB5588B8B81ACF4CFA205A43A1F
 * Entry: 0x003187a2, Ghidra index: 12202, label: FUN_003187a2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003187a2(byte param_1,byte param_2)

{
  if (((param_1 & 0xf) != 0) || ((param_2 & 3) != 0)) {
    DSOUND__CMcpxVoiceClient_SetVolume();
  }
  if ((param_1 & 0x10) != 0) {
    DSOUND__CMcpxVoiceClient_SetPitch();
  }
  if ((param_1 & 0x20) != 0) {
    FUN_00317f6d();
  }
  if ((param_2 & 0xc) != 0) {
    DSOUND__CMcpxVoiceClient_SetFilter(0);
  }
  return;
}
