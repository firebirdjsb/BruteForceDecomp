/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 293EAE76BA14E7EDC6B3DFF901570EF16D49177775C9068A3DF00CB8DD554465
 * Entry: 0x00069270, Ghidra index: 1161, label: FUN_00069270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00068d20(int *param_1);
extern void FUN_00069340(void);
extern void FUN_00068cb0(void);

extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b60;
void FUN_00069270(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int unaff_EDI;
  undefined8 uVar8;
  undefined8 local_8;
  
  XAPILIB__QueryPerformanceCounter((uint *)(unaff_EDI + 0x68));
  uVar2 = *(uint *)(unaff_EDI + 0x68);
  uVar3 = *(uint *)(unaff_EDI + 0x60);
  uVar5 = uVar2 - uVar3;
  uVar4 = *(uint *)(unaff_EDI + 0x70);
  iVar7 = (*(int *)(unaff_EDI + 0x6c) - *(int *)(unaff_EDI + 100)) - (uint)(uVar2 < uVar3);
  *(uint *)(unaff_EDI + 0x70) = uVar4 + uVar5;
  *(uint *)(unaff_EDI + 0x74) = *(int *)(unaff_EDI + 0x74) + iVar7 + (uint)CARRY4(uVar4,uVar5);
  XAPILIB__QueryPerformanceCounter((uint *)(unaff_EDI + 0x60));
  puVar1 = (uint *)(unaff_EDI + 0x48);
  *puVar1 = uVar5;
  *(int *)(unaff_EDI + 0x4c) = iVar7;
  if (*(char *)(unaff_EDI + 0x58) != '\0') {
    *puVar1 = 0;
    *(undefined4 *)(unaff_EDI + 0x4c) = 0;
    *(undefined1 *)(unaff_EDI + 0x58) = 0;
    DAT_00469b60 = 0;
  }
  if (*(int *)(DAT_0046995c + 0x1c) == 0) {
    uVar8 = __allmul(*(undefined4 *)(unaff_EDI + 0x78),*(undefined4 *)(unaff_EDI + 0x7c),100,0);
    local_8 = __alldiv(uVar8,1000,0);
    iVar7 = (int)((ulonglong)local_8 >> 0x20);
    if ((iVar7 < *(int *)(unaff_EDI + 0x4c)) ||
       ((puVar6 = puVar1, iVar7 <= *(int *)(unaff_EDI + 0x4c) && ((uint)local_8 <= *puVar1)))) {
      puVar6 = (uint *)&local_8;
    }
    *puVar1 = *puVar6;
    *(uint *)(unaff_EDI + 0x4c) = puVar6[1];
  }
  FUN_00068d20(unaff_EDI);
  FUN_00069340();
  FUN_00068cb0();
  return;
}
