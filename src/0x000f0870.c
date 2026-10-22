/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09BA31009452771BB05D2D273FE21E8DA9F213C67C8EBEDEABDC7743CC969B61
 * Entry: 0x000f0870, Ghidra index: 3003, label: FUN_000f0870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000f0870(void)

{
  int *in_EAX;
  int iVar1;
  wchar_t *__s2;
  wchar_t *__s1;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  int iStack_8;
  uint uStack_4;
  
  if (in_EAX == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*in_EAX + 4))();
  if (iVar1 != 1) {
    return 0;
  }
  uStack_4 = 7;
  iStack_8 = 0;
  uStack_18 = (wchar_t *)((uint)uStack_18._2_2_ << 0x10);
  FUN_00087940(auStack_1c,0,0xffffffff);
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  __s2 = (wchar_t *)FUN_001e97c0();
  if (iStack_8 != 0) {
    __s1 = uStack_18;
    if (uStack_4 < 8) {
      __s1 = (wchar_t *)&uStack_18;
    }
    iVar1 = _wcscmp(__s1,__s2);
    if (iVar1 == 0) goto LAB_000f0922;
  }
  FUN_0010a7d0();
LAB_000f0922:
  if (uStack_4 < 8) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uStack_18);
}
