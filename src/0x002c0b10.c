/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A2D63FA32DA6C65E19ABDC61F21F9812C4437A24039309CBB5D0CD3F75512E5
 * Entry: 0x002c0b10, Ghidra index: 10013, label: FUN_002c0b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469e20;
extern uint32_t _DAT_00469f3c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c0b10(void)

{
  uint uVar1;
  int *in_ECX;
  
  FUN_002c1860(in_ECX);
  uVar1 = in_ECX[5];
  if ((uVar1 & 0xc000) == 0) {
    if ((uVar1 & 0xf) == 0) {
      if ((float)in_ECX[0x15] <
          *(float *)(&DAT_00469e20 + (uVar1 >> 0x16 & 0xff) * 4) + _DAT_00469f3c) {
        (**(code **)(*in_ECX + 0x20))();
        return;
      }
      FUN_002c0220(in_ECX,0,2);
      return;
    }
    FUN_002c0220(in_ECX,0,1);
  }
  return;
}
