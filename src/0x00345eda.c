/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30B073C4BB3E45168C0A89793A4D47F8AF44D4D9E2A3A68A46EF8CFDB59E969D
 * Entry: 0x00345eda, Ghidra index: 12826, label: FUN_00345eda
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00345eda(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *in_ECX;
  uint *puVar4;
  undefined4 *puVar5;
  
  if (((*in_ECX & 0x2000000) != 0) && ((*in_ECX & 0x20000000) == 0)) {
    puVar1 = in_ECX + 0x2f6;
    puVar5 = (undefined4 *)(-(uint)((uint *)*puVar1 != puVar1) & *puVar1);
    while (puVar3 = puVar5, puVar3 != (undefined4 *)0x0) {
      if (puVar3 == (undefined4 *)0x0) {
        puVar4 = (uint *)*puVar1;
      }
      else {
        puVar4 = (uint *)*puVar3;
      }
      puVar5 = (undefined4 *)(-(uint)(puVar4 != puVar1) & (uint)puVar4);
      if (((((*(byte *)(puVar3 + 3) & 2) != 0) && (1 < *(byte *)(puVar3 + 0x1f))) &&
          (iVar2 = puVar3[0x11], iVar2 != 0)) &&
         ((iVar2 == param_1 || ((param_1 == 0 && ((iVar2 == 0 || ((char)iVar2 != '\0')))))))) {
        FUN_00353845(puVar3,0x80072746);
      }
    }
  }
  return;
}
