/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA42F8948D06F7CA61647C49DC942620B0D82B689945B00521650E5456D3EA6A
 * Entry: 0x0031aed2, Ghidra index: 12283, label: FUN_0031aed2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0031aed2(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = (param_1 & 0xfff) + 0xfff + param_2 >> 0xc;
  param_1 = param_1 & 0xfffff000;
  FUN_003118f0();
  puVar1 = *(undefined4 **)(in_ECX + 4);
  do {
    if (puVar1 == (undefined4 *)(in_ECX + 4)) {
      puVar1 = (undefined4 *)FUN_0031ab3b(param_1,uVar2);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00311923();
        FUN_0031ac2d(*(undefined2 *)(puVar1 + 2),param_1,uVar2 & 0xffff);
      }
LAB_0031af49:
      FUN_00311923();
      return puVar1;
    }
    if (((puVar1[3] != 0) && (param_1 == puVar1[4])) &&
       ((short)uVar2 == *(short *)((int)puVar1 + 10))) {
      puVar1[3] = puVar1[3] + 1;
      goto LAB_0031af49;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}
