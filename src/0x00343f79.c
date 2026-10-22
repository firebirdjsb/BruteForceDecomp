/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C129BDBA3E9626F496FC184000AA46BF60674F17DD639DF79001A38F46454F38
 * Entry: 0x00343f79, Ghidra index: 12730, label: FUN_00343f79
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00343f79(undefined4 param_1)

{
  undefined4 uVar1;
  int extraout_ECX;
  
  FUN_00343068(param_1);
  if (*(undefined1 **)(extraout_ECX + 0x10) == (undefined1 *)0x0) {
    uVar1 = FUN_003437b3(extraout_ECX,1);
  }
  else {
    if (*(undefined1 **)(extraout_ECX + 0x10) == *(undefined1 **)(extraout_ECX + 0x24)) {
      **(undefined1 **)(extraout_ECX + 0x24) = 0;
      *(int *)(extraout_ECX + 0x24) = *(int *)(extraout_ECX + 0x24) + 1;
    }
    *(int *)(extraout_ECX + 0x18) = *(int *)(extraout_ECX + 0x24) - *(int *)(extraout_ECX + 0x10);
    uVar1 = 1;
  }
  return uVar1;
}
