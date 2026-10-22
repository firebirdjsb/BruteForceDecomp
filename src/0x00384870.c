/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51981B17F818DCEE5DFCF9D77B4AF347309346E1302163833D8E5BCF3A999756
 * Entry: 0x00384870, Ghidra index: 13650, label: FUN_00384870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384870(void)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  ushort *in_EDX;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  
  uVar4 = 1;
  if (*(char *)(in_ECX + 0x460) != '\0') {
    bVar2 = 1;
    do {
      bVar3 = (byte)uVar4;
      if ((*in_EDX & uVar4) != 0) {
        if ((in_EDX[1] & uVar4) == 0) {
          bVar1 = *(byte *)(in_ECX + 0x461);
          if ((bVar3 & bVar1) != 0) {
            *(byte *)(in_ECX + 0x461) = ~bVar3 & bVar1;
            FUN_00382637(in_ECX,bVar2);
          }
        }
        else {
          bVar1 = *(byte *)(in_ECX + 0x461);
          if ((bVar3 & bVar1) == 0) {
            *(byte *)(in_ECX + 0x461) = bVar1 | bVar3;
          }
          else {
            FUN_00382637(in_ECX,bVar2);
          }
          FUN_00382307(in_ECX,bVar2);
        }
      }
      uVar4 = (ushort)(byte)(bVar3 << 1);
      bVar5 = bVar2 < *(byte *)(in_ECX + 0x460);
      bVar2 = bVar2 + 1;
    } while (bVar5);
  }
  return;
}
