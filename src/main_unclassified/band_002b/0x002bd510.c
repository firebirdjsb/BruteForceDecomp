/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25B067748B57FC6F2C906BB5D96DC47B80706FE63B61DBBC6ACCBCA6C2860D79
 * Entry: 0x002bd510, Ghidra index: 9948, label: FUN_002bd510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd510(void)

{
  uint *puVar1;
  int unaff_EBX;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(unaff_EBX + 0xea);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    puVar1 = *(uint **)(*(int *)(unaff_EBX + 0xec) + uVar2 * 4);
    if ((*puVar1 & 0xc) == 0) {
      if ((byte)puVar1[0x19] == 8) {
        FUN_002be1c0(puVar1[3]);
      }
      else {
        FUN_002be240();
      }
    }
    *puVar1 = *puVar1 & 0xffffffcf;
  }
  *(undefined2 *)(unaff_EBX + 0xea) = 0;
  return;
}
