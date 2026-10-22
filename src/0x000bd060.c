/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88A1880101570FDE7B18C4545E959CD19FD29CD19CF9C75D6BCED237105A56AD
 * Entry: 0x000bd060, Ghidra index: 2304, label: FUN_000bd060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bd060(undefined4 param_1)

{
  ushort uVar1;
  byte bVar2;
  int *piVar3;
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    piVar3 = (int *)(**(code **)(*(int *)(*(int *)(in_ECX + 0x10) + 0x48) + 0x18))();
    if (piVar3 != (int *)0x0) {
      uVar1 = (ushort)(piVar3[2] - *piVar3 >> 0x1f);
      *(ushort *)(in_ECX + 0x20) = ((ushort)(piVar3[2] - *piVar3) ^ uVar1) - uVar1;
      uVar1 = (ushort)(piVar3[3] - piVar3[1] >> 0x1f);
      *(ushort *)(in_ECX + 0x22) = ((ushort)(piVar3[3] - piVar3[1]) ^ uVar1) - uVar1;
    }
  }
  bVar2 = *(byte *)(in_ECX + 0xe8);
  if ((bVar2 & 1) == 0) {
    if (*(int *)(in_ECX + 0xe0) == 0) goto LAB_000bd0ea;
    bVar2 = bVar2 | 1;
  }
  else {
    if (*(int *)(in_ECX + 0xe0) != 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xe0) + 0x5a4) + 0xc4))(param_1);
      FUN_000b21f0(param_1);
      goto LAB_000bd0ea;
    }
    bVar2 = bVar2 & 0xfe;
  }
  *(byte *)(in_ECX + 0xe8) = bVar2;
LAB_000bd0ea:
  FUN_000beae0();
  FUN_000beae0();
  return;
}
