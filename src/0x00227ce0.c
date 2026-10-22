/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB39342FFE7D8555F6009B6A3205CD89B02BA647361F701225E614A8D4B3B9A8
 * Entry: 0x00227ce0, Ghidra index: 7655, label: FUN_00227ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00227ce0(int *param_1,undefined4 param_2)

{
  int *unaff_retaddr;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x50))(param_2);
  fStack_8 = (float)unaff_retaddr[0x82];
  fStack_10 = fStack_8 * -(float)param_1[2];
  fStack_c = fStack_8 * -(float)param_1[5];
  fStack_8 = fStack_8 * -(float)param_1[8];
  (**(code **)(*unaff_retaddr + 0x58))(&fStack_10,fStack_8,fStack_c);
  *(undefined4 *)(iStack_4 + 0x10) = *(undefined4 *)(*(int *)(iStack_4 + 8) + 0xb60);
  return;
}
