/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E67A7390AD8DB619D7C24823494627D5157C60098AE3A25F31E6CF9A4CC6827A
 * Entry: 0x00072190, Ghidra index: 1275, label: FUN_00072190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00061500(void);

void FUN_00072190(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0;
  uVar1 = FUN_00061500(unaff_ESI + 2);
  unaff_ESI[3] = uVar1;
  unaff_ESI[4] = 0;
  puVar2 = unaff_ESI + 0xe;
  iVar3 = 7;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x23] = 0;
  puVar2 = unaff_ESI + 0x25;
  iVar3 = 7;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *unaff_ESI = param_1;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  *(undefined1 *)(unaff_ESI + 0x21) = 0;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x34] = 0;
  *(undefined1 *)(unaff_ESI + 0x32) = 1;
  return;
}
