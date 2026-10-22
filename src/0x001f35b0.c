/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74C1A6F0B51B0DB61548402DC8441F1D0A12E29C4C83EAD1382E8443B551859D
 * Entry: 0x001f35b0, Ghidra index: 7020, label: FUN_001f35b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0039df40;
void FUN_001f35b0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int local_50;
  
  if (*(int *)(unaff_ESI + 8) == 0) {
    iVar4 = *(int *)(*(int *)(unaff_ESI + 0x38) + 0x110);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 8) != 0)) {
      puVar2 = (undefined4 *)FUN_002ea01d(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 0x38) + 0x110) + 8);
        *puVar2 = &PTR_LAB_0039df40;
        puVar2[1] = uVar1;
      }
      if (puVar2 != (undefined4 *)0x0) {
        FUN_002b4710();
        iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x18) + 0x1c) + 0xa44) + 0xe0);
        iVar3 = FUN_002ea01d(0xa0);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_002ccc70(iVar3,**(undefined4 **)(iVar4 + 0xc),0);
        }
        *(int *)(unaff_ESI + 8) = iVar4;
        *(int *)(iVar4 + 0x9c) = unaff_ESI + 0xc;
        *(uint *)(*(int *)(unaff_ESI + 8) + 0x8c) =
             (unaff_ESI - *(int *)(*(int *)(unaff_ESI + 0x18) + 0x18) >> 6) + 0xf90920b4U |
             0x80000000;
        iVar4 = *(int *)(unaff_ESI + 8);
        if ((*(uint *)(iVar4 + 0x70) & 0x300) == 0) {
          FUN_002c00d0(*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x10));
          *(uint *)(iVar4 + 0x70) = *(uint *)(iVar4 + 0x70) & 0xfffffdff | 0x100;
        }
        if (local_50 != 0) {
          (*(code *)PTR_FUN_003bc654)(local_50);
          return;
        }
      }
    }
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
  }
  return;
}
