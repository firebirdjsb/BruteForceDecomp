/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 034C07FC7192354F2C4D85BE23FA620675BDDFF4EE13EF4E0268DCC4663D9D80
 * Entry: 0x002591f0, Ghidra index: 8494, label: FUN_002591f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c60;
extern char s_0x_08x_00406248[];
undefined * FUN_002591f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  iVar2 = 0;
  if (-1 < param_2) {
    (**(code **)(*param_1 + 0x18))(param_1,&param_2);
    iVar2 = (param_2 - iVar1) + -1;
    if (iVar2 < 0) {
      return (undefined *)0x0;
    }
  }
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
      param_1 = (int *)param_1[3];
    } while (iVar2 != 0);
  }
  FUN_002eaa86(&DAT_004a5c60,s_0x_08x_00406248,param_1[1]);
  return &DAT_004a5c60;
}
