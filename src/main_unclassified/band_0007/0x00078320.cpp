/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9729330D22434A2C49706F0F9C0887DEA531996D94758FEDAEB16888320CF193
 * Entry: 0x00078320, Ghidra index: 1424, label: FUN_00078320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000782c0(int param_1);

uint FUN_00078320(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_000782c0(param_3);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 == 1) {
      return (int)*(float *)(iVar2 + 4);
    }
    if (iVar1 == 2) {
      return *(uint *)(iVar2 + 4);
    }
    if (iVar1 == 3) {
      return (uint)*(byte *)(iVar2 + 4);
    }
  }
  return 0;
}
