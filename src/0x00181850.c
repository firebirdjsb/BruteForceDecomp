/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BC17FCBAB96E8DD78766221EE90E424CDA4873F0AA5F2B894F11965E4D460C0
 * Entry: 0x00181850, Ghidra index: 5164, label: FUN_00181850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Type propagation algorithm not settling */

void FUN_00181850(char param_1)

{
  int *in_EAX;
  uint local_10 [4];
  
  if (in_EAX[0x1a] != 0) {
    local_10[0] = 0;
    DSOUND__IDirectSoundBuffer_GetStatus(in_EAX[0x1a],local_10);
    if ((local_10[0] & 3) != 0) {
      DSOUND__IDirectSoundBuffer_Stop(in_EAX[0x1a]);
    }
    if (param_1 != '\0') {
      local_10[0] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      local_10[1] = 0;
      (**(code **)(*in_EAX + 0xc))(local_10 + 1);
      (**(code **)(*in_EAX + 0x10))(local_10);
    }
    (**(code **)(*in_EAX + 0x2c))(0,0);
    in_EAX[0xb] = 0;
    FUN_00181630(0x3f800000,0x3f800000);
    in_EAX[0x1c] = 0;
  }
  return;
}
