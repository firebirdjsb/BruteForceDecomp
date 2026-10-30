/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B2C2BC0B553D05DD5FEADF6C8A0F205B0A0D818CB0EA60779DF9F3094848FD1
 * Entry: 0x0034886e, Ghidra index: 12901, label: FUN_0034886e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034886e(void)

{
  byte bVar1;
  byte *pbVar2;
  int in_ECX;
  uint uVar3;
  
  if (*(int *)(in_ECX + 0xae4) == 7) {
    pbVar2 = *(byte **)(in_ECX + 0xac4);
    for (uVar3 = (uint)*(byte *)(in_ECX + 0xe); uVar3 != 0; uVar3 = uVar3 - 1) {
      if ((*pbVar2 & 4) != 0) {
        bVar1 = pbVar2[2];
        if (bVar1 == 8) {
          return;
        }
        if ((2 < bVar1) && (bVar1 < 6)) {
          return;
        }
      }
      pbVar2 = pbVar2 + 0x130;
    }
    *(undefined4 *)(in_ECX + 0xae4) = 6;
    KeSetEvent(*(undefined4 *)(in_ECX + 0xaec),1,0);
  }
  return;
}
