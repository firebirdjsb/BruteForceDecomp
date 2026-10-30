/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81350855F64D0D63A043D2D4AEED927374CCA7912DCB37AC38839FBEBFF4C64C
 * Entry: 0x0008b820, Ghidra index: 1681, label: FUN_0008b820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008b820(int param_1)

{
  undefined4 uVar1;
  undefined1 local_200 [512];
  
  uVar1 = FUN_001e97c0();
  FUN_002ea9a9(local_200,0xff,uVar1);
  uVar1 = FUN_002eaa70(local_200);
  FUN_000876a0(param_1 + 0x3c,uVar1);
  return;
}
