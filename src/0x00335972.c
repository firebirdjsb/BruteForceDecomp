/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D885B83F053132DF181C28B6A604A893CC9DE88C28CC8308E782B58AA1D4F164
 * Entry: 0x00335972, Ghidra index: 12440, label: FUN_00335972
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00335972(int param_1,ushort param_2,undefined4 param_3,uint *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (0xfa < param_2) {
    return 0x80150001;
  }
  *(ushort *)(param_1 + 0xc) = param_2;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x30);
    do {
      puVar1 = (undefined4 *)*param_4;
      *param_4 = (uint)(puVar1 + 2);
      if (param_5 < puVar1 + 2) {
        return 0x80150001;
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar4 < param_2);
    if (0xf9 < uVar4) {
      return 0;
    }
  }
  puVar2 = (undefined4 *)((uVar4 + 3) * 0x10 + param_1);
  iVar3 = 0xfa - uVar4;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}
