/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A53D4666E9CBC4882902434B4FE44E2DC3AA32B0A1C74313E1BE5A060A7205A
 * Entry: 0x002ff300, Ghidra index: 11057, label: ___ascii_strnicmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2003 Release */

undefined4 ___ascii_strnicmp(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      bVar2 = *param_1;
      cVar1 = *param_2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_002ff351;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_002ff351:
      uVar5 = 0xffffffff;
      if (!bVar6) {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}
