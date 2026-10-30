/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CB456BEDC4493872A1CA5EE385E9AED21E0859845B0DF7FFCA75F2EC55E4104
 * Entry: 0x001e9f00, Ghidra index: 6867, label: FUN_001e9f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e9f00(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  uVar1 = *in_EAX;
  local_4 = 7;
  local_8 = 0;
  local_18 = local_18 & 0xffff0000;
  FUN_00087940(local_1c,0,0xffffffff);
  *in_EAX = *unaff_ESI;
  FUN_00087940(in_EAX + 1,0,0xffffffff);
  *unaff_ESI = uVar1;
  FUN_00087940(unaff_ESI + 1,0,0xffffffff);
  if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  return;
}
