/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 154FCDAA23399AAE8A04FDBE217C10C1DEC45FB670F0E02FA6730E8698602BAB
 * Entry: 0x002e41c0, Ghidra index: 10434, label: FUN_002e41c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e41c0(undefined1 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  undefined2 extraout_var;
  undefined4 unaff_EDI;
  
  iVar2 = 4;
  if ((*(byte *)(in_ECX + 3) & 0xe) == 0) {
    bVar1 = *(byte *)(in_ECX + 3) >> 4;
  }
  else {
    bVar1 = 7;
  }
  if ((bVar1 == 1) || (bVar1 == 2)) {
    iVar2 = 6;
  }
  else if (bVar1 == 7) {
    uVar3 = FUN_002e4180();
    bVar1 = FUN_002e8fe0(uVar3);
    iVar2 = FUN_002e4180();
    uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),param_1) & 0xffffff01;
    return CONCAT22((short)((uint)unaff_EDI >> 0x10),(ushort)bVar1) + iVar2 +
           CONCAT22(extraout_var,(ushort)(byte)uVar4) + 6 +
           CONCAT22((short)(uVar4 >> 0x10),(ushort)(byte)(*(char *)(in_ECX + 5) + 1));
  }
  return iVar2;
}
