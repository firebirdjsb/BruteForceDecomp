/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C56DB4D5C1B15A8B18ABF201D9DE28DFA84A05E07B8E683CCDB379E9FEE68E24
 * Entry: 0x002be1c0, Ghidra index: 9969, label: FUN_002be1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched prototype only; Xbox guest ABI_UNVERIFIED. */
extern undefined4 FUN_002bcf80(void);
void FUN_002be1c0(int param_1)

{
  int iVar1;
  int iVar2;
  char *unaff_ESI;
  uint uVar3;
  
  do {
    uVar3 = (uint)*(ushort *)(unaff_ESI + 0xe);
    do {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        if (*unaff_ESI == '\b') {
          iVar2 = *(int *)(unaff_ESI + 4);
          iVar1 = *(int *)(unaff_ESI + 8);
          if (iVar2 == 0) {
            *(int *)(*(int *)(param_1 + 8) + 0x1a8) = iVar1;
          }
          else {
            *(int *)(iVar2 + 8) = iVar1;
          }
          if (iVar1 != 0) {
            *(int *)(iVar1 + 4) = iVar2;
          }
          *unaff_ESI = '\x01';
          iVar2 = *(int *)(param_1 + 8);
          iVar1 = *(int *)(iVar2 + 0x18);
          *(int *)(unaff_ESI + 8) = iVar1;
          if (iVar1 != 0) {
            *(char **)(iVar1 + 4) = unaff_ESI;
          }
          unaff_ESI[4] = '\0';
          unaff_ESI[5] = '\0';
          unaff_ESI[6] = '\0';
          unaff_ESI[7] = '\0';
          *(char **)(iVar2 + 0x18) = unaff_ESI;
        }
        return;
      }
    } while ((*(char *)(*(int *)(*(int *)(unaff_ESI + 0x10) + uVar3 * 4) + 100) < '\b') ||
            (iVar2 = FUN_002bcf80(), iVar2 != 1));
  } while( true );
}
