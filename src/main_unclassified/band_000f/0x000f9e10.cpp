/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 800F9F7887C6087E10175049A9138B5BFD8F57042EDFA04A902C6258705E2221
 * Entry: 0x000f9e10, Ghidra index: 3127, label: FUN_000f9e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching original XBE: these two guest VAs contain NUL-terminated
 * 16-bit UTF-16 format strings, referenced by PUSH immediate instructions.
 * Syntax-only declarations; guest-to-host relocation/linking is NOT done. */
extern const uint16_t u__d__s___d__0040cc9c[];
extern const uint16_t u__d__s_0040cc90[];

void FUN_000f9e10(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int *piVar5;
  undefined1 auStack_a0 [160];
  
  piVar5 = (int *)0x0;
  if ((in_ECX != (int *)0x0) && (iVar2 = (**(code **)(*in_ECX + 4))(), iVar2 == 1)) {
    piVar5 = in_ECX;
  }
  if (((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0xc4c), iVar2 == 0)) ||
     (*(int *)(iVar2 + 0x14) != 0x62bd076)) {
    iVar2 = 0;
  }
  if ((piVar5 != (int *)0x0) && (iVar2 != 0)) {
    iVar4 = *(int *)(iVar2 + 0xb0 + in_EAX * 4);
    iVar1 = *(int *)(iVar2 + (0x2d - in_EAX) * 4);
    if (in_EAX == 0) {
      if (iVar4 < iVar1) {
        in_EAX = 1;
        iVar4 = iVar1;
      }
    }
    else if ((in_EAX == 1) && (iVar1 < iVar4)) {
      in_EAX = 0;
      iVar4 = iVar1;
    }
    iVar1 = *(int *)(iVar2 + 0x18 + in_EAX * 4);
    if (iVar1 != 0) {
      if (iVar1 == *(int *)(iVar2 + (7 - in_EAX) * 4)) {
        uVar3 = FUN_001e97c0(in_EAX + 1);
        FUN_002ea9a9(auStack_a0,0x50,u__d__s___d__0040cc9c,iVar4,uVar3);
        FUN_0010a7d0();
        return;
      }
      uVar3 = FUN_001e97c0();
      FUN_002ea9a9(auStack_a0,0x50,u__d__s_0040cc90,iVar4,uVar3);
      FUN_0010a7d0();
    }
  }
  return;
}
