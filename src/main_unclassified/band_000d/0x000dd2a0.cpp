/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E995D172DCFAD53ADC0A23CEC3BAFA4ABD197EC999F04168F9E7D6AA37348CBF
 * Entry: 0x000dd2a0, Ghidra index: 2706, label: FUN_000dd2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0014f3a0(undefined4 param_1);

void FUN_000dd2a0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  int local_4;
  
  *(undefined4 *)(unaff_EDI + 0x634) = 0;
  *(undefined4 *)(unaff_EDI + 0xa38) = 0;
  local_4 = 0;
  do {
    if (local_4 == 0) {
      if (*(undefined4 **)(unaff_EDI + 0x220) == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)**(undefined4 **)(unaff_EDI + 0x220);
        puVar4 = *(undefined4 **)(unaff_EDI + 0x220);
      }
    }
    else {
      if (*(undefined4 **)(unaff_EDI + 0x214) == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)**(undefined4 **)(unaff_EDI + 0x214);
      }
      puVar4 = *(undefined4 **)(unaff_EDI + 0x214);
    }
    for (; puVar3 != puVar4; puVar3 = (undefined4 *)*puVar3) {
      iVar2 = puVar3[2];
      if (iVar2 != 0) {
        FUN_0014f3a0(param_1);
        bVar1 = *(byte *)(iVar2 + 0x94);
        if ((((bVar1 & 0x40) != 0) && ((bVar1 & 8) == 0)) && ((bVar1 & 0x10) != 0)) {
          if (local_4 == 0) {
            *(int *)(unaff_EDI + 0x234 + *(int *)(unaff_EDI + 0x634) * 4) = iVar2;
            iVar2 = *(int *)(unaff_EDI + 0x634) + 1;
            *(int *)(unaff_EDI + 0x634) = iVar2;
          }
          else {
            *(int *)(unaff_EDI + 0x638 + *(int *)(unaff_EDI + 0xa38) * 4) = iVar2;
            iVar2 = *(int *)(unaff_EDI + 0xa38) + 1;
            *(int *)(unaff_EDI + 0xa38) = iVar2;
          }
          if (iVar2 == 0x100) break;
        }
      }
    }
    local_4 = local_4 + 1;
    if (1 < local_4) {
      return;
    }
  } while( true );
}
