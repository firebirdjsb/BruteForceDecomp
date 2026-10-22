/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5651AD1916ACA3E098C531F105F9ADCB1B3D10221E8D0252CD96963E6EEE25E9
 * Entry: 0x00353aaf, Ghidra index: 13097, label: FUN_00353aaf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353aaf(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = FUN_0035359e(param_1,*(undefined4 *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x4a),
                       *(undefined2 *)(param_1 + 0x48),0x40000,0,0,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00353152(param_1);
    *(undefined4 *)(param_1 + 0x88) = 0;
    puVar3 = (uint *)FUN_0034cc49();
    *puVar3 = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8;
    uVar2 = *(uint *)(param_1 + 0xc4);
    puVar3[1] = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8;
    *(undefined1 *)((int)puVar3 + 9) = 0x10;
    *(undefined1 *)(puVar3 + 2) = 0x50;
    *(ushort *)((int)puVar3 + 10) =
         CONCAT11((char)*(undefined2 *)(param_1 + 200),
                  (char)((ushort)*(undefined2 *)(param_1 + 200) >> 8));
    FUN_0034a7ce(iVar1,*(undefined4 *)(param_1 + 0x44),6,param_1 + 0x4c);
  }
  return;
}
