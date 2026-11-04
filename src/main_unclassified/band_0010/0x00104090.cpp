/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D20A5C0E963EABEBEB56CA7644508C1C1713809F6831CBA5E39EE53741D89ED4
 * Entry: 0x00104090, Ghidra index: 3311, label: FUN_00104090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfdc;
int FUN_00104090(undefined4 param_1,int *param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int unaff_EDI;
  
  iVar2 = FUN_002ea01d(0x88);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_001032e0();
  }
  piVar3[9] = *param_2;
  (**(code **)(*piVar3 + 0x2c))();
  piVar3[0x18] = 0x10e241aa;
  piVar3[5] = *(int *)(unaff_EDI + 0x7c);
  (**(code **)(*piVar3 + 0x1c))();
  piVar3[6] = *(int *)(unaff_EDI + 0x80);
  (**(code **)(*piVar3 + 0x1c))();
  iVar2 = *(int *)(unaff_EDI + 0x7c);
  piVar3[0x21] = *(int *)(unaff_EDI + 0x80);
  piVar3[0x20] = iVar2;
  piVar3[2] = unaff_EDI;
  (**(code **)(*piVar3 + 0x30))();
  piVar4 = (int *)FUN_000a7770(param_1);
  piVar5 = (int *)piVar3[0x1f];
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      piVar3[0x1f] = 0;
    }
    piVar3[0x1f] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
  if (piVar3[0x1f] == 0) {
    uVar6 = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
    DAT_0046cfdc = uVar6 * 0x19660d + 0x3c6ef35f;
    param_2 = (int *)CONCAT22(0xff00,CONCAT11((char)((ulonglong)DAT_0046cfdc % 0xff),
                                              (char)((ulonglong)uVar6 % 0xff)));
    piVar3[0x19] = (int)param_2;
  }
  piVar5 = (int *)FUN_002ea01d(8);
  *piVar5 = (int)piVar3;
  *(char *)(piVar5 + 1) = param_3;
  piVar5 = (int *)*piVar5;
  bVar1 = *(byte *)(piVar5 + 10);
  if ((bool)(bVar1 >> 1 & 1) != (param_3 == '\0')) {
    *(byte *)(piVar5 + 10) = ((param_3 == '\0') << 1 ^ bVar1) & 2 ^ bVar1;
    (**(code **)(*piVar5 + 0x24))();
  }
  FUN_001611d0();
  if (*(int *)(unaff_EDI + 0x88) == 0) {
    return -1;
  }
  return (*(int *)(unaff_EDI + 0x8c) - *(int *)(unaff_EDI + 0x88) >> 2) + -1;
}
