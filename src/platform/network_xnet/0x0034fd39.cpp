/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C80DDCCFF70D27609C4C09F5830AED547F4FE7CF462DF12C4D48833E52A93AA
 * Entry: 0x0034fd39, Ghidra index: 13040, label: FUN_0034fd39
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034fd39(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  iVar3 = param_1;
  for (puVar1 = *(undefined4 **)(in_ECX + 0xa8c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    param_1 = puVar1[0x12];
    iVar4 = puVar1[0x13];
    bVar2 = false;
    if (param_1 != 0) {
      do {
        if (*(int *)(iVar4 + 0x94) == iVar3) {
          if (*(char *)(iVar3 + 2) == '\x01') {
            if (*(char *)(iVar4 + 0xc) != '\x06') {
              FUN_0034f23b(puVar1,iVar4,6);
              bVar2 = true;
            }
            *(int *)(iVar3 + 0x128) = *(int *)(iVar3 + 0x128) + -1;
            *(undefined4 *)(iVar4 + 0x94) = 0;
          }
          else if (*(char *)(iVar4 + 0xc) == '\x03') {
            FUN_0034f23b(puVar1,iVar4,(byte)-(puVar1[0x15] != 0) + 5);
            bVar2 = true;
          }
        }
        iVar4 = iVar4 + 0xac;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      if (bVar2) {
        FUN_0034f4c3(puVar1);
      }
    }
  }
  return;
}
