/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE84F61D14B95CB4BDC4CC137F4835D6738E70864D02D01CC5CA8711D3D84B89
 * Entry: 0x00201830, Ghidra index: 7261, label: FUN_00201830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400294;
extern uint32_t *DAT_00469944;
/* WARNING: Removing unreachable block (ram,0x00201951) */
/* WARNING: Removing unreachable block (ram,0x00201927) */

char FUN_00201830(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x48);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x50))(piVar1);
    return cVar2;
  }
  if (*(int *)(unaff_EDI + 0x6c) == 0) {
    iVar3 = FUN_002ea01d(0x20);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(byte *)(iVar3 + 0x1c) = *(byte *)(iVar3 + 0x1c) & 0xfc;
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
    *(int *)(unaff_EDI + 0x6c) = iVar3;
  }
  iVar3 = *(int *)(*(int *)(unaff_EDI + 0x6c) + 4);
  if ((iVar3 == 0) || ((*(int *)(*(int *)(unaff_EDI + 0x6c) + 8) - iVar3) / 0x1c == 0)) {
    FUN_0001f4f0(unaff_EDI + 0x4c,0,0xffffffff);
    FUN_0001f4f0(&DAT_00400294,0,0xffffffff);
    FUN_001e8a20();
    FUN_000784c0(0);
    FUN_000784c0(0);
    FUN_00178690(*(undefined4 *)(unaff_EDI + 0x6c));
  }
  iVar3 = *(int *)(*(int *)(unaff_EDI + 0x6c) + 0x14);
  if ((iVar3 != 0) && (cVar2 = (**(code **)(*DAT_00469944 + 0x18))(iVar3), cVar2 != '\0')) {
    *(byte *)(unaff_EDI + 0x3d) = *(byte *)(unaff_EDI + 0x3d) | 0x40;
    return '\x01';
  }
  cVar2 = FUN_00178730();
  if (cVar2 != '\0') {
    *(byte *)(unaff_EDI + 0x3d) = *(byte *)(unaff_EDI + 0x3d) | 0x40;
  }
  return cVar2;
}
